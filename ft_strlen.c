/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbellona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 18:06:53 by lbellona          #+#    #+#             */
/*   Updated: 2018/10/10 23:48:24 by lbellona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bsq.h"

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}
