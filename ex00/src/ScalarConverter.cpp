/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyong-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 14:46:33 by gyong-si          #+#    #+#             */
/*   Updated: 2024/12/16 13:36:45 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScalarConverter.hpp"

void	ScalarConverter::convert(std::string &str)
{


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
