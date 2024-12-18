/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyongsi@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 14:46:13 by gyong-si          #+#    #+#             */
/*   Updated: 2024/12/18 13:33:06 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <limits>
#include <set>
#include <cstdlib>
#include <string>

enum e_type
{
	NA = 0,
	CHAR = 1,
	INT = 2,
	FLOAT = 3,
	DOUBLE = 4,
};

class ScalarConverter
{
	private:

		// default methods
		ScalarConverter(void);
		ScalarConverter(ScalarConverter const &src);
		ScalarConverter &operator=(ScalarConverter const &src);
		~ScalarConverter(void);

	public:

		static void	convert(std::string &str);

};

// checker functions
int checkChar(const std::string &str);
int checkInt(const std::string &str);
int checkFloat(const std::string &str);
int checkDouble(const std::string &str);
// I need one function to check for psudeo literals
int checkPseudoLiteral(const std::string &str);

// convert functions

int		toInt(const std::string &str);
float	toFloat(const std::string &str);
double	toDouble(const std::string &str);

// print them out

void	printChar(const std::string &str);
void	printInt(const std::string &str);
void	printFloat(const std::string &str);
void	printDouble(const std::string &str);


#endif
