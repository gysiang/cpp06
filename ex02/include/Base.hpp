/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyongsi@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 12:31:55 by gyong-si          #+#    #+#             */
/*   Updated: 2025/01/08 14:10:07 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include <cstdlib>
#include <ctime>
#include <iostream>

class Base
{
	private:

	public:
		virtual ~Base(void);

		static Base *generate(void);
		static void identify(Base *p);
		static void identify(Base &p);


};

class A : public Base {};
class B : public Base {};
class C : public Base {};

#endif
