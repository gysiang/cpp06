/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convertType.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyongsi@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 13:19:16 by gyong-si          #+#    #+#             */
/*   Updated: 2024/12/18 14:43:48 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScalarConverter.hpp"

int		toInt(const std::string &str)
{
	char	*end;
	long	value;

	value = std::strtol(str.c_str(), &end, 10);
	if (end != str.c_str() && *end == '\0')
	{
		return static_cast<int>(value);
	}
	return (0);
}

float	toFloat(const std::string &str)
{
	char *end = NULL;

	return std::strtof(str.c_str(), &end);
}

double	toDouble(const std::string &str)
{
	char *end = NULL;

	return std::strtod(str.c_str(), &end);
}
