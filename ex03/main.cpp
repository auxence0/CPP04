/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 10:35:54 by asauvage          #+#    #+#             */
/*   Updated: 2026/08/31 16:35:48 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

// int main()
// {
//     IMateriaSource* src = new MateriaSource();
//     src->learnMateria(new Ice());
//     src->learnMateria(new Cure());
//     ICharacter* me = new Character("me");
//     AMateria* tmp;
//     AMateria* fordelete;
//     tmp = src->createMateria("ice");
//     fordelete = tmp;
//     me->equip(tmp);
//     tmp = src->createMateria("cure");
//     me->equip(tmp);
//     ICharacter* bob = new Character("bob");
//     me->use(0, *bob);
//     me->use(1, *bob);
//     me->use(2, *bob);
//     me->unequip(0);

//     tmp = src->createMateria("ice");
//     me->equip(tmp);
//     tmp = src->createMateria("cure");
//     me->equip(tmp);
//     tmp = src->createMateria("ice");
//     me->equip(tmp);
//     bob->equip(tmp);
//     bob->use(0, *me);
//     bob->use(1, *me);
//     bob->use(2, *me);
//     bob->use(3, *me);
//     bob->use(4, *me);
//     bob->unequip(0);
//     bob->use(0, *me);
//     delete fordelete;
//     delete bob;
//     delete me;
//     delete src;
//     return 0;
// }

int main(void)
{
	{
		MateriaSource test;
		test.learnMateria(new Ice());
		IMateriaSource* src = new MateriaSource(test);
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		ICharacter* me = new Character("me");
		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		ICharacter* bob = new Character("bob");
		me->use(0, *bob);
		me->use(1, *bob);
		delete bob;
		delete me;
		delete src;
		// return 0;
	}
	
	{
		AMateria*	unequipAndErrorEquip[100];
		int			indexGarbage = 0;
		/*---------------OJBET_SUR_TABLE---------------*/
		MateriaSource* obj_sur_table = new MateriaSource();
		obj_sur_table->learnMateria(new Ice());
		obj_sur_table->learnMateria(new Cure());
		obj_sur_table->learnMateria(new Cure());
		obj_sur_table->learnMateria(new Ice());
		obj_sur_table->learnMateria(new Ice());
		/*---------------OJBET_SUR_CHAISE---------------*/
		MateriaSource* obj_sur_chaise = new MateriaSource(*obj_sur_table);
		obj_sur_chaise->learnMateria(new Ice());
		obj_sur_chaise->learnMateria(new Cure());
		obj_sur_chaise->learnMateria(new Ice());
		obj_sur_chaise->learnMateria(new Ice());
		obj_sur_chaise->learnMateria(new Cure());
		/*---------------OJBET_SUR_CANAPE---------------*/
		MateriaSource* obj_sur_canape = new MateriaSource();
		obj_sur_canape->learnMateria(new Cure());
		obj_sur_canape->learnMateria(new Ice());
		obj_sur_canape->learnMateria(new Cure());
		obj_sur_canape->learnMateria(new Ice());
		obj_sur_canape->learnMateria(new Ice());
		/*---------------OJBET_SUR_PORTE---------------*/
		MateriaSource* obj_sur_porte = new MateriaSource();
		obj_sur_porte->learnMateria(new Ice());
		obj_sur_porte->learnMateria(new Cure());
		obj_sur_porte->learnMateria(new Ice());
		obj_sur_porte->learnMateria(new Cure());
		obj_sur_porte->learnMateria(new Ice());

		/*---------------CREATE_CHARACTER---------------*/
		Character* me = new Character("me");
		Character* bob = new Character("bob");
		Character* michel = new Character("michel");
		Character* jean = new Character("jean");
		Character* bernadette = new Character("bernadette");
		(void)me;
		(void)bob;
		(void)michel;
		(void)jean;
		(void)bernadette;

		/*---------------ASSIGNMENT---------------*/
		{
			AMateria* tmp;
			tmp = obj_sur_table->createMateria("ice");
			me->equip(tmp);
			tmp = obj_sur_chaise->createMateria("cure");
			me->equip(tmp);
			tmp = obj_sur_canape->createMateria("ice");
			me->equip(tmp);
			tmp = obj_sur_porte->createMateria("ice");
			me->equip(tmp);
			tmp = obj_sur_canape->createMateria("ice");
			me->equip(tmp);
			unequipAndErrorEquip[indexGarbage++] = tmp;
			
			tmp = obj_sur_table->createMateria("ice");
			bob->equip(tmp);
			tmp = obj_sur_chaise->createMateria("ice");
			bob->equip(tmp);
			tmp = obj_sur_canape->createMateria("ice");
			bob->equip(tmp);
			tmp = obj_sur_porte->createMateria("ice");
			bob->equip(tmp);
			tmp = obj_sur_canape->createMateria("ice");
			bob->equip(tmp);
			unequipAndErrorEquip[indexGarbage++] = tmp;

			tmp = obj_sur_table->createMateria("cure");
			michel->equip(tmp);
			tmp = obj_sur_chaise->createMateria("cure");
			michel->equip(tmp);
			tmp = obj_sur_canape->createMateria("cure");
			michel->equip(tmp);
			tmp = obj_sur_porte->createMateria("cure");
			michel->equip(tmp);
			tmp = obj_sur_canape->createMateria("ice");
			michel->equip(tmp);
			unequipAndErrorEquip[indexGarbage++] = tmp;

			tmp = obj_sur_table->createMateria("cure");
			jean->equip(tmp);
			tmp = obj_sur_chaise->createMateria("cure");
			jean->equip(tmp);
			tmp = obj_sur_canape->createMateria("ice");
			jean->equip(tmp);
			tmp = obj_sur_porte->createMateria("cure");
			jean->equip(tmp);
			tmp = obj_sur_canape->createMateria("ice");
			jean->equip(tmp);
			unequipAndErrorEquip[indexGarbage++] = tmp;

			tmp = obj_sur_table->createMateria("ice");
			bernadette->equip(tmp);
			tmp = obj_sur_chaise->createMateria("cure");
			bernadette->equip(tmp);
			tmp = obj_sur_canape->createMateria("ice");
			bernadette->equip(tmp);
			tmp = obj_sur_porte->createMateria("cure");
			bernadette->equip(tmp);
			unequipAndErrorEquip[indexGarbage++] = tmp;
			tmp = obj_sur_canape->createMateria("ice");
			bernadette->equip(tmp);
			unequipAndErrorEquip[indexGarbage++] = tmp;
		}

		/*---------------USE---------------*/
		me->use(1, *bernadette);
		me->use(0, *bernadette);
		me->use(5, *bernadette);

		bob->use(3, *me);
		bob->use(2, *me);
		bob->use(5, *me);

		michel->use(0, *bob);
		michel->use(3, *bob);
		michel->use(7, *bob);

		jean->use(3, *michel);
		jean->use(0, *michel);
		jean->use(15, *michel);

		bernadette->use(3, *jean);
		bernadette->use(2, *jean);
		bernadette->use(50, *jean);


		if (indexGarbage - 1 == 100 && unequipAndErrorEquip[indexGarbage - 1])
			std::cout << "Garbage is full\n";
		/*---------------DELETE---------------*/
		for (int i = 0; i < indexGarbage - 1; i++)
			delete unequipAndErrorEquip[i];
		delete me;
		delete bob;
		delete michel;
		delete jean;
		delete bernadette;
		delete obj_sur_table;
		delete obj_sur_chaise;
		delete obj_sur_canape;
		delete obj_sur_porte;
		return 0;
	}
}
