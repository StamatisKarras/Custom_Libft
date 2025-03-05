/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarras <skarras@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 10:36:02 by skarras           #+#    #+#             */
/*   Updated: 2025/03/05 13:55:15 by skarras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static void		read_to_buff(t_buffer *buffer);
static size_t	next_index(t_buffer *buffer);
static char		*flush_and_combine(t_buffer *buffer,
					size_t to_flush, char *line);

char	*get_next_line(int fd)
{
	static t_buffer	buffer;
	t_line			l;

	l.line = NULL;
	if (buffer.unflushed_bytes == 0 && buffer.flushed_bytes == 0)
	{
		buffer.fd = fd;
		read_to_buff(&buffer);
	}
	while (1)
	{
		l.new_line_index = next_index(&buffer);
		if (l.new_line_index >= 0)
			return (flush_and_combine(&buffer, l.new_line_index + 1, l.line));
		if (buffer.eof == 1 && buffer.unflushed_bytes > 0)
			return (flush_and_combine(&buffer, buffer.unflushed_bytes, l.line));
		if (buffer.eof == 1 && buffer.unflushed_bytes == 0)
		{
			if (l.line == NULL)
				ft_memset(&buffer, 0, sizeof(t_buffer));
			return (l.line);
		}
		l.line = flush_and_combine(&buffer, buffer.unflushed_bytes, l.line);
		read_to_buff(&buffer);
	}
}

static void	read_to_buff(t_buffer *buffer)
{
	ssize_t	bytes_read;

	bytes_read = read(buffer->fd, buffer->memory, BUFFER_SIZE);
	if (bytes_read <= 0)
	{
		buffer->eof = 1;
		buffer->unflushed_bytes = 0;
		buffer->flushed_bytes = BUFFER_SIZE;
		return ;
	}
	buffer->unflushed_bytes = bytes_read;
	buffer->flushed_bytes = 0;
	if (bytes_read < BUFFER_SIZE && buffer->fd != STDIN_FILENO)
		buffer->eof = 1;
}

static	size_t	next_index(t_buffer *buffer)
{
	size_t	i;
	size_t	offset;

	i = 0;
	offset = buffer->flushed_bytes;
	while (i < buffer->unflushed_bytes)
	{
		if (buffer->memory[offset + i] == '\n')
			return (i);
		i++;
	}
	return (-1);
}

static	char	*flush_and_combine(t_buffer *buffer,
	size_t to_flush, char *line)
{
	size_t	offset;
	char	*temp;

	if (!buffer || buffer->unflushed_bytes == 0 || to_flush == 0)
		return (NULL);
	if (to_flush > buffer->unflushed_bytes)
		to_flush = buffer->unflushed_bytes;
	temp = (char *) malloc((to_flush + 1) * sizeof(char));
	if (!temp)
		return (NULL);
	offset = buffer->flushed_bytes;
	ft_memmove(temp, buffer->memory + offset, to_flush);
	temp[to_flush] = '\0';
	buffer->unflushed_bytes -= to_flush;
	buffer->flushed_bytes += to_flush;
	line = ft_strjoin_and_free(line, temp);
	return (line);
}
