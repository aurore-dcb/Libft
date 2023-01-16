#include "libft.h"

static size_t nb_mots(const char *s, char c)
{
    size_t i;
    size_t nb;

    i = 0;
    nb = 0;
    if (s[i] != c)
    {
        nb++;
        i++;
    }
    while (s[i])
    {
        while (s[i] && s[i]!= c)
        {
            if (s[i - 1] == c)
                nb++;
            i++;
        }
        while (s[i] && s[i]== c)
            i++;
    }
    return (nb);
}

static size_t nb_lettre(const char *s, char c)
{
    size_t i;
    size_t nb;

    i = 0;
    nb = 0;
    while (s[i] && s[i] != c)
    {
        nb++;
        i++;
    }
    return (nb);
}

char **ft_split(char const *s, char c)
{
    size_t i;
    size_t j;
    size_t index;
    char **res;

    res = malloc(sizeof(char *) * nb_mots(s, c) + 1);
    if (!res)
        return (NULL);
    i = 0;
    index = 0;
    while (s[i])
    {
        if (s[i] != c)
        {
            j = 0;
            res[index] = malloc(sizeof(char) * nb_lettre(s, c) + 1);
            while (s[i] && s[i] != c)
                res[index][j++] = s[i++];
            res[index++][j++] = 0;
        }
        while (s[i] && s[i] == c)
            i++;
    }
    res[index] = 0;
    return (res);
}

/*#include <stdio.h>
#include <stdlib.h>

int		c_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int		c_strctn(char *str1, char *str2, int at)
{
	int	len;
	int	i;

	len = c_strlen(str2);
	i = 0;
	while (i < len)
	{
		str1[at + i] = str2[i];
		i++;
	}
	str1[at + i] = 0;
	return (len + at);
}

char	*c_strautojoin(char **strs, char *sep)
{
	char	*str;
	int		len;
	int		seplen;
	int		i;
	int		j;

	len = 1;
	seplen = c_strlen(sep);
	i = 0;
	while (strs[i] != NULL)
	{
		len += c_strlen(strs[i]);
		if (strs[i + 1] != NULL)
			len += seplen;
		i++;
	}
	str = malloc(len * sizeof(char));
	i = 0;
	j = 0;
	while (strs[j])
	{
		i = c_strctn(str, strs[j++], i);
		if (strs[j])
			i = c_strctn(str, sep, i);
	}
	return (str);
}

int		main(void)
{
	char **tab;

	tab = ft_split("###Ceci#est#un####succes#!##", '#');
	printf("%s\n", c_strautojoin(tab, " "));
    tab = ft_split("je m'appelle aurore", ' ');
	printf("%s\n", c_strautojoin(tab, " "));
	tab = ft_split("", ' ');
	printf("OK\n");
	tab = ft_split("", 'C');
	printf("OK\n");
	tab = ft_split("       ", ' ');
	printf("OK\n");
	tab = ft_split("         ", ' ');
	printf("OK\n");
}*/