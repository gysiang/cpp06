/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkType.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyongsi@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 13:40:35 by gyong-si          #+#    #+#             */
/*   Updated: 2025/01/06 16:20:04 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScalarConverter.hpp"

int checkSingle(const std::string &str)
{
	if (isdigit(*str.c_str()))
	{
		theInt = atoi(str.c_str());
		type = TYPE_INT;
		return (1);
	}
	else if (isprint(*str.c_str()))
	{
		theChar = str[0];
		type = TYPE_CHAR;
		return (1);
	}
	return (0);
}

int checkInt(double temp, const std::string &str)
{
	if (str.find('.') != std::string::npos || !isdigit(temp) ||
		temp > INT_MAX || temp < INT_MIN)
		return (-1);
	return (1);
}

int checkFloat(double temp, const std::string &str)
{
	if ((str.find('.') == std::string::npos) && (str.find('f') == std::string::npos))
		return (-1);
	if (abs(temp) > FLT_MAX)
		return (-1);
	type = TYPE_FLOAT;
	theFloat = static_cast<float>(temp);
	return (1);
}

int checkDouble(double temp, const std::string &str)
{
	if (str.find('f') != std::string::npos)
		return (-1);
	if (abs(temp) > DBL_MAX)
		return (-1);
	type = TYPE_DOUBLE;
	theDouble = static_cast<double>(temp);
	return (1);
}

int checkPseudoLiteral(const std::string &str)
{
	const std::string pseudoLiteral[] = {"-inff", "+inff", "nanf", "-inf", "+inf", "nan"};

	for (const std::string &s : pseudoLiteral)
	{
		if (str == s)
		{
			type = TYPE_PSEUDOS;
			return (1);
		}
	}
	return (0);
}
