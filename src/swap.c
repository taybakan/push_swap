/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taybakan <taybakan@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 22:04:36 by taybakan          #+#    #+#             */
/*   Updated: 2023/03/30 09:20:16 by taybakan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int     sa(t_swap *data)
{
	int		temp;
	
	temp = data -> s_a[0];
	data -> s_a[0] = data -> s_a[1];
	data -> s_a[1] = temp;
	ft_printf("sa\n");
	return(0);  
}

int     sb(t_swap *data)
{
	int		temp;
	
	temp = data -> s_b[0];
	data -> s_b[0] = data -> s_b[1];
	data -> s_b[1] = temp;
	ft_printf("sb\n");
	return(0);
}

int     ss(t_swap *data)
{
	int		temp;
	
	temp = data -> s_a[0];
	data -> s_a[0] = data -> s_a[1];
	data -> s_a[1] = temp;
	temp = data -> s_b[0];
	data -> s_b[0] = data -> s_b[1];
	data -> s_b[1] = temp;
	ft_printf("ss\n");
	return(0);
}