#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int				i;
	char			*str;
	 char	b;

	b = ( char)c;
	str = (char *)s;
	i = 0;
	while (str[i] && str[i] != b)
		i++;
	if (str[i] == b)
		return (str + i);
	return (NULL);
}
// int main()
// {
//     char s[] = "tripouille";

//    printf("%s\n", ft_strchr(s, 't' + 256) == s);
//     printf("%s\n", strchr(s, 't' + 256) == s);

// }