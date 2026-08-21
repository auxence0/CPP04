/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 14:26:02 by asauvage          #+#    #+#             */
/*   Updated: 2026/08/21 15:58:21 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>
# include <iostream>

class	Brain {
	public:
		Brain();
		Brain( const Brain& obj );
		Brain&	operator=( const Brain& rhs );
		~Brain();
		void	SetIdeas( int index, std::string str );
		std::string	GetIdeas( int index );
	private:
		std::string	ideas[100];
};

#endif