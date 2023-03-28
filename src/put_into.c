/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_into.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taybakan <taybakan@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 00:10:34 by taybakan          #+#    #+#             */
/*   Updated: 2023/03/28 10:24:12 by taybakan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int     ft_checkdup(t_swap *data)
{
    int     i;
    int     j;
    int     k;
    int     l;

    i = 0;
    while (i < data -> len_a)
    {
        k = data -> s_a[i];
        j = 0;
        while (j < data -> len_a)
        {
            l = data -> s_a[j];
            if ((k == l) && (j != i))
                return(ft_error("duplicate numbers!"));
            j++; 
        }
        i++;
    }
    sa(data);
    return (0);
}

void    ft_put_a(t_swap *data)
{
    int i;

    i = 0;
    data -> numbers = ft_split(data -> str, ' ');
    while(data -> numbers[i])
        i++;
    data -> s_a = malloc(sizeof(int *) * i);
    i = 0;
    while(data -> numbers[i])
    {
        data -> s_a[i] = ft_atoi(data -> numbers[i]);
        i++;
    }
    data -> len_a = i;
    ft_checkdup(data);
}