/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyongsi@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 14:46:13 by gyong-si          #+#    #+#             */
/*   Updated: 2025/01/06 15:26:39 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <iomanip>
#include <climits>
#include <set>
#include <cstdlib>
#include <string>
#include <cfloat>
#include "GlobalVariables.hpp"

#define TYPE_CHAR 0
#define TYPE_INT 1
#define TYPE_FLOAT 2
#define TYPE_DOUBLE 3
#define TYPE_PSEUDOS 4

class ScalarConverter
{
	private:

		// default methods
		ScalarConverter(void);
		ScalarConverter(ScalarConverter const &src);
		ScalarConverter &operator=(ScalarConverter const &src);
		~ScalarConverter(void);

	public:

		static void	convert(std::string str);

};

// checker functions
int checkInt(double temp, const std::string &str);
int checkFloat(double temp, const std::string &str);
int checkDouble(double temp, const std::string &str);
int checkPseudoLiteral(const std::string &str);

// convert functions

int		toInt(const std::string &str);
float	toFloat(const std::string &str);
double	toDouble(const std::string &str);

// print them out

void	parseString(const std::string &str);
void	printChar(void);
void	printInt(void);
void	printFloat(void);
void	printDouble(void);
void	printPseudos(void);

#endif
