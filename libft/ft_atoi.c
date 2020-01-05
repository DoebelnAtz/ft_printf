/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 13:00:07 by aadlercr          #+#    #+#             */
/*   Updated: 2019/10/15 15:49:53 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int				result;
	int				sign;

	result = 0;
	while (*str == ' ' || *str == '\n' || *str == '\t'
	|| *str == '\v' || *str == '\f' || *str == '\r')
		str += 1;
	if (*str == '-')
	{
		sign = -1;
		str += 1;
	}
	else
	{
		sign = 1;
		if (*str == '+')
			str += 1;
	}
	while (*str != '\0' && *str >= '0' && *str <= '9')
	{
		result = (10 * result) + *str - '0';
		str++;
	}
	return (result * sign);
}
