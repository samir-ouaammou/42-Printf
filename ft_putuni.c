/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuni.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaammo <souaammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 10:34:24 by souaammo          #+#    #+#             */
/*   Updated: 2024/11/08 12:00:27 by souaammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putuni(unsigned int nbr, int *len)
{
	if (nbr > 9)
		ft_putuni(nbr / 10, len);
	ft_putchar(((nbr % 10) + '0'), len);
}
