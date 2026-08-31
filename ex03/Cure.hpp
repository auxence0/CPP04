/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 10:47:03 by asauvage          #+#    #+#             */
/*   Updated: 2026/08/31 09:29:55 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure: public AMateria {
	public:
		Cure();
		~Cure();
		Cure( const Cure& obj );
		Cure&		operator=( const Cure& rhs );
		AMateria*	clone() const;
		void		use( ICharacter& target );
};

#endif