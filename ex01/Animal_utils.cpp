/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal_utils.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelanglo <lelanglo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 11:07:29 by lelanglo          #+#    #+#             */
/*   Updated: 2025/02/24 12:57:38 by lelanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal_utils.hpp"

Dog::Dog(): Animal()
{
	Animal::_type = "Dog";
	std::cout << "Dog constructor called\n";
}

Dog::Dog(const Dog &copy): Animal(copy)
{
	std::cout << "Dog constructor copy\n";
	*this = copy;
}

Dog &Dog::operator=(const Dog &other)
{
	this->_type = other._type;
	std::cout << "Operator Dog called\n";
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Destrucor Dog called\n";
}

void Dog::makeSound() const
{
	std::cout << "OUAF OUAF\n";
}

Cat::Cat(): Animal()
{
	Animal::_type = "Cat";
	std::cout << "Cat constructor called\n";
}

Cat::Cat(const Cat &copy): Animal(copy)
{
	std::cout << "Cat constructor copy\n";
	*this = copy;
}

Cat &Cat::operator=(const Cat &other)
{
	this->_type = other._type;
	std::cout << "Operator Cat called\n";
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Destrucor Cat called\n";
}

void Cat::makeSound() const
{
	std::cout << "Miaouuuuu\n";
}