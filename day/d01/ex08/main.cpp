/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 23:14:11 by mikim             #+#    #+#             */
/*   Updated: 2018/01/10 23:26:11 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int	main()
{
	Human human;

	human.action("meleeAttack", "tzhou");
	human.action("rangedAttack", "jchow");
	human.action("intimidatingShout", "twalton");
	return 0;
}
