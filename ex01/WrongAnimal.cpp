/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 14:17:06 by asauvage          #+#    #+#             */
/*   Updated: 2026/08/21 14:18:25 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): type("WrongAnimal") {
	std::cout << "Constructor WrongAnimal called\n";
	return ;
};

WrongAnimal::WrongAnimal( const WrongAnimal& obj ) {
	*this = obj;
	std::cout << "Copy Constructor WrongAnimal called\n";
	return ;
}

WrongAnimal&	WrongAnimal::operator=( const WrongAnimal& rhs ) {
	type = rhs.type;
	return *this;
};

WrongAnimal::~WrongAnimal() {
	std::cout << "Destructor WrongAnimal called\n";
	return ;
};

void	WrongAnimal::makeSound() const {
	std::cout << "Wrong Brrrr Brrrr Patapim\n";
	return ;	
};

std::string	WrongAnimal::getType() const {
	return type;
}
