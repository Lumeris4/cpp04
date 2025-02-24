/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelanglo <lelanglo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 10:36:45 by lelanglo          #+#    #+#             */
/*   Updated: 2025/02/24 12:11:18 by lelanglo         ###   ########.fr       */
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
	~Animal();
	Animal(const Animal &copy);
	Animal &operator=(const Animal &other);
	void makeSound();
};