/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelanglo <lelanglo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 14:06:00 by lelanglo          #+#    #+#             */
/*   Updated: 2025/02/24 14:09:01 by lelanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
	public:
	WrongCat();
	WrongCat(const WrongCat &copy);
	WrongCat &operator=(const WrongCat &other);
	~WrongCat();
	void makeSound() const;
};