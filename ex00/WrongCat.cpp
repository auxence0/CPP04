/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 14:16:08 by asauvage          #+#    #+#             */
/*   Updated: 2026/08/21 16:29:22 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal(){
	type = "WrongCat";
	std::cout << "Constructor WrongCat called\n";
	return ;
};

WrongCat::WrongCat( const WrongCat& obj ): WrongAnimal(obj) {
	*this = obj;
	std::cout << "Copy Constructor WrongCat called\n";
	return ;
}

WrongCat&	WrongCat::operator=( const WrongCat& rhs ) {
	if (this != &rhs) {
		type = rhs.type;
	}
	return *this;
};

WrongCat::~WrongCat() {
	std::cout << "Destructor WrongCat called\n";
	return ;
};

void	WrongCat::makeSound() const {
	std::cout << "Faux Chat miaou\n";
	return ;
};
