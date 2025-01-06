/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printType.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyongsi@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 13:33:20 by gyong-si          #+#    #+#             */
/*   Updated: 2025/01/06 16:24:45 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScalarConverter.hpp"

void	printChar()
{
	theInt = static_cast<int>(theChar);
	theFloat = static_cast<float>(theChar);
	theDouble = static_cast<double>(theChar);

	std::cout << "Char: " << theChar << "'" << std::endl;
	std::cout << "Int: " << theInt << "'" << std::endl;
	std::cout << "Float: " << std::fixed << std::setprecision(1) << theFloat << "f" << std::endl;
	std::cout << "Double: " << theDouble << "'" << std::endl;
}

void	printableChar(int s)
{
	if (s == TYPE_INT)
	{
		if (isprint(theInt))
		{
			theChar = static_cast<char>(theInt);
			std::cout << "Char: '" << theChar << "'" << std::endl;
		}
		else if (0 <= theInt <= 31 || theInt == 127)
			std::cout << "Char: Non displayable" << std::endl;
		else
			std::cout << "Char: impossible" << std::endl;
	}
	else if (s == TYPE_FLOAT)
	{
		if (isprint(theFloat))
		{
			theChar = static_cast<char>(theFloat);
			std::cout << "Char: '" << theChar << "'" << std::endl;
		}
		else if (0 <= theInt <= 31 || theInt == 127)
			std::cout << "Char: Non displayable" << std::endl;
		else
			std::cout << "Char: impossible" << std::endl;
	}
	else if (s == TYPE_DOUBLE)
	{
		if (isprint(theDouble))
		{
			theChar = static_cast<char>(theDouble);
			std::cout << "Char: '" << theChar << "'" << std::endl;
		}
		else if ((theDouble >= 0 && theDouble <= 31) || theDouble == 127)
			std::cout << "Char: Non displayable" << std::endl;
		else
			std::cout << "Char: impossible" << std::endl;
	}
}

void	printInt()
{
	printableChar(TYPE_INT);
	theFloat = static_cast<float>(theInt);
	theDouble = static_cast<double>(theInt);

	std::cout << "Int: " << theInt << std::endl;
	std::cout << "Float: " << std::fixed << std::setprecision(1) << theFloat << "f" << std::endl;
	std::cout << "Double: " << theDouble << std::endl;
	return ;
}

void	printFloat()
{
	printableChar(TYPE_FLOAT);
	if (theFloat > FLT_MAX || theFloat < FLT_MIN)
		std::cout << "Int: impossible" << std::endl;
	else
	{
		theInt = static_cast<int>(theFloat);
		std::cout << "Int: " << theInt << std::endl;
	}
	theDouble = static_cast<double>(theFloat);
	std::cout << "Float: " << std::fixed << std::setprecision(1) << theFloat << "f" << std::endl;
	std::cout << "Double: " << theDouble << std::endl;
	return ;
}

void	printDouble()
{
	printableChar(TYPE_DOUBLE);
	if (theFloat > FLT_MAX || theFloat < FLT_MIN)
		std::cout << "Int: impossible" << std::endl;
	else
	{
		theInt = static_cast<int>(theDouble);
		std::cout << "Int: " << theInt << std::endl;
	}
	if (abs(theDouble) > FLT_MAX)
		std::cout << "Float: " << "inf" << std::endl;
	else
	{
		theFloat = static_cast<float>(theDouble);
		std::cout << "Float: " << std::fixed << std::setprecision(1) << theFloat << "f" << std::endl;
	}
	std::cout << "Double: " << theDouble << std::endl;
	return ;
}

void printPseudos()
{
	std::cout << "Char: " << "impossible" << std::endl;
	std::cout << "Int: " << "impossible" << std::endl;
	std::cout << "Float: " << theFloat << "f" << std::endl;
	std::cout << "Double: " << theDouble << std::endl;
	return ;
}
