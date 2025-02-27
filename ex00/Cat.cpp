/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelanglo <lelanglo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 09:07:15 by lelanglo          #+#    #+#             */
/*   Updated: 2025/02/27 09:07:29 by lelanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

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