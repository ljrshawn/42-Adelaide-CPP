/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlyu <jlyu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 16:11:30 by jlyu              #+#    #+#             */
/*   Updated: 2023/09/19 16:11:31 by jlyu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain {
private:
	std::string _ideas[100];
public:
	Brain();
	~Brain();

	Brain(Brain const &other);
	Brain const &operator=(Brain const &other);

	std::string const &getIdea(int const &index) const;
	void setIdea(std::string const &idea, int const &index);
};

#endif