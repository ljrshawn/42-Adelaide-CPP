/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlyu <jlyu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 14:21:32 by jlyu              #+#    #+#             */
/*   Updated: 2023/09/13 15:29:32 by jlyu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
private:
	Weapon &_weapon;
	std::string _name;
public:
	HumanA(std::string name, Weapon &weapon);
	~HumanA();

	void attack();
};

#endif
