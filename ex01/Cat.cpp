/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 13:49:04 by asauvage          #+#    #+#             */
/*   Updated: 2026/08/21 16:27:48 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal(){
	type = "Cat";
	brain = new Brain();
	std::cout << "Constructor Cat called\n";
	return ;
};

Cat::Cat( const Cat& obj ): Animal(obj) {
	brain = new Brain(*obj.brain);
	*this = obj;
	std::cout << "Copy Constructor Cat called\n";
	return ;
}

Cat&	Cat::operator=( const Cat& rhs ) {
	if (this != &rhs) {
		delete	brain;
		brain = new Brain(*rhs.brain);
		type = rhs.type;
	}
	return *this;
};

Cat::~Cat() {
	delete	brain;
	std::cout << "Destructor Cat called\n";
	return ;
};

void	Cat::makeSound() const {
	std::cout << "Chat miaou\n";
	return ;
};

void	Cat::SetIdeas(int index, std::string str) {
	brain->SetIdeas(index, str);
};

std::string	Cat::GetIdeas(int index) {
	return (brain->GetIdeas(index));
};
