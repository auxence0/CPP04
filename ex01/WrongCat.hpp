/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 14:15:08 by asauvage          #+#    #+#             */
/*   Updated: 2026/08/21 14:20:36 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class	WrongCat: public WrongAnimal {
	public:
		WrongCat();
		WrongCat( const WrongCat& obj );
		WrongCat&	operator=( const WrongCat& rhs );
		~WrongCat();
		void	makeSound() const;
};

#endif