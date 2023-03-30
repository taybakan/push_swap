/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stackop.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taybakan <taybakan@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 22:56:57 by taybakan          #+#    #+#             */
/*   Updated: 2023/03/30 10:28:32 by taybakan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_swap *data)
{
	int	temp;

	if (data->len_a > 1)
	{
		temp = data->s_a[0];
		data->s_a[0] = data->s_a[1];
		data->s_a[1] = temp;
		write(1, "sa\n", 3);
	}
}

void	sb(t_swap *data)
{
	int	temp;

	if (data->len_b > 1)
	{
		temp = data->s_b[0];
		data->s_b[0] = data->s_b[1];
		data->s_b[1] = temp;
		write(1, "sb\n", 3);
	}
}

void	rra(t_swap *data)
{
	int	temp;
	
	temp = data->s_a[0];
	write(1, "\n", 1);
	ft_memmove(data->s_a - 1, data->s_a, data->len_a * 4);

	data->s_a[data->len_a - 1] = temp;
	write(1, "ra\n", 3);
}

void	rb(t_swap *data)
{
	int	temp;

	temp = data->s_b[0];
	ft_memmove(data->s_b, data->s_b + 1, data->len_b * 4);
	data->s_b[data->len_a -1] = temp;
	write(1, "rb\n", 3);
}

void	ra(t_swap *data)
{
	int	temp;
	int i;

	i = 0;
	temp = data->s_a[data->len_a -1];
	ft_memmove(data->s_a, data->s_a - 1, data->len_a * 4);
	data->s_a[0] = temp;
	write(1, "rra\n", 4);
	while(i < data->len_a)
	{
		ft_printf("%d\n", data->s_a[data->len_a - 1 - i]);
		i++;
	}
}