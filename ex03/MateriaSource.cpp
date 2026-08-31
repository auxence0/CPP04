/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 11:28:23 by asauvage          #+#    #+#             */
/*   Updated: 2026/08/31 11:30:25 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "AMateria.hpp"

MateriaSource::MateriaSource(): IMateriaSource() {
	for (int i = 0; i < 4; ++i) {
		materias_[i] = NULL;
	}
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
		if (materias_[i]->getType() == type)
			index = i;
		i++;
	}
	if (index == -1)
		return 0;
	return	materias_[index];
}
