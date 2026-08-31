/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 15:39:01 by asauvage          #+#    #+#             */
/*   Updated: 2026/08/31 09:29:48 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

class	Character: public ICharacter {
	private:
		std::string	name_;
		AMateria*	inventory_[4];
	public:
		~Character();
		Character();
		Character( std::string name );
		Character( const Character& obj );
		Character&			operator=( const Character& rhs );
		std::string const&	getName() const;
		void				equip(AMateria* m);
		void				unequip(int idx);
		void				use(int idx, ICharacter& target);
};

#endif