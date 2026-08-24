/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 10:01:11 by asauvage          #+#    #+#             */
/*   Updated: 2026/08/24 16:11:31 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# include <string>
# include "AMateria.hpp"

class	ICharacter {
	public:
		virtual	~ICharacter() {};
		virtual	std::string	const & getName() const = 0;
		virtual	void	equip(AMateria* m) = 0;
		virtual	void	unequip(int idx) = 0;
		virtual	void	use(int idx, ICharacter& target) = 0;
};

#endif