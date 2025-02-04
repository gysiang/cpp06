/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyongsi@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 11:47:16 by gyong-si          #+#    #+#             */
/*   Updated: 2025/01/22 14:17:40 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Serializer.hpp"

int main()
{
	uintptr_t	serializedData;
	Data 		*deserializedData;

	Data a = {42, "Hello 42"};

	if (a.str.empty())
	{
		std::cout << "Data is not valid" << std::endl;
		return (1);
	}
	serializedData = Serializer::serialize(&a);
	deserializedData = Serializer::deserialize(serializedData);
	if (!deserializedData)
	{
		std::cout << "Deserialization failed. Deserialized Data is NULL\n";
	}
	if (deserializedData == &a)
	{
		std::cout << "Serialization and Deserialization successful!" << std::endl;
		std::cout << "Data value: " << deserializedData->value << std::endl;
		std::cout << "Data text: " << deserializedData->str << std::endl;
	}
	else
		std::cout << "Serialization and Deserialization failed" << std::endl;
	return (0);
}

/**
 * Serialization is the process of converting a data structure or object into a linear format, such as a byte stream, string, or integer, that can be:
	-> Stored in a file or database.
	-> Sent over a network.
	-> Passed between different processes or systems.
	In this ex01, the data is converted into type unsigned long which allows the pointer to be stored/ transmitted as raw data
	Deserialize converts the type from unsigned long back to data.

	reason why its unsigned long because int only has 32bits, long has 64 bits

	- We need to check if the original pointer and the deserialised data is the same.
 */
