/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daeidi-h <daeidi-h@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 08:25:49 by daeidi-h          #+#    #+#             */
/*   Updated: 2021/11/06 20:31:24 by daeidi-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

int	ft_putstr(char *s, int f)
{
	int	len;

	if (!s)
	{
		write (1, "(null)", 6);
		return (6);
	}
	len = ft_strlen(s);
	write(1, s, len);
	if (f)
	{
		free(s);
		s = NULL;
	}
	return (len);
}

int	ft_count_digit(unsigned long int c, int len_base)
{
	int	len;

	if (!c)
		return (1);
	len = 0;
	while (c > 0)
	{
		c /= len_base;
		len++;
	}
	return (len);
}

int	ft_putnbr(int n)
{	
	int	count;

	count = 0;
	if (n == -2147483648)
	{
		ft_putstr_fd ("-2147483648", 1);
		return (11);
	}
	if (n < 0)
	{
		ft_putchar_fd('-', 1);
		n *= -1;
		count = 1;
	}
	count += ft_count_digit(n, 10);
	ft_putnbr_fd(n, 1);
	return (count);
}
