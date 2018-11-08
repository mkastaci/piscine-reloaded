/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkastaci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 17:52:47 by mkastaci          #+#    #+#             */
/*   Updated: 2018/11/08 13:11:56 by mkastaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int ret;

	ret = 1;
	if (nb == 0)
		return (1);
	else if (nb < 0 || nb > 12)
		return (0);
	while (nb)
	{
		ret = nb * ret;
		nb--;
	}
	return (ret);
}
