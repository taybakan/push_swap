/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taybakan <taybakan@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 00:15:33 by taybakan          #+#    #+#             */
/*   Updated: 2023/03/28 13:37:39 by taybakan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include "./lib/libft/libft.h"
# include "./lib/ft_printf/ft_printf.h"

typedef struct s_swap
{
	char	*str;
	char	**numbers;
	int		*s_a;
	int		*s_b;
	int		*sorted;
	int		*indexed;
	int		len_a;
	int		len_b;
}t_swap;

int		ft_check_argv(char **str);
int		ft_combargv(t_swap *data, char **argv, int argc);
int		ft_check_comb(t_swap *data);
int		ft_error(char *str);
void	ft_put_a(t_swap *data);
int     ft_checkdup(t_swap *data);
int     sa(t_swap *data);

#endif
