/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkastaci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 15:57:26 by mkastaci          #+#    #+#             */
/*   Updated: 2018/11/08 16:03:52 by mkastaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char	*ft_strdup(char *src)
{
	int taille;
	char *cpy;
	int i;

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

int main()
{
	printf("le mien : %s \n", ft_strdup("mikailfgdg"));
//	printf("le vrai : %s \n", strdup("mikailfgdg"));
	int g = 1;
	while (g == 1)
	;
	return (0);
}
