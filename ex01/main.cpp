/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 13:54:32 by asauvage          #+#    #+#             */
/*   Updated: 2026/08/21 16:28:20 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main() {
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	
	delete j;//should not create a leak
	delete i;

	std::cout << "\nCreate array of 10 Animal and fill w 5-5 Dog-Cat\n\n";

	Animal* animals[10];
	for (int i = 0; i < 5; ++i) {
		animals[i] = new Dog();
	}
	for (int i = 5; i < 10; ++i) {
		animals[i] = new Cat();
	}

	std::cout << "\nDelete each Animal\n\n";

	for (int i = 0; i < 10; ++i) {
		delete	animals[i];
	}

	std::cout << "\n\nCheck Brain of Animals\n\n";

	Dog	dogo;
	Dog	dogo_tmp = dogo;
	Dog	dogo_cpy(dogo);

	dogo.SetIdeas(0, "os");
	dogo_tmp.SetIdeas(0, "niche");
	dogo_cpy.SetIdeas(0, "clebard");

	std::cout << "\n1st Str of dogo " << dogo.GetIdeas(0) << "\n";
	std::cout << "1st Str of dogo_tmp " << dogo_tmp.GetIdeas(0) << "\n";
	std::cout << "1st Str of dogo_cpy " << dogo_cpy.GetIdeas(0) << "\n\n";

	return 0;
}
