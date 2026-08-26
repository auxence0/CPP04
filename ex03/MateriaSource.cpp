/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 11:28:23 by asauvage          #+#    #+#             */
/*   Updated: 2026/08/26 14:06:24 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(): IMateriaSource(), materias_{NULL} {
	return ;
}

MateriaSource::MateriaSource( const MateriaSource& obj ): IMateriaSource(obj) {
	*this = obj;
	return ;
}

MateriaSource::~MateriaSource() {
	return ;
}

MateriaSource&	MateriaSource::operator=( const MateriaSource& rhs ) {
	if (this != &rhs ) {
		
	}
	return *this;
}

void	MateriaSource::learnMateria(AMateria* materias) {
	int	i(0);
	while (materias_[i])
		i++;
	if (i < 4 && materias)
		materias_[i] = materias;
	else
		delete	materias;
}

AMateria*	MateriaSource::createMateria( std::string const & type ) {
	int	i(0);
	int	index(-1);
	while (materias_[i] && i < 4) {
		if (materias_[i]->getType() == "Cure")
			index = i;
		i++;
	}
	if (index == -1)
		return 0;
	
}
