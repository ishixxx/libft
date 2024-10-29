/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vihane <vihane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 20:47:32 by vihane            #+#    #+#             */
/*   Updated: 2024/10/22 17:05:21 by vihane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../includes/libft.h"
# include <stdarg.h>
# include <stdint.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

void	ft_print_int(int nb, int *writtencharacter);
void	ft_print_hex(unsigned int nbr, const char format,
			int *writtencharacter);
void	check_format_type(va_list args, const char format,
			int *writtencharacter);
void	ft_print_point(unsigned long long ptr, int *writtencharacter);
void	ft_print_unsigned(unsigned int n, int *writtencharacter);
void	ft_put_point(uintptr_t nbr);
void	ft_put_hex(unsigned int nbr, const char format);
void	ft_print_percent(void);

int		ft_print_string(char *str, int *writtencharacter);
int		ft_printf(const char *format, ...);
int		ft_print_char(char c);

size_t	ft_hex_len(unsigned int nbr);
size_t	ft_point_len(uintptr_t nbr);
size_t	ft_int_len(int n);

#endif
