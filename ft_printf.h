/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daeidi-h <daeidi-h@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 08:26:56 by daeidi-h          #+#    #+#             */
/*   Updated: 2021/10/27 11:48:49 by daeidi-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft/libft.h"

int			ft_printf(const char *fmt, ...);
int			ft_putstr(char *s, int f);
int			ft_count_digit(unsigned long int c, int len_base);
int			ft_putnbr(int n);
#endif