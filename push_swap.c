/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taybakan <taybakan@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 15:27:35 by taybakan          #+#    #+#             */
/*   Updated: 2023/03/31 23:37:08 by taybakan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_issorted(t_swap *data)
{
	int		i;

	i = data->len_a - 1;
	while(i > 0)
	{
		if(data->s_a[i] < data->s_a[i - 1])
			return (0);
		i--;
	}
	return (1);
}

int		main(int argc, char **argv)
{
	t_swap	*data;
	if (argc < 2)
		return(ft_error("Not enough arguments!"));
	data = malloc(sizeof(t_swap));
	ft_check_argv(argv);
	ft_combargv(data, argv, argc);
	ft_put_a(data);
	if (ft_issorted(data))
		return(write(1, "\n", 1));
	insertion_sort(data);
	ft_getindexed(data);
	ft_getmaxbits(data);
	radix_sort(data);
	int i;
	i = 0;
	while(i < data->len_a)
	{
		ft_printf("%d\n", data->sorted[i]);
		i++;
	}
	i = 0;
	while(i < data->len_a)
	{
		ft_printf("%d\n", data->s_a[i]);
		i++;
	}
	ft_printf("maxbits: %d\n", data->max_bits);
	return (0);
}
