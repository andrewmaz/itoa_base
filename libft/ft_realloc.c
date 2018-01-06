/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrewmazz <andrewmazz@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/19 13:38:18 by andrewmazz        #+#    #+#             */
/*   Updated: 2017/12/19 13:39:07 by andrewmazz       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_realloc(char *str, int size)
{
	char *nstr;

	if (!(nstr = ft_strnew(size + 1)))
		return (NULL);
	if (str)
	{
		ft_memcpy(nstr, str, size);
		free(str);
	}
	return (nstr);
}