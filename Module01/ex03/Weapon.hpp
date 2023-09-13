/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlyu <jlyu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 14:21:35 by jlyu              #+#    #+#             */
/*   Updated: 2023/09/13 14:39:48 by jlyu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon {
private:
	std::string _type;
public:
	Weapon();
	Weapon(std::string type);
	~Weapon();

	std::string& getType();
	void setType(std::string type);
};

#endif