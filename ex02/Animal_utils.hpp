/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal_utils.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelanglo <lelanglo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 10:56:13 by lelanglo          #+#    #+#             */
/*   Updated: 2025/02/25 10:12:26 by lelanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
	private:
	Brain *_Brain;
	public:
	Dog();
	Dog(const Dog &copy);
	Dog &operator=(const Dog &other);
	~Dog();
	void makeSound() const;
};

class Cat: public Animal
{
	private:
	Brain *_Brain;
	public:
	Cat();
	Cat(const Cat &copy);
	Cat &operator=(const Cat &other);
	~Cat();
	void makeSound() const;
};
