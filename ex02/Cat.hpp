/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelanglo <lelanglo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 09:12:47 by lelanglo          #+#    #+#             */
/*   Updated: 2025/02/27 11:14:53 by lelanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
	private:
	Brain *_Brain;
	public:
	Cat();
	Cat(const Cat &copy);
	Cat &operator=(const Cat &other);
	~Cat();
	void makeSound() const;
	void Setideas(int i, std::string ideas);
	std::string GetIdeas(int i);
};