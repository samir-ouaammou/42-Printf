/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaammo <souaammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 09:57:40 by souaammo          #+#    #+#             */
/*   Updated: 2024/11/07 12:18:10 by souaammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);
void	ft_putchar(int c, int *len);
void	ft_putnbr(int nbr, int *len);
void	ft_putstr(const char *str, int *len);
void	ft_putuni(unsigned int nbr, int *len);
void	ft_putptr(unsigned long nbr, int *len);
void	ft_puthex(unsigned int nbr, char *hex, int *len);

#endif