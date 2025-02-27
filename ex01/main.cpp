/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelanglo <lelanglo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 10:34:02 by lelanglo          #+#    #+#             */
/*   Updated: 2025/02/27 11:14:03 by lelanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	Animal *tab[20];
	for (int i = 0; i < 20; i++)
	{
		if (i % 2 == 0)
			tab[i] = new Dog();
		else
			tab[i] = new Cat();
	}
	for (int j = 0; j < 20; j++)
	{
		tab[j]->makeSound();
		delete tab[j];
	}
	std::cout << KBLU "\n--------------Copy test--------------\n" KNRM;
	Dog *dog = new Dog();
	Dog *copy(dog);
	dog->Setideas(0, "HUngry");
	std::cout << "ideas " << dog->GetIdeas(0) << std::endl;
	std::cout << "ideas " << copy->GetIdeas(0) << std::endl;
	delete dog;
	return 0;
}