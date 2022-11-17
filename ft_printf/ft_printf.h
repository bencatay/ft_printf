/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caykut <caykut@42.tr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 15:45:09 by caykut            #+#    #+#             */
/*   Updated: 2022/11/17 15:45:11 by caykut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdio.h>
# include <unistd.h>
# include <stdbool.h>
# include <stdarg.h>

int	ft_printf(const char *str, ...);
int	ft_format(va_list *args, char c);
int	ft_int(int a);
int	ft_hex(unsigned int a, char c);
int	ft_point(unsigned long a, int cont);
int	ft_string(char *str);
int	ft_unsigned(unsigned int a);

#endif
