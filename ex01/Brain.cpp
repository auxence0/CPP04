/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 14:38:09 by asauvage          #+#    #+#             */
/*   Updated: 2026/09/01 11:06:26 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
	std::cout << "Constructor Brain called\n";
	return ;
};

Brain::Brain( const Brain& obj ) {
	*this = obj;
	std::cout << "Copy Constructor Brain called\n";
	return ;
}

Brain&	Brain::operator=( const Brain& rhs ) {
	if (this != &rhs) {
		for (int i = 0; i < 100; ++i) {
			ideas[i] = rhs.ideas[i];
		}
	}
	return *this;
};

Brain::~Brain() {
	std::cout << "Destructor Brain called\n";
	return ;
};

void	Brain::SetIdeas(int index, std::string str) {
	if (index < 0 || index > 99)
		std::cerr << "Bad index need to be between 0-99\n";
	else {
		ideas[index] = str;
	}
	return ;
};

std::string	Brain::GetIdeas(int index) {
	if (index < 0 || index > 99)
		std::cerr << "Bad index need to be between 0-99\n";
	else {
		return ideas[index];
	}
	return "";
}
