/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlyu <jlyu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 11:33:37 by jlyu              #+#    #+#             */
/*   Updated: 2023/09/13 12:15:14 by jlyu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBINE_HPP
#define ZOMBINE_HPP

#include <iostream>

class Zombie {
private:
	std::string name;

public:
	Zombie();
	Zombie(std::string name);
	~Zombie();

	void setName(std::string name);

	void announce();
};

#endif