/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelanglo <lelanglo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 10:42:00 by lelanglo          #+#    #+#             */
/*   Updated: 2025/02/24 12:17:15 by lelanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(): _type(NULL)
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
	return (*this);
}

