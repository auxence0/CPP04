/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 11:46:28 by asauvage          #+#    #+#             */
/*   Updated: 2026/08/26 14:08:14 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(): ICharacter(), inventory_{NULL} {
	return ;
}

Character::Character( const Character& obj ): ICharacter() {
	return ;
};

Character&	Character::operator=( const Character& rhs ) {
	return ;
}

Character::~Character () {
	return ;
}

std::string const&	Character::getName() const {
	return name_;
}

void	Character::equip( AMateria* m ) {
	int	i(0);
	while (i < 4 && inventory_[i]) {
		++i;
	}
	if (i != 4 && m)
		inventory_[i] = m;
	return ;
}

void	Character::unequip( int idx ) {
	if (idx >= 0 && idx < 4)
		inventory_[idx] = NULL;
	return ;
}

void	Character::use( int idx, ICharacter& target ) {
	if (idx >= 0 && idx < 4) {
		inventory_[idx]->use(target);
	}
}
