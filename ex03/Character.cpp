/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 15:39:01 by asauvage          #+#    #+#             */
/*   Updated: 2026/08/24 16:12:25 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

class	Character: public ICharacter {
	private:
		std::string	name_;
	public:
		~Character();
		Character();
		Character( const Character& rhs);
		Character&			operator=( const Character& obj );
		std::string const&	getName() const override;
		void				equip(AMateria* m) override;
		void				unequip(int idx) override;
		void				use(int idx, ICharacter& target) override;
};

#endif