/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 15:58:28 by rboudwin          #+#    #+#             */
/*   Updated: 2025/01/08 15:45:02 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <deque>
#include <algorithm>
#include <stack>

template <typename data>
class MutantStack
{
private:
	std::deque<data> evolvedStack;
public:
	MutantStack();
	MutantStack(const MutantStack& other);
	MutantStack& operator=(const MutantStack& other);
	~MutantStack();
	operator std::stack<data>() const;
	typedef typename std::deque<data>::iterator iterator;
	data& top();
	bool empty() const;
	unsigned int size();
	void push(data& value);
	void push(const data& value);
	void pop();
	void swap(MutantStack &other);
	typename MutantStack<data>::iterator begin();
	typename MutantStack<data>::iterator end();
};

template <typename data>
MutantStack<data>::MutantStack()
{
	
}

template <typename data>
MutantStack<data>::MutantStack(const MutantStack& other)
{
	evolvedStack = other.evolvedStack;
}
template <typename data>
MutantStack<data>& MutantStack<data>::operator=(const MutantStack<data>& other)
{
	evolvedStack = other.evolvedStack;
	return (*this);
}

template <typename data>
MutantStack<data>::~MutantStack()
{
	
}

template <typename data>
data& MutantStack<data>::top()
{
	return evolvedStack.back();
}

template <typename data>
bool MutantStack<data>::empty() const
{
	if (evolvedStack.size() == 0)
		return true;
	else
		return false;
}

template <typename data>
unsigned int MutantStack<data>::size()
{
	return evolvedStack.size();
}

template <typename data>
void MutantStack<data>::push(data& value)
{
	evolvedStack.push_back(value);
}

template <typename data>
void MutantStack<data>::push(const data& value)
{
	evolvedStack.push_back(value);
}

template <typename data>
void MutantStack<data>::pop()
{
	evolvedStack.pop_back();	
}

template <typename data>
void MutantStack<data>::swap(MutantStack &other)
{
	std::swap(*this->evolvedStack, other.evolvedStack);	
}

template <typename data>
typename MutantStack<data>::iterator MutantStack<data>::begin()
{
	return evolvedStack.begin();
}

template <typename data>
typename MutantStack<data>::iterator MutantStack<data>::end()
{
	return evolvedStack.end();
}

template <typename data>
MutantStack<data>::operator typename std::stack<data>() const
{
	return std::stack<data>(evolvedStack);	
}
