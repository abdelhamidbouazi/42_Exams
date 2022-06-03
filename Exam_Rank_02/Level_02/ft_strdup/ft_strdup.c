#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int	i;
	int	len;
	char	*copy;

	i = 0;
	len = ft_strlen(src);
	copy = (char*)malloc(sizeof(char) * len + 1);
	if (copy == NULL)
		return (NULL);
	while (src[i] != '\0')
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}


char *ft_strdup(char *s)
{
	int	i;
	char *s2;

	i = 0;
	while (s[i])
		i++;
	s2 = (char *)malloc(sizeof(char *) * (i + 1));
	if (s2 == NULL)
		return NULL;
	i = 0;
	while (s[i])
	{
		s2[i] = s[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

char *ft_strdup(char *s)
{
	int i;
	char *s2;

	i = 0;
	while (s[i])
		i++;
	s2 = (char *)malloc(sizeof(char *) * (i + 1));
	if (s2 == NULL)
		return NULL;
	i = 0;
	while (s[i])
	{
		s2[i] = s[i];
		i++; 
	}
	s2[i] = '\0';
	return s2;
}