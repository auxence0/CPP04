/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 14:47:38 by asauvage          #+#    #+#             */
/*   Updated: 2026/08/26 11:49:28 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(): type_("Default") {
	return ;
}

AMateria::AMateria( const AMateria& obj ) {
	*this = obj;
	return ;
}

AMateria&	AMateria::operator=( const AMateria& rhs ) {
	if (this != &rhs) {

	}
	return *this;
}

AMateria::~AMateria() {
	return ;
}
