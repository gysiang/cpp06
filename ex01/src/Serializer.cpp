/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyongsi@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 11:01:55 by gyong-si          #+#    #+#             */
/*   Updated: 2025/01/08 12:22:28 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Serializer.hpp"

Serializer::Serializer(void) {};

Serializer::Serializer(Serializer const &src)
{
	*this = src;
}
Serializer &Serializer::operator=(Serializer const &src)
{
	(void) src;
	return (*this);
}

Serializer::~Serializer(void) {};


unsigned long Serializer::serialize(Data* ptr)
{
	return reinterpret_cast<unsigned long>(ptr);
}

Data* Serializer::deserialize(unsigned long raw)
{
	return reinterpret_cast<Data*>(raw);
}

