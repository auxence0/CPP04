/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 10:37:05 by asauvage          #+#    #+#             */
/*   Updated: 2026/08/25 11:47:04 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "AMateria.hpp"
# include "Cure.hpp"
# include "Ice.hpp"
# include "IMateriaSource.hpp"

class	MateriaSource: public IMateriaSource {
	protected:
		AMateria*	materias_[4];
	public:
		MateriaSource();
		~MateriaSource();
		MateriaSource( const MateriaSource& obj );
		MateriaSource&	operator=( const MateriaSource& rhs );
		void			learnMateria(AMateria*) override;
		AMateria*		createMateria(std::string const & type) override;
};

#endif