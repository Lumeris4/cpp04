/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelanglo <lelanglo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 14:01:46 by lelanglo          #+#    #+#             */
/*   Updated: 2025/02/24 14:16:36 by lelanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include <iostream>
#include <string>

class WrongAnimal
{
	protected:
	std::string _type;

	public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal &copy);
	virtual ~WrongAnimal();
	WrongAnimal &operator=(const WrongAnimal &other);
	void makeSound() const;
	std::string getType() const;
};