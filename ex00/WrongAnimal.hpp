/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 14:13:36 by asauvage          #+#    #+#             */
/*   Updated: 2026/08/21 14:22:32 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class	WrongAnimal {
	public:
		WrongAnimal();
		WrongAnimal ( const WrongAnimal& obj );
		WrongAnimal&	operator=( const WrongAnimal& rhs );
		~WrongAnimal();
		void	makeSound() const;
		std::string	getType() const;
	protected:
		std::string	type;
};

#endif