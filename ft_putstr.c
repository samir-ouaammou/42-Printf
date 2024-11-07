/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaammo <souaammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 10:26:34 by souaammo          #+#    #+#             */
/*   Updated: 2024/11/07 13:24:55 by souaammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(const char *str, int *len)
{
	if (!str)
	{
		ft_putstr("(null)", len);
		return ;
	}
	while (*str)
	{
		ft_putchar(*str, len);
		str++;
	}
}
