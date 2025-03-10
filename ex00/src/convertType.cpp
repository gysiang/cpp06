/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convertType.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyong-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: Invalid date        by                   #+#    #+#             */
/*   Updated: 2025/03/10 11:30:46 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../include/ScalarConverter.hpp"

int	parseString(std::string str)
{
	if (checkPseudoLiteral(str))
		return (1);
	if (checkSingle(str))
		return (1);

	double temp = strtod(str.c_str(), NULL);

	if (checkInt(temp, str) == 1)
		return (1);
	else if (checkFloat(temp, str) == 1)
		return (1);
	else if (checkDouble(temp, str) == 1)
		return (1);
	return (0);
}
