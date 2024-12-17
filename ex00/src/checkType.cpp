/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkType.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyongsi@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 13:40:35 by gyong-si          #+#    #+#             */
/*   Updated: 2024/12/17 13:52:09 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScalarConverter.hpp"

/**
 * These functions will return an int that will define which type the characters are
 * if not return NULL
 */

int ScalarConverter::checkChar(std::string str)
{
	int i = 0;
	int len = str.length();

	// handle something with quotes and more than 1 character
	// etc 'hello'
	if (len >= 3 && str[0] == '\'' && str[len - 1] == '\'')
	{
		while (len > i)
		{
			if (std::isdigit(str[i]))
			{
				return (0);
			}
			i++;
		}
		return (1);
	}
	// handle the single character like o, returns
	if (str.length() == 1 && !std::isdigit(str[0]))
		return (1);
	return (0);
}

int ScalarConverter::checkInt(std::string str)
{

}

int ScalarConverter::checkFloat(std::string str)
{

}

int ScalarConverter::checkDouble(std::string str)
{

}
