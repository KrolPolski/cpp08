/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 15:56:35 by rboudwin          #+#    #+#             */
/*   Updated: 2025/01/07 13:09:21 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <ctime>
int main(void)
{
	{
		Span nums(5);
		try
		{
			nums.addNumber(17);
			nums.addNumber(21);
			nums.addNumber(-1);
			nums.addNumber(3);
			nums.addNumber(6);
			nums.addNumber(8);
		}
		catch (const std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
		std::cout << "Basic Tests " << std::endl;
		std::cout << nums;
		std::cout << "Shortest Span: " << nums.shortestSpan() << std::endl;
		std::cout << "Longest Span: " << nums.longestSpan() << std::endl;
		}
	{
		srand(static_cast<unsigned int>(time(0)));
		Span bigNums(10000);
		for (size_t i = 0; i < 10000; i++)
		{
			bigNums.addNumber(rand() % 100000);
		}
		//std::set<int> bigNumsUniq = bigNums.getValues();
		std::cout << bigNums << std::endl;
		std::cout << std::endl << "10K Numbers test" << std::endl;
		std::cout << "Shortest Span: " << bigNums.shortestSpan() << std::endl;
		std::cout << "Longest Span: " << bigNums.longestSpan() << std::endl;
	}
}