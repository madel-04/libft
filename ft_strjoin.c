
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	int	i;

	if (!s1 || !s2)
		return (0);
	dest = (char *)malloc(sizeof(*s3) * (ft_strlen(s1) + ft_strlen(s2) + 1))
	if (!dest)
		return (0);
	i = 0;
	while (*s1)
		dest[i++] = *s1++;
	while (*s2)
		dest[i++] = *s2++;
	dest[i] = '\0';
	return (dest);
}
