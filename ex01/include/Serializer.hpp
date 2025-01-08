/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyongsi@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 10:58:01 by gyong-si          #+#    #+#             */
/*   Updated: 2025/01/08 12:22:58 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>
#include <string.h>

struct Data
{
	int			value;
	std::string str;
};

class Serializer
{
	private:
		Serializer(void);
		Serializer(Serializer const &src);
		Serializer &operator=(Serializer const &src);
		~Serializer(void);

	public:
		static unsigned long serialize(Data* ptr);
		static Data* deserialize(unsigned long raw);

};

#endif
