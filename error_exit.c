/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_exit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taybakan <taybakan@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 15:58:12 by taybakan          #+#    #+#             */
/*   Updated: 2023/04/01 01:18:34 by taybakan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_error(t_swap *data)
{
	free(data->str);
	free(data->numbers);
	free(data);
	ft_printf("Error\n");
	exit (1);
}

void	ft_free(t_swap *data)
{
	free(data->s_a);
	free(data->s_b);
	free(data->sorted);
	free(data->str);
	free(data->numbers);
	free(data);
}
