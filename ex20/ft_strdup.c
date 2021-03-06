/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkastaci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 15:57:26 by mkastaci          #+#    #+#             */
/*   Updated: 2018/11/09 11:37:00 by mkastaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		taille;
	char	*cpy;
	int		i;

	i = 0;
	taille = 0;
	while (src[taille])
	{
		taille++;
	}
	cpy = (char*)malloc(sizeof(*cpy) * taille + 1);
	while (src[i])
	{
		cpy[i] = src[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}
