/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 17:30:27 by asauvage          #+#    #+#             */
/*   Updated: 2026/08/31 09:30:06 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class	Ice: public AMateria {
	public:
		Ice();
		~Ice();
		Ice( const Ice& rhs );
		Ice&		operator=( const Ice& rhs );
		AMateria*	clone() const;
		void		use( ICharacter& target );
};

#endif