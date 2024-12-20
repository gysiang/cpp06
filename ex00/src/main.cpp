/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyongsi@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 14:46:55 by gyong-si          #+#    #+#             */
/*   Updated: 2024/12/18 14:48:25 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScalarConverter.hpp"

int	main(int ac, char **av)
{
	(void)ac;
	(void)av;

	std::string s = "0";
	ScalarConverter::convert(s);
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
