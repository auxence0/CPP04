/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 11:46:28 by asauvage          #+#    #+#             */
/*   Updated: 2026/08/31 17:56:49 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"

Character::Character(): ICharacter(){
	for (int i = 0; i < 4; ++i)
		inventory_[i] = NULL;
	return ;
}

Character::Character( std::string name ): name_(name){
	for (int i = 0; i < 4; ++i)
		inventory_[i] = NULL;
	return ;
}

Character::Character( const Character& obj ): ICharacter() {
	name_ = obj.name_;
	for (int i = 0; i < 4; ++i) {
		if (obj.inventory_[i])
			inventory_[i] = obj.inventory_[i]->clone();
		else
			inventory_[i] = NULL;
	}
	return ;
};

Character&	Character::operator=( const Character& rhs ) {
	if (this != &rhs) {
		name_ = rhs.name_;
		for (int i = 0; i < 4; ++i) {
			if (inventory_[i])
				delete	inventory_[i];
			if (rhs.inventory_[i])
				inventory_[i] = rhs.inventory_[i]->clone();
			else
				inventory_[i] = NULL;
		}
	}
	return *this;
}

Character::~Character () {
	for (int i = 0; i < 4; ++i) {
		if (inventory_[i])
			delete	inventory_[i];
		inventory_[i] = NULL;
	}
}

std::string const&	Character::getName() const {
	return name_;
}

void	Character::equip( AMateria* m ) {
	int	i(0);
	while (i < 4 && inventory_[i])
		++i;
	if (i < 4 && m)
		inventory_[i] = m;
	return ;
}

void	Character::unequip( int idx ) {
	if (idx >= 0 && idx < 4)
		inventory_[idx] = NULL;
	return ;
}

void	Character::use( int idx, ICharacter& target ) {
	if (idx >= 0 && idx < 4 && inventory_[idx]) {
		std::cout << inventory_[idx]->getType();
		inventory_[idx]->use(target);
	}
	return ;
}
