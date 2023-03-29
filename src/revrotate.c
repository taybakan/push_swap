/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   revrotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taybakan <taybakan@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 23:54:27 by taybakan          #+#    #+#             */
/*   Updated: 2023/03/29 23:59:40 by taybakan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int     rra(t_swap *data)
{
    int     temp;
    
    if (data->len_a <= 1)
        return (1);
    temp = data->s_a[data->len_a - 1];
    ft_upone_a(data);
    data->s_a[0] = temp;
    ft_printf("rra\n");
    return (0);
}

int     rrb(t_swap *data)
{
    int     temp;
    
    if (data->len_b <= 1)
        return (1);
    temp = data->s_b[data->len_b - 1];
    ft_upone_b(data);
    data->s_b[0] = temp;
    ft_printf("rrb\n");
    return (0);
}

int     rrr(t_swap *data)
{
    int     temp;
    
    if (data->len_a <= 1)
    return (1);
    temp = data->s_a[data->len_a - 1];
    ft_upone_a(data);
    data->s_a[0] = temp;
    temp = data->s_b[data->len_b - 1];
    ft_upone_b(data);
    data->s_b[0] = temp;
    ft_printf("rrr\n");
    return (0);
}