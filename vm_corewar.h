/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vm_corewar.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabadie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 17:12:36 by jabadie           #+#    #+#             */
/*   Updated: 2016/11/04 14:22:01 by jabadie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VM_COREWAR_H
# define VM_COREWAR_H




typedef struct	s_champ {
	char	*name;
	int		*reg;
}				t_champ;


typedef struct	s_process {
	int					pc;
	t_champ				*champion;
	struct s_process	*next;
}				t_process;


typedef struct	s_vm {
	int			*arena;
	t_champ		*all_champ;
	t_process	*all_proc;
}				t_vm;




#endif
