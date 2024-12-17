/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyongsi@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 14:46:13 by gyong-si          #+#    #+#             */
/*   Updated: 2024/12/17 16:19:37 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <limits>

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


		/** *
		static int checkInt(std::string str);
		static int checkFloat(std::string str);
		static int checkDouble(std::string str);
		**/


		// default methods
		ScalarConverter(void);
		ScalarConverter(ScalarConverter const &src);
		ScalarConverter &operator=(ScalarConverter const &src);
		~ScalarConverter(void);

	public:
		static int checkChar(std::string str);
		static int checkInt(std::string str);

		static void	convert(std::string str);

};


#endif
