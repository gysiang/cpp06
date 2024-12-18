/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printType.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyongsi@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 13:33:20 by gyong-si          #+#    #+#             */
/*   Updated: 2024/12/18 15:12:17 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScalarConverter.hpp"

void	printChar(const std::string &str)
{
	char charValue = str[0];

	std::cout << "char: '" << charValue << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(charValue) << std::endl;
	std::cout << "float: " << static_cast<float>(charValue) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(charValue) << std::endl;
}
void	printInt(const std::string &str)
{
	char intValue = toInt(str);

	std::cout << "char: " << (intValue >= 32 && intValue <= 126 ? "'" + std::string(1, static_cast<char>(intValue)) + "'" : "Non displayable") << std::endl;
	std::cout << "int: " << intValue << std::endl;
	std::cout << "float: " << (intValue == static_cast<int>(intValue) ? static_cast<int>(intValue) : intValue) << "f" << std::endl;
	std::cout << "double: " << (intValue == static_cast<int>(intValue) ? static_cast<int>(intValue) : intValue) << std::endl;
}

void	printFloat(const std::string &str)
{
	float floatValue = toFloat(str);

	std::cout << "char: " << (static_cast<int>(floatValue) >= 32 && static_cast<int>(floatValue) <= 126 ? "'" + std::string(1, static_cast<char>(floatValue)) + "'" : "Non displayable") << std::endl;
	std::cout << "int: " << static_cast<int>(floatValue) << std::endl;
	std::cout << "float: " << (floatValue == static_cast<int>(floatValue) ? static_cast<int>(floatValue) : floatValue) << "f" << std::endl;
std::cout << "double: " << (floatValue == static_cast<int>(floatValue) ? static_cast<int>(floatValue) : floatValue) << std::endl;}

void	printDouble(const std::string &str)
{
	double doubleValue = toDouble(str);

	std::cout << "char: " << (static_cast<int>(doubleValue) >= 32 && static_cast<int>(doubleValue) <= 126 ? "'" + std::string(1, static_cast<char>(doubleValue)) + "'" : "Non displayable") << std::endl;
	std::cout << "int: " << static_cast<int>(doubleValue) << std::endl;
	std::cout << "float: " << static_cast<float>(doubleValue) << "f" << std::endl;
	std::cout << "double: " << doubleValue << std::endl;
}
/** *
void printPseudoLiteral(const std::string &str)
{
	void (str);
} **/

/** *
cpf 273.9
takehome 1095.6
**/
