/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkType.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyong-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 13:40:35 by gyong-si          #+#    #+#             */
/*   Updated: 2024/12/16 15:14:09 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScalarConverter.hpp"

static int isSpecial(const std::string &str)
{
	if (str == "nan" || str == "nanf" || str == "+inf" || str == "+inff"
		|| str == "-inf" || str == "-inff")
		return (1);
	return (0);
}

static int isChar(const std::string &str, size_t &len)
{
	if (len == 1 && !isdigit(str[0]))
		return (1);
	// handle ""
	if (len == 3 && str[0] == '\'' && str[2] == '\'')
		return (1);
	return (0);
}

static int isInt(const std::string &str, size_t &len)
{
	bool	flag;
	int		i;

	flag = false;
	i = 0;

	if (str[0] == '-' || str[0] == '+')
	{
		i++;
		flag = true;
	}
	while ((str[i] && len > 0 && len < 12) || (str[i] && !flag && len > 0 && len < 11))
	{
		if (!isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

static int isFloat(const std::string &str, size_t &len, size_t &dot)
{
	size_t	j;
	size_t	i;

	j = dot - 1;
	while (j >= 0)
	{
		if (j != 0 && !isdigit(str[j]))
			return (0);
		if (j == 0 && str[j] != '+' && str[j] != '-' && !isdigit(str[j]))
			return (0);
		j--;
	}
	i = dot + 1;
	while (i >= 0)
	{
		if (str[i] == 'f' && !isdigit(str[i]))
			return (0);
		if (str[i] == 'f' && i != len -1)
			return (0);
		i--;
	}
	return (1);
}
