/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 11:30:18 by asauvage          #+#    #+#             */
/*   Updated: 2026/08/21 16:27:08 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(): type("Default Animal") {
	std::cout << "Constructor Animal called\n";
	return ;
};

Animal::Animal( const Animal& obj ) {
	*this = obj;
	std::cout << "Copy Constructor Animal called\n";
	return ;
}

Animal&	Animal::operator=( const Animal& rhs ) {
	if (this != &rhs) {
		type = rhs.type;
	}
	return *this;
};

Animal::~Animal() {
	std::cout << "Destructor Animal called\n";
	return ;
};

void	Animal::makeSound() const {
	std::cout << "Brrrr Brrrr Patapim\n";
	return ;	
};

std::string	Animal::getType() const {
	return type;
}
