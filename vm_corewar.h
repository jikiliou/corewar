/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vm_corewar.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabadie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 17:12:36 by jabadie           #+#    #+#             */
/*   Updated: 2016/11/03 17:57:33 by jabadie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VM_COREWAR_H
# define VM_COREWAR_H




typedef struct	s_champ {
	char	*name;
	int		*reg;


}				t_champ;


typedef struct	s_process {

}				t_process;


typedef struct	s_vm {
	int		*arena;


}				t_vm;




#endif
