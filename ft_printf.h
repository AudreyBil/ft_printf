/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abillote <abillote@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 15:24:46 by abillote          #+#    #+#             */
/*   Updated: 2023/11/29 15:24:34 by abillote         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdint.h>
# include "libft/libft.h"

int	ft_printf(const char *str, ...);
int	ft_printchar(int c);
int	ft_printpercent(void);
int	ft_printstr(char *s);
int	ft_printptr(void *ptr);
int	ft_printnbr(int c);
int	ft_printunsigned(unsigned int c);
int	ft_printhexa(unsigned int nb, const char c);

#endif
