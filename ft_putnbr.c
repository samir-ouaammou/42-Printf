/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaammo <souaammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 10:29:47 by souaammo          #+#    #+#             */
/*   Updated: 2024/11/08 11:09:00 by souaammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int nbr, int *len)
{
	if (*len == -1)
		return (-1);
	if (nbr == -2147483648)
	{
		ft_putstr("-2147483648", len);
		return ;
	}
	if (nbr < 0)
	{
		ft_putchar('-', len);
		nbr *= -1;
	}
	if (nbr > 9)
		ft_putnbr(nbr / 10, len);
	ft_putchar(((nbr % 10) + '0'), len);
}
