/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 11:16:38 by asauvage          #+#    #+#             */
/*   Updated: 2026/08/31 10:58:46 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "ICharacter.hpp"
#include "AMateria.hpp"

Ice::Ice(): AMateria("ice") {
	return ;
}

Ice::Ice( const Ice& obj ): AMateria(obj) {
	return ;
}

Ice&	Ice::operator=( const Ice& rhs ) {
	(void)rhs;
	return *this;
}

Ice::~Ice() {
	return ;
}

void	Ice::use( ICharacter& target ) {
	std::cout << "* shoots an ice bolt at " << target.getName() << "\n";
	return ;
}

AMateria*	Ice::clone() const {
	return new Ice(*this);
}
