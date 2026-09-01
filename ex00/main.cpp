/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 13:54:32 by asauvage          #+#    #+#             */
/*   Updated: 2026/09/01 10:52:16 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	i->makeSound();
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete i;
	delete j;

	std::cout << "\nNow w Wrong Animal/Cat\n\n";
	const WrongAnimal* WrongAnimal = new WrongCat();

	std::cout << WrongAnimal->getType() << " " << "\n";

	WrongAnimal->makeSound();

	delete WrongAnimal;

	return 0;
}
