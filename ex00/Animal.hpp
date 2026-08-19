/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/19 16:51:03 by asauvage          #+#    #+#             */
/*   Updated: 2026/08/19 16:58:08 by asauvage         ###   ########.fr       */
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
		~Animal();
		void	makeSound();
	protected:
		std::string	type;
};

#endif