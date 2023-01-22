#include "libft.h"

static int	nb_mots(const char *str, char c)
{
	int	mots;
	int	sep;

	mots = 0;
	sep = 1;
	while (*str)
	{
		if (*str == c)
			sep = 1;
		else if (sep == 1)
		{
			mots++;
			sep = 0;
		}
		str++;
	}
	return (mots);
}

static size_t nb_lettre(const char *s, char c)
{
    size_t i;

    i = 0;
    while (s[i] && s[i] != c)
        i++;
    return (i);
}

static char **error(char **res, int i)
{
    while (i < 0)
    {
        free(res[i]);
        i--;
    }
    free(res);
    return (NULL);
}

char	**ft_split(const char *str, char c)
{
	char	**tab;
	int		i;
	int		j;

	if (str == NULL)
		return (NULL);
	tab = malloc(sizeof(char *) * (nb_mots(str, c) + 1));
	if (tab == NULL)
		return (NULL);
	i = 0;
	while (nb_mots(str, c))
	{
		while (*str && *str == c)
			str++;
		tab[i] = malloc(sizeof(char) * nb_lettre(str, c) + 1);
		if (!tab[i])
			return (error(tab, i));
		j = 0;
		while (*str && *str != c)
			tab[i][j++] = *str++;
		tab[i++][j] = '\0';
	}
	tab[i] = 0;
	return (tab);
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