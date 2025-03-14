/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyong-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 14:46:33 by gyong-si          #+#    #+#             */
/*   Updated: 2025/03/10 11:33:07 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScalarConverter.hpp"

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

void ScalarConverter::convert(const std::string str)
{
	parseString(str);
	//std::cout << "Type : " << type << std::endl;
	switch (type)
	{
		case 0:
			printChar();
			break;
		case 1:
			printInt();
			break;
		case 2:
			printFloat();
			break;
		case 3:
			printDouble();
			break;
		case 4:
			printPseudos();
			break;
		default:
			std::cerr<< "Invalid" << std::endl;
	}
}
