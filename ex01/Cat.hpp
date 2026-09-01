/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/19 16:55:50 by asauvage          #+#    #+#             */
/*   Updated: 2026/09/01 10:55:53 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class	Cat: public Animal {
	public:
		Cat();
		Cat( const Cat& obj );
		Cat&	operator=( const Cat& rhs );
		virtual ~Cat();
		virtual void	makeSound() const;
		void	SetIdeas(int index, std::string str);
		std::string	GetIdeas(int index);
	private:
		Brain*	brain;
};

#endif