/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 15:56:32 by rboudwin          #+#    #+#             */
/*   Updated: 2025/01/02 16:34:27 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <set>
#include <stdexcept>
#include <numeric>

class Span
{
private:
	std::multiset<int> _values;
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
	int shortestSpan();
	int longestSpan();
};
