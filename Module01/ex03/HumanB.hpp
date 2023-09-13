/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlyu <jlyu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 16:00:21 by jlyu              #+#    #+#             */
/*   Updated: 2023/09/13 16:00:22 by jlyu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
private:
	Weapon *_weapon;
	std::string _name;
public:
	HumanB(std::string name);
	~HumanB();

	void setWeapon(Weapon &weapon);
	void attack();
};

#endif
