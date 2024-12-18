/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyongsi@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 14:46:33 by gyong-si          #+#    #+#             */
/*   Updated: 2024/12/18 15:13:04 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScalarConverter.hpp"

void	ScalarConverter::convert(std::string &str)
{
	// check the type of input
	try
	{
		if (checkChar(str))
			printChar(str);
		else if (checkInt(str))
		{
			std::cout << "is Int\n";
			printInt(str);
		}
		else if (checkFloat(str))
		{
			printFloat(str);
		}
		else if (checkDouble(str))
			printDouble(str);
	} catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
}


ScalarConverter::ScalarConverter(void) {};

ScalarConverter::ScalarConverter(ScalarConverter const &src)
{
	*this = src;
}

ScalarConverter	&ScalarConverter::operator=(ScalarConverter const &src)
{
	(void) src;
	return (*this);
};

ScalarConverter::~ScalarConverter(void) {};


