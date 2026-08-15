/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelattr <jdelattr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 13:26:41 by jdelattr          #+#    #+#             */
/*   Updated: 2026/08/15 17:19:29 by jdelattr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"


#include "Utils.hpp"
#include <iostream>
#include <ctime>

int main()
{

	std::srand(static_cast<unsigned int>(std::time(NULL)));//init avec heure actielle

	Base* p1 = generate();
	Base* p2 = generate();
	Base* p3 = generate();

	identify(p1);
	identify(*p1);

	identify(p2);
	identify(*p2);

	identify(p3);
	identify(*p3);

	delete p1;
	delete p2;
	delete p3;

	return 0;
}
    

