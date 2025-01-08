/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 15:56:35 by rboudwin          #+#    #+#             */
/*   Updated: 2025/01/08 16:04:06 by rboudwin         ###   ########.fr       */
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
		std::cout << "\n\033[31mBasic Tests \033[0m\n" << std::endl;
		std::cout << nums;
		std::cout << "Shortest Span: " << nums.shortestSpan() << std::endl;
		std::cout << "Longest Span: " << nums.longestSpan() << std::endl;
		Span copyNums(nums);
		std::cout << "copy test " << copyNums << std::endl;		
	}
	{
		srand(static_cast<unsigned int>(time(0)));
		Span bigNums(10000);
		for (size_t i = 0; i < 10000; i++)
		{
			bigNums.addNumber(rand() % 100000);
		}
		//std::cout << bigNums << std::endl;
		std::cout << std::endl << "\033[31m10K Numbers test\033[0m\n" << std::endl;
		std::cout << "Shortest Span: " << bigNums.shortestSpan() << std::endl;
		std::cout << "Longest Span: " << bigNums.longestSpan() << std::endl;
	}
	{
		std::cout << std::endl << "\033[31mRange of iterators test\033[0m\n" << std::endl;
		Span rangeTest(10);
		std::vector<int> input {1, 3, 6, 9, 13, 26, 34, 35, 22, 11};
		try{
			rangeTest.addNumber(input.begin(), input.end());
		}	
		catch (const std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
		std::cout << rangeTest << std::endl;
		std::cout << "Shortest Span: " << rangeTest.shortestSpan() << std::endl;
		std::cout << "Longest Span: " << rangeTest.longestSpan() << std::endl;
	}
}