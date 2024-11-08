/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaammo <souaammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 10:24:07 by souaammo          #+#    #+#             */
/*   Updated: 2024/11/08 11:07:26 by souaammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(int c, int *len)
{
	 int	temp;

	temp = write(1, &c, 1);
	if (temp == -1)
	{
		*len = -1;
		return ;
	}
	*len += temp;
}
