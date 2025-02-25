/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelanglo <lelanglo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 14:31:22 by lelanglo          #+#    #+#             */
/*   Updated: 2025/02/25 09:03:57 by lelanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"

class Brain
{
	private:
		 std::string _ideas[100];
	public:
	Brain();
	~Brain();
	Brain(const Brain &copy);
	Brain &operator=(const Brain &other);
	const std::string getIdeas(unsigned int index) const;
	void setIdeas(unsigned int index, std::string ideas); 
};