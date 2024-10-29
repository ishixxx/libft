/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vihane <vihane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 21:21:29 by vihane            #+#    #+#             */
/*   Updated: 2024/10/22 14:34:51 by vihane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_print_unsigned(unsigned int n, int *writtencharacter)
{
	if (n >= 10)
		ft_print_unsigned(n / 10, writtencharacter);
	ft_putchar_fd(n % 10 + '0', 1);
	(*writtencharacter)++;
}
