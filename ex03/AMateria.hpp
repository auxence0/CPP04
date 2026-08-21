/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 17:27:36 by asauvage          #+#    #+#             */
/*   Updated: 2026/08/21 17:29:53 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMateria_HPP
# define AMateria_HPP

# include <string>

class	AMateria {
	protected:

	public:
		AMateria( std::string const & type );

		std::string const & getType() const; //Returns the materia type

		virtual	AMateria* clone() const = 0;
		virtual	void	use(ICharacter& target);
};

#endif