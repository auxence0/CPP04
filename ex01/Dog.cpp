/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 13:52:44 by asauvage          #+#    #+#             */
/*   Updated: 2026/08/21 16:26:16 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal(){
	type = "Dog";
	brain = new	Brain();
	std::cout << "Constructor Dog called\n";
	return ;
};

Dog::Dog( const Dog& obj ): Animal(obj) {
	brain = new Brain(*obj.brain);
	*this = obj;
	std::cout << "Copy Constructor Dog called\n";
	return ;
}

Dog&	Dog::operator=( const Dog& rhs ) {
	if (this != &rhs) {
		delete	brain;
		brain = new Brain(*rhs.brain);
		type = rhs.type;
	}
	return *this;
};

Dog::~Dog() {
	delete	brain;
	std::cout << "Destructor Dog called\n";
	return ;
};

void	Dog::makeSound() const {
	std::cout << "Chien woaf\n";
	return ;
};

void	Dog::SetIdeas(int index, std::string str) {
	brain->SetIdeas(index, str);
};

std::string	Dog::GetIdeas(int index) {
	return (brain->GetIdeas(index));
};
