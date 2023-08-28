/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlyu <jlyu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 14:58:21 by jlyu              #+#    #+#             */
/*   Updated: 2023/08/28 14:58:23 by jlyu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CPP
#define CONTACT_CPP

#include <iostream>
#include <string>

class Contact
{
private:
	std::string first_name, last_name, nickname, number;

public:
	Contact();
	Contact(const std::string& first_name, const std:: string& last_name,
		const std::string& nickname, const std:: string& number);

	const std::string& getFirstName() const;
	const std::string& getLastName() const;
	const std::string& getNickName() const;
	const std::string& getNumber() const;
	void setFirstName(const std::string& first_name);
	void setLastName(const std::string& last_name);
	void setNickName(const std::string& nickname);
	void setNumber(const std::string& number);
};

#endif