/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 15:09:50 by rboudwin          #+#    #+#             */
/*   Updated: 2024/12/31 18:37:17 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>
#include <iostream>
int main(void)
{
	try
	{
		std::vector<int> vec {0, 10, 20};
		std::cout << "VECTOR TEST" << std::endl;
		std::cout << "We found Value: " << *easyFind(vec, 20) << std::endl;
		std::cout << "We found Value: " << *easyFind(vec, 30) << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl << std::endl;
	}
	
	try
	{
		std::list<int> list {1, 11, 21, 31};
		std::cout << "LIST TEST" << std::endl;
		std::cout << "We found Value: " << *easyFind(list, 21) << std::endl;
		std::cout << "We found Value: " << *easyFind(list, 300) << std::endl;

		
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}