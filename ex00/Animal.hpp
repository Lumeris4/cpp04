/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelanglo <lelanglo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 10:36:45 by lelanglo          #+#    #+#             */
/*   Updated: 2025/02/24 13:05:50 by lelanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Animal
{
	protected:
	std::string _type;

	public:
	Animal();
	Animal(const Animal &copy);
	virtual ~Animal();
	Animal &operator=(const Animal &other);
	virtual void makeSound() const;
	std::string getType() const;
};