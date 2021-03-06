/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handler_pad_down.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclolus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/27 06:51:08 by sclolus           #+#    #+#             */
/*   Updated: 2017/09/10 22:13:56 by sclolus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf3d.h"

void	ft_handler_pad_down(void *param)
{
	t_fractal_data	*fractal_data;
	t_fractal_type	fractal_type;

	fractal_data = ft_get_t_fractal_data();
	if ((fractal_type = *((t_fractal_type*)((t_fractal_type**)param)[1]))
		== MULTIBROT || fractal_type == MULTILIA)
	{
		if (fractal_data[fractal_type].degree > 0)
			fractal_data[fractal_type].degree--;
	}
	ft_draw_cl_fractal((t_mlx_data*)((t_mlx_data**)param)[0]
					, *((t_fractal_type*)((t_fractal_type**)param)[1]));
}
