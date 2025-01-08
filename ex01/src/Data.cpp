/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyongsi@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 11:01:39 by gyong-si          #+#    #+#             */
/*   Updated: 2025/01/08 11:08:35 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Data.hpp"

Data::Data(void) {};

Data::Data(Data const &src)
{
	*this = src;
};

Data &Data::operator=(Data const &src)
{
	(void) src;
	return (*this);
};

Data::~Data(void) {};
