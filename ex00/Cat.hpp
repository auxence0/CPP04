/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/19 16:55:50 by asauvage          #+#    #+#             */
/*   Updated: 2026/08/19 17:02:04 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class	Cat: public Animal {
	public:
		Cat();
		Cat( const Cat& obj );
		Cat&	operator=( const Cat& rhs );
		~Cat();
		void	makeSound();
};

#endif