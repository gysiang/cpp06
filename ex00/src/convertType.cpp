/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convertType.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyong-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 13:19:16 by gyong-si          #+#    #+#             */
/*   Updated: 2025/02/04 12:40:52 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScalarConverter.hpp"

int	parseString(std::string str)
{
	double temp = strtod(str.c_str(), NULL);

	if (checkNumbers(str))
		return (1);
	if (checkPseudoLiteral(str))
		return (1);
	if (checkSingle(str))
		return (1);
	if (checkInt(temp, str) == 1)
		return (1);
	else if (checkFloat(temp, str) == 1)
		return (1);
	else if (checkDouble(temp, str) == 1)
		return (1);
	return (0);
}
