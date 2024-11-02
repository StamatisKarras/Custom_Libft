#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char        *sub;
    size_t      i;

    if (len > ft_strlen(&s[start]))
        return (NULL);
    sub = (char *) malloc(len + 1);
    if (!sub)
        return (NULL);
    i = 0;
    while (i < len && s[i])
    {
        sub[i] = s[start + i];
        i++;
    }
    sub[i] = '\0';
    return(sub);
}

int main(void)
{
    char    string[50] = "Hello my name is Stamatis";

    printf("Original string: %s\nSubstring created: %s\n", string, ft_substr(string, 6, 7));
    return (0);
}
