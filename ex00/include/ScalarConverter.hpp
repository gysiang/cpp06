/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyongsi@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 14:46:13 by gyong-si          #+#    #+#             */
/*   Updated: 2025/01/15 16:00:31 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <iomanip>
#include <climits>
#include <limits>
#include <set>
#include <cstdlib>
#include <string>
#include <cfloat>
#include <cmath>
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

		static void	convert(const std::string str);

};

// checker functions
int checkInt(double temp, const std::string &str);
int checkFloat(double temp, const std::string &str);
int checkDouble(double temp, const std::string &str);
int checkPseudoLiteral(const std::string &str);
int checkSingle(const std::string &str);


// print them out
int		parseString(const std::string str);
void	printableChar(int s);
void	printChar(void);
void	printInt(void);
void	printFloat(void);
void	printDouble(void);
void	printPseudos(void);

#endif
