/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 13:52:44 by asauvage          #+#    #+#             */
/*   Updated: 2026/08/21 14:01:32 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal(){
	type = "Dog";
	std::cout << "Constructor Dog called\n";
	return ;
};

Dog::Dog( const Dog& obj ): Animal(obj) {
	*this = obj;
	std::cout << "Copy Constructor Dog called\n";
	return ;
}

Dog&	Dog::operator=( const Dog& rhs ) {
	type = rhs.type;
	return *this;
};

Dog::~Dog() {
	std::cout << "Destructor Dog called\n";
	return ;
};

void	Dog::makeSound() const {
	std::cout << "Chien woaf\n";
	return ;
};
