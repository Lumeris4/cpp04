/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelanglo <lelanglo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 10:34:02 by lelanglo          #+#    #+#             */
/*   Updated: 2025/02/25 12:25:01 by lelanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal_utils.hpp"
#include "WrongCat.hpp"

int main()
{
	//Animal failure;
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
	return 0;
}