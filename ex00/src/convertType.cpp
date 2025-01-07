/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convertType.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyong-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 13:19:16 by gyong-si          #+#    #+#             */
/*   Updated: 2025/01/08 00:15:36 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScalarConverter.hpp"

int	parseString(std::string str)
{
	if (checkSingle(str))
		return (1);
	if (checkPseudoLiteral(str))
		return (1);

	double temp = strtod(str.c_str(), NULL);

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
