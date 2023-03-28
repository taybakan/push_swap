/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taybakan <taybakan@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 15:27:35 by taybakan          #+#    #+#             */
/*   Updated: 2023/03/28 00:10:20 by taybakan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		main(int argc, char **argv)
{
	t_swap	*data;
	if (argc < 2)
		return(ft_error("Not enough arguments!"));
	data = malloc(sizeof(t_swap));
	ft_check_argv(argv);
	ft_combargv(data, argv, argc);
	ft_put_a(data);
	return (0);
}
