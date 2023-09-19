#include "Wrong.hpp"

WrongAnimal::WrongAnimal() : _type("(null)") {
	std::cout << "WrongAnimal " << this->_type << " created with default constructor." << std::endl;
}

WrongAnimal::WrongAnimal(const std::string &type) : _type(type) {
	std::cout << "WrongAnimal " << this->_type << " created." << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal " << this->_type << " destroyed." << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &other) : _type(other._type) {
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &other) {
	if (this != &other) {
		this->setType(other._type);
	}
	return *this;
}

std::string const &WrongAnimal::getType() const {
	return this->_type;
}

void WrongAnimal::setType(const std::string &type) {
	this->_type = type;
}

void WrongAnimal::makeSound() const {
	std::cout << "I am WrongAnimal!!! " << std::endl;
}

WrongCat::WrongCat() : WrongAnimal("WrongCat") {
	std::cout << "WrongCat created." << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat destroyed." << std::endl;
}

void WrongCat::makeSound() const{
	std::cout << "WrongCat: Meoooow!!! " << std::endl;
}
