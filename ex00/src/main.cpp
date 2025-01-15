/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyongsi@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 14:46:55 by gyong-si          #+#    #+#             */
/*   Updated: 2025/01/15 13:58:34 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScalarConverter.hpp"

int type = -1;
char theChar = '\0';
int theInt = 0;
float theFloat = 0.0f;
double theDouble = 0.0;

int	main(int ac, char **av)
{
	if (ac != 2)
		std::cerr << "Wrong Number of arguments" << std::endl;
	else
		ScalarConverter::convert(av[1]);
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
