/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iscntrl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiot-- <aguiot--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 12:17:03 by aguiot--          #+#    #+#             */
/*   Updated: 2018/11/12 12:17:55 by aguiot--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iscntrl(int c)
{
	return (c < 32 || c == 127);
}
