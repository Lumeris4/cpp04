/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal_utils.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelanglo <lelanglo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 11:07:29 by lelanglo          #+#    #+#             */
/*   Updated: 2025/02/25 10:28:48 by lelanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal_utils.hpp"

Dog::Dog(): Animal()
{
	this->_Brain = new Brain;
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
	delete this->_Brain;
	std::cout << KGRN "Destrucor Dog called\n" KNRM;
}

void Dog::makeSound() const
{
	std::cout << "OUAF OUAF\n";
}

Cat::Cat(): Animal()
{
	this->_Brain = new Brain;
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
	delete this->_Brain;
	std::cout << KRED "Destrucor Cat called\n" KNRM;
}

void Cat::makeSound() const
{
	std::cout << "Miaouuuuu\n";
}