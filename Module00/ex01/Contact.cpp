/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlyu <jlyu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 14:58:11 by jlyu              #+#    #+#             */
/*   Updated: 2023/08/29 11:19:48 by jlyu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {}

Contact::Contact(const std::string& first_name, const std:: string& last_name,
		const std::string& nickname, const std:: string& number,
		const std:: string& secret) : first_name(first_name),
		last_name(last_name), nickname(nickname), number(number) ,secret(secret) {}

const std::string& Contact::getFirstName() const {
	return first_name;
}

const std::string& Contact::getLastName() const {
	return last_name;
}

const std::string& Contact::getNickName() const {
	return nickname;
}

const std::string& Contact::getNumber() const {
	return number;
}

const std::string& Contact::getSecret() const {
	return secret;
}


void Contact::setFirstName(const std::string& first_name) {
	this->first_name = first_name;
}

void Contact::setLastName(const std::string& last_name) {
	this->last_name = last_name;
}

void Contact::setNickName(const std::string& nickname) {
	this->nickname = nickname;
}

void Contact::setNumber(const std::string& number) {
	this->number = number;
}

void Contact::setSecret(const std::string& secret) {
	this->secret = secret;
}
