/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stackop2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taybakan <taybakan@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 21:57:13 by taybakan          #+#    #+#             */
/*   Updated: 2023/03/30 10:17:48 by taybakan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrb(t_swap *data)
{
	int	temp;

	temp = data->s_b[data->len_b - 1];
	ft_memmove(data->s_b + 1, data->s_b, data->len_b * 4);
	data->s_b[0] = temp;
	write(1, "rrb\n", 4);
}

void	pb(t_swap *data)
{
	int	temp;

	if (data->len_a > 0)
	{
		temp = data->s_a[0];
		ft_memmove(data->s_a, data->s_a + 1, data->len_a * 4);
		ft_memmove(data->s_b + 1, data->s_b, data->len_b * 4);
		data->s_b[0] = temp;
		data->len_a--;
		data->len_b++;
		write(1, "pb\n", 3);
	}
}

void	ft_pa(t_swap *data)
{
	int	temp;

	if (data->len_b > 0)
	{
		temp = data->s_b[0];
		ft_memmove(data->s_b, data->s_b + 1, data->len_b * 4);
		ft_memmove(data->s_a + 1, data->s_a, data->len_a * 4);
		data->s_a[0] = temp;
		data->len_b--;
		data->len_a++;
		write(1, "pa\n", 3);
	}
}