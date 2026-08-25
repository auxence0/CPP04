/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 11:46:28 by asauvage          #+#    #+#             */
/*   Updated: 2026/08/25 12:13:07 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() {
	return ;
}

Character::Character( const Character& obj ) {
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

void	equip( AMateria* m ) {

}

void	unequip( int idx ) {

}

void	use( int idx, ICharacter& target ) {
	
}
