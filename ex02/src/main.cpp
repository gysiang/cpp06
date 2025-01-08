/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyongsi@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 14:07:35 by gyong-si          #+#    #+#             */
/*   Updated: 2025/01/08 14:16:43 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Base.hpp"

int main()
{
	srand(static_cast<unsigned int>(time(0)));

	for (int i = 1; i < 6; i++)
	{
		std::cout << "Test " << i << std::endl;
		Base *base = Base::generate();
		std::cout << "Identify via ptr : ";
		Base::identify(base);
		std::cout << "Identify via ref : ";
		Base::identify(*base);
		delete base;
		std::cout << "------------------" << std::endl;
	}
}
