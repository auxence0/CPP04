/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 17:27:36 by asauvage          #+#    #+#             */
/*   Updated: 2026/08/31 09:41:02 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMateria_HPP
# define AMateria_HPP

# include <string>
# include <iostream>

class	ICharacter;

class	AMateria {
	protected:
		std::string			type_;
	public:
		AMateria();
		AMateria( std::string const & type );
		AMateria( const AMateria& obj );
		virtual ~AMateria();
		AMateria&	operator=( const AMateria& rhs );
		std::string const & getType() const;
		void				setType(const std::string type);
		virtual	AMateria*	clone() const = 0;
		virtual	void		use(ICharacter& target);
};

#endif