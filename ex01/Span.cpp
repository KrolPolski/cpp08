/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 15:56:25 by rboudwin          #+#    #+#             */
/*   Updated: 2025/01/07 13:11:41 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(int count) : _size(count)
{
}

Span::Span(const Span& other) : _size(other._size)
{
}

Span::~Span()
{	
}

void Span::addNumber(int num)
{
	if (_values.size() >= _size)
		throw std::runtime_error("Span is already full");
	else
	{
		_values.insert(num);
	}
}

void Span::buildAdjacentDifference()
{
	_adjDiff.resize(_values.size());
	std::adjacent_difference(_values.begin(), _values.end(), _adjDiff.begin());
	/*std::cout << "AdjDiff: " ;
	for (size_t i = 0; i < _adjDiff.size(); i++)
	{
		std::cout << _adjDiff[i] << " ";
	}
	
	std::cout << std::endl;*/
}

int Span::shortestSpan()
{
	buildAdjacentDifference();
	if (getCurrSize() <= 1)
		throw(std::runtime_error("No Span can be found"));
	min = _adjDiff.at(1);
	for (size_t i = 1; i < getCurrSize(); i++)
	{
		if (_adjDiff.at(i) < min)
			min = _adjDiff.at(i);
	}
	return min;
}
int Span::longestSpan()
{
	buildAdjacentDifference();
	if (getCurrSize() <= 1)
		throw(std::runtime_error("No Span can be found"));
	max = _adjDiff.at(1);
	for (size_t i = 1; i < getCurrSize(); i++)
	{
		if (_adjDiff.at(i) > max)
			max = _adjDiff.at(i);
	}
	return max;
}

std::multiset<int> Span::getValues()
{
	return _values;
}
unsigned int Span::getCurrSize()
{
	return _values.size();
}
unsigned int Span::getMaxSize()
{
	return _size;	
}
int Span::operator[](unsigned int index)
{
	if (index >= _values.size())
		throw std::out_of_range("Invalid index");
	auto iter = _values.begin();
	for (size_t i = 0; i < index; i++)
	{
		iter++;
	}	
	return *(iter);
}
std::ostream& operator<<(std::ostream& out,  Span& span)
{
	for (size_t i = 0; i < span.getCurrSize(); i++)
	{
		out << span[i] << " ";
	}
	
	out << std::endl;
	return out;
}