/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 15:56:25 by rboudwin          #+#    #+#             */
/*   Updated: 2025/01/02 16:41:21 by rboudwin         ###   ########.fr       */
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
int Span::shortestSpan()
{
	// std::adjacent_difference is probably the answer here.
}
int Span::longestSpan()
{
	
}