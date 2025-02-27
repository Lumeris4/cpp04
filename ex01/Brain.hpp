/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelanglo <lelanglo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 14:31:22 by lelanglo          #+#    #+#             */
/*   Updated: 2025/02/27 10:51:16 by lelanglo         ###   ########.fr       */
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
	void Setideas(int i, std::string ideas);
	std::string GetIdeas(int i);
};