/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelanglo <lelanglo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 10:42:00 by lelanglo          #+#    #+#             */
/*   Updated: 2025/02/24 13:05:39 by lelanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(): _type("other")
{
	std::cout << "Animal Constructor called\n";
}

Animal::~Animal()
{
	std::cout << "Destructor for Animal called\n";
}

Animal::Animal(const Animal &copy)
{
	std::cout << "Copy Animal called\n";
	*this = copy;
}

Animal &Animal::operator=(const Animal &other)
{
	std::cout << "Operator Animal called\n";
	this->_type = other._type;
	return (*this);
}

void Animal::makeSound() const
{
	std::cout << "No sound\n";
}

std::string Animal::getType() const
{
	return this->_type;
}