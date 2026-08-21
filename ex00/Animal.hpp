/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/19 16:51:03 by asauvage          #+#    #+#             */
/*   Updated: 2026/08/21 13:58:31 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class	Animal {
	public:
		Animal();
		Animal ( const Animal& obj );
		Animal&	operator=( const Animal& rhs );
		virtual ~Animal();
		virtual void	makeSound() const;
		std::string	getType() const;
	protected:
		std::string	type;
};

#endif