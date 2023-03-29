/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taybakan <taybakan@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 21:57:13 by taybakan          #+#    #+#             */
/*   Updated: 2023/03/29 23:46:31 by taybakan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int     pb(t_swap *data)
{
    int     temp;

    if (data->len_a == 0)
        return (1);
    ft_upone_b(data);
    temp = data->s_a[0];
    data->s_b[0] = temp;
    data->len_b++;
    ft_downone_a(data);
    data->len_a--;
    ft_printf("en üstte: %d\n", data->s_b[0]);
    return (0);
}

int     ft_downone_a(t_swap *data)
{
    int     i;
    
    i = 0;
    while (i < data->len_a)
    {
        data->s_a[i] = data->s_a[i + 1];
        i++;
    }
    return (0);
}


int     ft_upone_b(t_swap *data)
{
    int     i;
    
    i = data->len_b;
    while (i-- >= 0)
        data->s_b[i + 1] = data->s_b[i];
    return (0);
}