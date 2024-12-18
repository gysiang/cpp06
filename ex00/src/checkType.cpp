/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkType.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyongsi@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 13:40:35 by gyong-si          #+#    #+#             */
/*   Updated: 2024/12/18 13:10:53 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScalarConverter.hpp"

/**
 * These functions will return an int that will define which type the characters are
 * if not return NULL
 */

int checkChar(const std::string &str)
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

int checkInt(const std::string &str)
{
	int sign = 1;
	size_t i = 0;
	long result = 0;

	if (str[0] == '+' || str[0] == '-')
	{
		if (str[i] == '-')
		{
			sign = -1;
		}
		i++;
	}
	while (i < str.length())
	{
		if (!std::isdigit(str[i]))
			return (0);
		result = result * 10 + (str[i] - '0');
		if (sign == 1 && result > std::numeric_limits<int>::max())
			return (0);
		if (sign == -1 && -result < std::numeric_limits<int>::min())
			return (0);
		i++;
	}
	return (1);
}


int checkFloat(const std::string &str)
{
	char *end = NULL;

	std::strtof(str.c_str(), &end);

	if (end != str.c_str() && *end == '\0')
		return (1);
	return (0);
}


int checkDouble(const std::string &str)
{
	char *end = NULL;

	std::strtod(str.c_str(), &end);

	if (end != str.c_str() && *end == '\0')
		return (1);
	return (0);
}

int checkPseudoLiteral(const std::string &str)
{
	static std::set<std::string> ps;

	if (ps.empty())
	{
		ps.insert("-inff");
		ps.insert("+inff");
		ps.insert("nanf");
	}
	if (ps.find(str) != ps.end())
		return (1);
	return (0);
}
