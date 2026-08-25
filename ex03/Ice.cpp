/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 11:16:38 by asauvage          #+#    #+#             */
/*   Updated: 2026/08/25 11:47:03 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Ice.hpp"

Ice::Ice(): AMateria("ice") {
	return ;
}

Ice::Ice( const Ice& obj ): AMateria(obj) {
	return ;
}

Ice&	Ice::operator=( const Ice& rhs ) {

	return *this;
}

Ice::~Ice() {
	return ;
}

void	use( ICharacter& target ) {
	std::cout << "* shoots an ice bolt at " << "\n";
	return ;
}

AMateria*	clone() {

	return ;
}
