/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 20:45:35 by mikim             #+#    #+#             */
/*   Updated: 2018/01/11 20:47:00 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EVAL_EXPR_H
# define EVAL_EXPR_H

# include <Fixed.class.hpp>

float	summands(char *&expr);
float	factor(char *&expr);
float	atom(char *&expr);
float	ft_stof(char *&expr);

#endif
