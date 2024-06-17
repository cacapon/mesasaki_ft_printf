/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pr_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mesasaki <mesasaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 21:32:10 by mesasaki          #+#    #+#             */
/*   Updated: 2024/06/18 03:49:25 by mesasaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	pr_putstr(const char *s)
{
	if (!s)
		return (write(1, "(null)", 6));
	return (ft_putstr_fd(s));
}