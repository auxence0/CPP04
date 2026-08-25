/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 11:46:28 by asauvage          #+#    #+#             */
/*   Updated: 2026/08/25 15:41:26 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(): ICharacter() {
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
	
}

void	Character::unequip( int idx ) {
	
}

void	Character::use( int idx, ICharacter& target ) {
	
}
