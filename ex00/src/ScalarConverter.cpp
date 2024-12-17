/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyongsi@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 14:46:33 by gyong-si          #+#    #+#             */
/*   Updated: 2024/12/17 13:31:50 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScalarConverter.hpp"

void	ScalarConverter::convert(std::string str)
{
	int findType = NULL;

}


bool ScalarConverter::checkInt(std::string str)
{

}

bool ScalarConverter::checkFloat(std::string str)
{

}

bool ScalarConverter::checkDouble(std::string str)
{

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
