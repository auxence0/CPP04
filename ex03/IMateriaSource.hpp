/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 10:21:14 by asauvage          #+#    #+#             */
/*   Updated: 2026/08/24 10:35:18 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERISOURCE_HPP
# define IMATERISOURCE_HPP

# include "AMateria.hpp"

class	IMateriaSource {
	public:
		virtual	~IMateriaSource() {};
		virtual	void		learnMateria(AMateria*) = 0;
		virtual AMateria*	createMateria(std::string const & type) = 0;
};

#endif