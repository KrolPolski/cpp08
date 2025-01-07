/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 15:56:32 by rboudwin          #+#    #+#             */
/*   Updated: 2025/01/07 15:38:45 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <set>
#include <vector>
#include <stdexcept>
#include <numeric>
#include <iostream>
class Span
{
private:
	std::multiset<int> _values;
	std::vector<int> _adjDiff;
	const unsigned int _size;
	int max;
	int min;
public:
	Span() = delete;
	Span(int count);
	Span(const Span& other);
	Span& operator=(const Span& other) = delete;
	~Span();
	void addNumber(int num);
	void buildAdjacentDifference();
	int shortestSpan();
	int longestSpan();
	unsigned int getCurrSize();
	unsigned int getMaxSize();
	int operator[](unsigned int index);
	std::multiset<int> getValues();
	template<typename iterator>
	void addNumber(iterator begin, iterator end);
};
std::ostream& operator<<(std::ostream& out, Span& span);

template<typename iterator>
void Span::addNumber(iterator begin, iterator end)
{
	iterator curr;
	curr = begin;
	while (curr != end)
	{
		if (_values.size() >= _size)
			throw std::runtime_error("Span is already full");
		else
		{
			_values.insert(*curr);
			curr++;
		}
	}
}