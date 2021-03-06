/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luizfern <lfluiz.lf@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 14:43:01 by luizfern          #+#    #+#             */
/*   Updated: 2021/06/26 21:38:58 by luizfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*strconc;
	int		a;
	int		b;
	int		size;

	a = 0;
	b = 0;
	if (!s1 || !s2)
		return (NULL);
	size = ft_strlen(s1) + ft_strlen(s2);
	strconc = (char *)malloc(sizeof(char) * (size + 1));
	if (strconc == NULL)
		return (NULL);
	while ((unsigned char)s1[a])
	{
		strconc[a] = (unsigned char)s1[a];
		a++;
	}
	while ((unsigned char)s2[b])
		strconc[a++] = (unsigned char)s2[b++];
	strconc[a] = '\0';
	return (strconc);
}
