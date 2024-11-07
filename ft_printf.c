/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaammo <souaammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 09:57:51 by souaammo          #+#    #+#             */
/*   Updated: 2024/11/07 12:42:13 by souaammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_all_printf(va_list list, char format, int *len)
{
	if (format == '%')
		ft_putchar('%', len);
	else if (format == 'c')
		ft_putchar(va_arg(list, int), len);
	else if (format == 's')
		ft_putstr(va_arg(list, char *), len);
	else if (format == 'd' || format == 'i')
		ft_putnbr(va_arg(list, int), len);
	else if (format == 'u')
		ft_putuni(va_arg(list, unsigned int), len);
	else if (format == 'x')
		ft_puthex(va_arg(list, unsigned int), "0123456789abcdef", len);
	else if (format == 'X')
		ft_puthex(va_arg(list, unsigned int), "0123456789ABCDEF", len);
	else if (format == 'p')
	{
		ft_putstr("0x", len);
		ft_putptr(va_arg(list, unsigned long), len);
	}
}

int	ft_printf(const char *format, ...)
{
	va_list	list;
	int		len;
	int		i;

	if (!format)
		return (0);
	i = 0;
	len = 0;
	va_start(list, format);
	while (format[i])
	{
		if ((format[i] == '%') && (format[i + 1] == '\0'))
			return (len);
		if (format[i] == '%')
			ft_all_printf(list, format[i + 1], &len);
		else
			ft_putchar(format[i], &len);
		i++;
	}
	return (len);
}
