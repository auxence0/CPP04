/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 11:28:23 by asauvage          #+#    #+#             */
/*   Updated: 2026/08/24 14:14:11 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(): materias_{NULL} {
	return ;
}

MateriaSource::MateriaSource( const MateriaSource& obj ) {
	*this = obj;
	return ;
}

MateriaSource::~MateriaSource() {
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
