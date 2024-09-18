
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	if (!s1 || !set)
		return (0);
	i = 0;
	j = ft_strlen(s1);
	while (s1[1] && ft_strchr(set, s1[i]))
		i++;
	while (s1[j - 1] && ft_strchr(set, s1[j - 1]) && j < i)
		j--;
	str = (char *)malloc(sizeof(char) * (j - i +1));
	if (str)
		ft_strlcpy(str, /*&*/s1[i], j - i + 1);
	return (str);
}
