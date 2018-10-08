/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbellona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 21:34:25 by lbellona          #+#    #+#             */
/*   Updated: 2018/10/08 18:51:06 by lbellona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bsq.h"

int		main()
{
    int  Height = 3;
    int  Width = 3;
    
    int map [] = {-1,     -1,      -1,
                 -1,     -1,      -1,
                 -1,      0,      -1};

    //find_nmin(map+1, Width));
    fill_map(map, Width, Height);
    print_map(map, Width, Height);
	return (0);
}
