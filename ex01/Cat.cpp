/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelanglo <lelanglo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 09:12:12 by lelanglo          #+#    #+#             */
/*   Updated: 2025/02/27 11:15:19 by lelanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

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

void Cat::Setideas(int i, std::string ideas)
{
	if (i > 99)
	{
		std::cout << "An animal have 100 ideas max\n";
		return;
	}
	this->_Brain->Setideas(i, ideas);
}

std::string Cat::GetIdeas(int i)
{
	if (i > 99)
	{
		return ("An animal have 100 ideas max\n");
	}
	return(this->_Brain->GetIdeas(i));
}