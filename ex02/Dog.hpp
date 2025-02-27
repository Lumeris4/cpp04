/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelanglo <lelanglo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 09:11:27 by lelanglo          #+#    #+#             */
/*   Updated: 2025/02/27 09:11:29 by lelanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
	private:
	Brain *_Brain;
	public:
	Dog();
	Dog(const Dog &copy);
	Dog &operator=(const Dog &other);
	~Dog();
	void makeSound() const;
};