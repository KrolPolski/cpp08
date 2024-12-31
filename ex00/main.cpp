/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 15:09:50 by rboudwin          #+#    #+#             */
/*   Updated: 2024/12/31 15:31:05 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>
#include <iostream>
int main(void)
{
	{
		std::vector<int> vec;
		vec.push_back(0);
		vec.push_back(10);
		vec.push_back(20);
		std::cout << "VECTOR TEST" << std::endl;
		std::cout << "Pointer: " << (easyFind(vec, 20)) << " Value: " << *easyFind(vec, 20) << std::endl;
		std::cout << "Expecting nullptr: " << easyFind(vec, 147) << std::endl << std::endl;
	}
	{
		std::list<int> list;
		list.push_back(1);
		list.push_back(11);
		list.push_back(21);
		std::cout << "LIST TEST" << std::endl;
		std::cout << "Pointer: " << (easyFind(list, 11)) << " Value: " << *easyFind(list, 11) << std::endl;
		std::cout << "Expecting nullptr: " << easyFind(list, 147) << std::endl << std::endl;
	}
	
}