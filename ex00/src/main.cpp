/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyongsi@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 14:46:55 by gyong-si          #+#    #+#             */
/*   Updated: 2024/12/17 17:09:57 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScalarConverter.hpp"

int	main(int ac, char **av)
{
	(void)ac;
	(void)av;
	/** *
	if (ac != 2)
	{
		std::cout << "Wrong number of arguments." << std::endl;
		return (1);
	}
	else
	{
		ScalarConverter::convert(av[1]);
	} **/

	std::string s = "o";
	if (ScalarConverter::checkChar(s))
		std::cout << "is Char" << std::endl;
	else
		std::cout << "is not Char" << std::endl;

	std::string input = "123.45";
	if (ScalarConverter::checkInt(input))
		std::cout << input << " is a valid integer.\n";
	else
		std::cout << input << " is not a valid integer.\n";

	return (0);
}


// My Logic
/**
 * 1. Do several check functions to check what type the string is
 * 	a. check int
 *  b. check float
 *  c. check double
 *  d. check char
 *
 * 2. Once the type is confirmed try to typecast the string into the types
 * 	a. convert int
 *  b. convert float
 *  c. convert double
 *  d. convert char
 *
 * 3. Print the result to console.
 */
