/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaammo <souaammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 10:38:08 by souaammo          #+#    #+#             */
/*   Updated: 2024/11/08 11:08:42 by souaammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex(unsigned int nbr, char *hex, int *len)
{
	if (*len == -1)
		return (-1);
	if (nbr > 15)
		ft_puthex(nbr / 16, hex, len);
	ft_putchar(hex[nbr % 16], len);
}
