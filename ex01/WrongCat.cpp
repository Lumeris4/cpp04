/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelanglo <lelanglo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 14:05:53 by lelanglo          #+#    #+#             */
/*   Updated: 2025/02/24 14:09:23 by lelanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal()
{
	WrongAnimal::_type = "WrongCat";
	std::cout << "WrongCat constructor called\n";
}

WrongCat::WrongCat(const WrongCat &copy): WrongAnimal(copy)
{
	std::cout << "WrongCat constructor copy\n";
	*this = copy;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
	this->_type = other._type;
	std::cout << "Operator WrongCat called\n";
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "Destrucor WrongCat called\n";
}

void WrongCat::makeSound() const
{
	std::cout << "Miaouuuuu\n";
}