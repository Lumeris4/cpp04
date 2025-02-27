/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelanglo <lelanglo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 10:34:02 by lelanglo          #+#    #+#             */
/*   Updated: 2025/02/27 09:07:57 by lelanglo         ###   ########.fr       */
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
	delete j;
	delete i;
	
	std::cout << "\n\ntest Wrong\n\n";
	
	const WrongAnimal* k = new WrongAnimal();
	const WrongAnimal* g = new WrongCat();
	std::cout << k->getType() << " " << std::endl;
	std::cout << g->getType() << " " << std::endl;
	k->makeSound();
	g->makeSound();
	delete g;
	delete k;
}