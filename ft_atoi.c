/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jari <sel-jari@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 13:07:20 by sel-jari          #+#    #+#             */
/*   Updated: 2024/10/27 14:24:20 by sel-jari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *a)
{
	int	dec;
	int	sign;

	sign = 1;
	dec = 0;
	while (*a == ' ' || (*a >= 9 && *a <= 13))
		a++;
	if (*a == '-')
	{
		sign = -1;
		a++;
	}
	else if (*a == '+')
		a++;
	while (ft_isdigit(*a))
	{
		dec *= 10;
		dec += *(a++) - '0';
	}
	return (sign * dec);
}
