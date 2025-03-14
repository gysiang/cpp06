/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyongsi@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 12:38:04 by gyong-si          #+#    #+#             */
/*   Updated: 2025/01/08 17:05:31 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Base.hpp"

Base::~Base(void) {};

Base *Base::generate(void)
{
	// value will be 0, 1, 2
	int randomValue = rand() % 3;
	// using switch statement
	switch(randomValue)
	{
		case 0:
			return (new A());
		case 1:
			return (new B());
		case 2:
			return (new C());
		default:
			std::cerr << "Error" << std::endl;
			return (NULL);
	}
}

void Base::identify(Base *p)
{
	if (!p)
	{
		std::cerr << "Pointer is null." << std::endl;
		return ;
	}
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
	else
	{
		std::cerr << "Unable to identify. Unknown type" << std::endl;
		return ;
	}
}

void Base::identify(Base &p)
{
	try {
		A &a = dynamic_cast<A&>(p);
		(void) a;
		std::cout << "A" << std::endl;
	} catch (std::exception &bc) {};
	try {
		B &b = dynamic_cast<B&>(p);
		(void) b;
		std::cout << "B" << std::endl;
	} catch (std::exception &bc) {};
	try {
		C &c = dynamic_cast<C&>(p);
		(void) c;
		std::cout << "C" << std::endl;
	} catch (std::exception &bc) {};
}
