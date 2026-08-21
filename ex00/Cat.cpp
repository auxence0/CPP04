/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 13:49:04 by asauvage          #+#    #+#             */
/*   Updated: 2026/08/21 14:01:20 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal(){
	type = "Cat";
	std::cout << "Constructor Cat called\n";
	return ;
};

Cat::Cat( const Cat& obj ): Animal(obj) {
	*this = obj;
	std::cout << "Copy Constructor Cat called\n";
	return ;
}

Cat&	Cat::operator=( const Cat& rhs ) {
	type = rhs.type;
	return *this;
};

Cat::~Cat() {
	std::cout << "Destructor Cat called\n";
	return ;
};

void	Cat::makeSound() const {
	std::cout << "Chat miaou\n";
	return ;
};
