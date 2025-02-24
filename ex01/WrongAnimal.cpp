/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelanglo <lelanglo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 14:01:39 by lelanglo          #+#    #+#             */
/*   Updated: 2025/02/24 14:04:49 by lelanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): _type("other")
{
	std::cout << "WrongAnimal Constructor called\n";
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Destructor for WrongAnimal called\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	std::cout << "Copy WrongAnimal called\n";
	*this = copy;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
	std::cout << "Operator WrongAnimal called\n";
	this->_type = other._type;
	return (*this);
}

void WrongAnimal::makeSound() const
{
	std::cout << "No sound\n";
}

std::string WrongAnimal::getType() const
{
	return this->_type;
}