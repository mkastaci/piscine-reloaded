/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkastaci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 12:50:55 by mkastaci          #+#    #+#             */
/*   Updated: 2018/11/08 13:19:52 by mkastaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	else if (nb < 0 || nb > 12)
		return (0);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}
