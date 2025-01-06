/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convertType.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyongsi@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 13:19:16 by gyong-si          #+#    #+#             */
/*   Updated: 2025/01/06 16:18:28 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScalarConverter.hpp"

int	parseString(std::string &str)
{
	double temp = strtod(str.c_str(), NULL);

	if (checkSingle(str) && str.length() == 1)
		return (1);
	if (checkPseudoLiteral(str))
		return (1);
	if (temp >= INT_MAX || temp <= INT_MIN)
		return (-1);
	if (checkInt(temp, str))
		return (1);
	else if (checkFloat(temp, str))
		return (1);
	else if (checkDouble(temp, str))
		return (1);
	return (0);
}

