/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelanglo <lelanglo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 09:11:08 by lelanglo          #+#    #+#             */
/*   Updated: 2025/02/27 09:16:13 by lelanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

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