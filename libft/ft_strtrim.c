/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchatagn <pchatagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 17:07:21 by pchatagn          #+#    #+#             */
/*   Updated: 2024/10/09 16:44:03 by pchatagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(char const *s1, char const *set)
{
	int	count;
	int	i;
	int	j;
	int	b;

	i = 0;
	count = 0;
	while (s1[i++])
	{
		j = 0;
		b = 0;
		while (set[j++])
		{
			if (set[j] == s1[i])
			{
				b = 1;
				break ;
			}
		}
		if (b == 0)
			count++;
	}
	return (count);
}

static void	*ft_check(char const *s1, char const *set, char *new)
{	
	if (!set || !s1 || !new)
		return (NULL);
	return (new);
}

static char	*ft_new(char const *s1, char const *set, char *new, int count)
{
	int		j;
	int		b;
	int		i;

	i = 0;
	while (s1[i])
	{
		j = 0;
		b = 0;
		while (set[j])
		{
			if (set[j] == s1[i])
			{
				b = 1;
				break ;
			}
			j++;
		}
		if (b == 0)
			new[count++] = s1[i];
		i++;
	}
	new[count] = '\0';
	return (new);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new;
	int		i;
	int		j;
	int		count;
	int		b;

	count = ft_count(s1, set);
	new = (char *)malloc((count + 1) * sizeof(char));
	if (!ft_check(s1, set, new))
		return (NULL);
	count = 0;
	new = ft_new(s1, set, new, count);
	return (new);
}

// #include <stdio.h>
// int main(void)
// {
// 	char s1[] = "       salut    ";
// 	char s2[] = " l";
// 	char *new = ft_strtrim(s1, s2);
// 	printf("%s", new);
// 	free(new);
// 	return (0);
// }