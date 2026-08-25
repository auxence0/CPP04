/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 14:13:18 by asauvage          #+#    #+#             */
/*   Updated: 2026/08/25 15:37:52 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(): AMateria("cure") {

	return ;
}

Cure::Cure( const Cure& obj ): AMateria(obj) {
	*this = obj;
	return ;
}

Cure&	Cure::operator=( const Cure& rhs ) {
	
	return *this;
}

Cure::~Cure() {
	return ;
}

void	Cure::use( ICharacter& target ) {
	std::cout << "* heals" << target.getName() << "'s wounds *\n";
	return ;
}

AMateria*	Cure::clone() const {
	return	new	Cure(*this);
}

