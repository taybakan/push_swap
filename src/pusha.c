/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pusha.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taybakan <taybakan@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 22:56:57 by taybakan          #+#    #+#             */
/*   Updated: 2023/03/30 01:13:28 by taybakan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int     pa(t_swap *data)
{
    int     temp;

    if (data->len_b == 0)
        return (1);
    ft_upone_a(data);
    temp = data->s_b[0];
    data->s_a[0] = temp;
    data->len_a++;
    ft_downone_b(data);
    data->len_b--;
    ft_printf("pa\n");
    return (0);
}

int     ft_downone_b(t_swap *data)
{
    int     i;
    
    i = 0;
    while (i < data->len_b)
    {
        data->s_b[i] = data->s_b[i + 1];
        i++;
    }
    return (0);
}


int     ft_upone_a(t_swap *data)
{
    int     i;
    
    i = data->len_a;
    while (i-- >= 0)
        data->s_a[i + 1] = data->s_a[i];
    return (0);
}