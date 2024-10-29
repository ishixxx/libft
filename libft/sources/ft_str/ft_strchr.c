/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vihane <vihane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 19:47:25 by vihane            #+#    #+#             */
/*   Updated: 2024/10/22 15:22:26 by vihane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	found;
	int		i;

	found = (char) c;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == found)
			return ((char *) &s[i]);
		i++;
	}
	if (s[i] == found)
		return ((char *)&s[i]);
	return (0);
}
