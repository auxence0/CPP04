/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/19 16:54:45 by asauvage          #+#    #+#             */
/*   Updated: 2026/08/19 17:02:22 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class	Dog: public	Animal {
	public:
	Dog();
	Dog( const Dog& obj );
	Dog&	operator=( const Dog& rhs );
	~Dog();
	void	makeSound();
};

#endif