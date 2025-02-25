/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelanglo <lelanglo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 14:32:26 by lelanglo          #+#    #+#             */
/*   Updated: 2025/02/25 10:55:02 by lelanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Constructor called\n";
}

Brain::~Brain()
{
	std::cout << "Destructor for Brain called\n";
}

Brain::Brain(const Brain &copy)
{
	std::cout << "Copy Brain called\n";
	*this = copy;
}

Brain &Brain::operator=(const Brain &other)
{
	std::cout << "Operator Brain called\n";
	for(int i = 0; i < 100; i++)
		if(other._ideas->length() > 0)
			this->_ideas[i].assign(other._ideas[i]);
	return (*this);
}