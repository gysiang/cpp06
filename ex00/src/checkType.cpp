/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkType.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyong-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 13:40:35 by gyong-si          #+#    #+#             */
/*   Updated: 2025/02/04 12:49:51 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScalarConverter.hpp"

int checkSingle(const std::string &str)
{
	if (str.length() == 1)
	{
		if (isdigit(str[0]))
		{
			theInt = atoi(str.c_str());
			type = TYPE_INT;
			return (1);
		}
		else if (isprint(str[0]))
		{
			theChar = str[0];
			type = TYPE_CHAR;
			return (1);
		}
	}
	return (0);
}

int checkInt(double temp, const std::string &str)
{
	std::stringstream ss(str);
	int value;

	if (!(ss >> value) || !ss.eof())
		return (0);
	type = 1;
	theInt = static_cast<int>(temp);
	return (1);
}

int checkFloat(double temp, const std::string &str)
{
	if (str.find('.') == std::string::npos)
		return (-1);
	if (str.find('f') == std::string::npos)
		return (-1);
	if (str[str.size() - 1] != 'f')
		return (-1);
	if (std::abs(temp) > static_cast<float>(INT_MAX))
		return (-1);

	type = TYPE_FLOAT;
	theFloat = static_cast<float>(temp);
	return (1);
}

int checkDouble(double temp, const std::string &str)
{
	std::stringstream ss(str);
	double value;

	if (!(ss >> value) || !ss.eof())
		return (0);
	if (std::abs(value) > DBL_MAX)
		return (-1);
	type = TYPE_DOUBLE;
	theDouble = static_cast<double>(temp);
	return (1);
}

int checkPseudoLiteral(const std::string &str)
{
	const std::string pseudoLiteral[] = {"-inff", "-INFF", "+inff", "+INFF", "nanf", "NANF", "-inf", "-INF", "+inf", "+INF", "nan", "NAN"};

	for (int i = 0; i < 12; i++)
	{
		if (str == pseudoLiteral[i])
		{
			type = TYPE_PSEUDOS;
			theFloat = strtof(pseudoLiteral[i].c_str(), NULL);
			theDouble = strtod(pseudoLiteral[i].c_str(), NULL);
			return (1);
		}
	}
	return (0);
}

int checkNumbers(const std::string &str)
{
	std::stringstream ss(str);
	double value;

	ss >> value;

	if (ss.fail() || !ss.eof())
		return (1);
	if (str.length() > 6)
		return (1);
	return (0);
}