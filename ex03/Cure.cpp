/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 14:13:18 by asauvage          #+#    #+#             */
/*   Updated: 2026/08/24 16:13:19 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(): AMateria("Cure") {

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

void	use( ICharacter& target ) {
	std::cout << "* heals" << target.getName() << "'s wounds *\n";
	return ;
}

AMateria*	clone() {
	
}

