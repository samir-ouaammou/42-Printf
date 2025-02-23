/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaammo <souaammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 10:41:24 by souaammo          #+#    #+#             */
/*   Updated: 2024/11/08 12:00:22 by souaammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putptr(unsigned long nbr, int *len)
{
	if (nbr > 15)
		ft_putptr(nbr / 16, len);
	ft_puthex(nbr % 16, "0123456789abcdef", len);
}
