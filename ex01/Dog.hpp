/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/19 16:54:45 by asauvage          #+#    #+#             */
/*   Updated: 2026/08/21 16:25:20 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class	Dog: public	Animal {
	public:
		Dog();
		Dog( const Dog& obj );
		Dog&	operator=( const Dog& rhs );
		virtual ~Dog();
		virtual void	makeSound() const;
		void	SetIdeas(int index, std::string str);
		std::string	GetIdeas(int index);
	private:
		Brain*	brain;
};

#endif