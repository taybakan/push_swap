/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_and_swap.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taybakan <taybakan@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 22:04:36 by taybakan          #+#    #+#             */
/*   Updated: 2023/03/28 10:31:27 by taybakan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int     sa(t_swap *data)
{
	int     i;
	int     temp;

	i = data -> len_a - 1;
	temp = data -> s_a[i];
	data -> s_a[i] = data -> s_a[i -1];
	data -> s_a[i - 1] = temp;
	ft_printf("sa");
	return(0);  
}

int     sb(t_swap *data)
{
	int     i;
	int     temp;

	i = data -> len_b - 1;
	temp = data -> s_b[i];
	data -> s_b[i] = data -> s_b[i -1];
	data -> s_b[i - 1] = temp;
	ft_printf("sb");
	return(0);  
}

int     ss(t_swap *data)
{
	int     i;
	int     temp;

	i = data -> len_a - 1;
	temp = data -> s_a[i];
	data -> s_a[i] = data -> s_a[i -1];
	data -> s_a[i - 1] = temp;
	i = data -> len_b - 1;
	temp = data -> s_b[i];
	data -> s_b[i] = data -> s_b[i -1];
	data -> s_b[i - 1] = temp;
	ft_printf("ss");
	return(0);  
}

int     pa(t_swap *data)
{
	int		temp;

	temp = data -> s_b[data -> len_b - 1];
	ft_strjoin(data -> s_a, temp);
	
}