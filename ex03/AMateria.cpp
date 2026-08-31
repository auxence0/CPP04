/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 14:47:38 by asauvage          #+#    #+#             */
/*   Updated: 2026/08/31 11:12:39 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(): type_("Default") {
	return ;
}

AMateria::AMateria( std::string const & type ): type_(type) {
	return ;
}

AMateria::AMateria( const AMateria& obj ) {
	*this = obj;
	return ;
}

AMateria&	AMateria::operator=( const AMateria& rhs ) {
	(void)rhs;
	return *this;
}

AMateria::~AMateria() {
	return ;
}

std::string	const &	AMateria::getType() const {
	return type_;
}

void	AMateria::setType( std::string type ) {
	type_ = type;
	return ;
}

void	AMateria::use( ICharacter& target ) {
	(void)target;
	return ;
}
