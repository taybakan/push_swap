/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taybakan <taybakan@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 23:01:00 by taybakan          #+#    #+#             */
/*   Updated: 2023/03/30 00:00:04 by taybakan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int     ra(t_swap *data)
{
    int     i;
    int     temp;
    
    if (data->len_a <= 1)
        return (1);
    temp = data->s_a[0];
    ft_downone_a(data);
    i = data->len_a - 1;
    data->s_a[i] = temp;
    ft_printf("ra\n");
    return (0);
}

int     rb(t_swap *data)
{
    int     i;
    int     temp;
    
    if (data->len_b <= 1)
        return (1);
    temp = data->s_b[0];
    ft_downone_b(data);
    i = data->len_b - 1;
    data->s_b[i] = temp;
    ft_printf("rb\n");
    return (0);
}

int     rr(t_swap *data)
{
    int     i;
    int     temp;
    
    if (data->len_a <= 1 || data->len_b <= 1)
        return (1);
    temp = data->s_a[0];
    ft_downone_a(data);
    i = data->len_a - 1;
    data->s_a[i] = temp;
    temp = data->s_b[0];
    ft_downone_b(data);
    i = data->len_b - 1;
    data->s_b[i] = temp;
    ft_printf("rr\n");
    return (0);
}