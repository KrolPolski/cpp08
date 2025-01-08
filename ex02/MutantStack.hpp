/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 15:58:28 by rboudwin          #+#    #+#             */
/*   Updated: 2025/01/08 14:26:24 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <deque>

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
	data& top();
	bool empty() const;
	unsigned int size();
	void push(data& value);
	void push(const data& value);
	void pop();
	void swap(MutantStack &other);
	typename std::deque<data>::iterator begin();
	typename std::deque<data>::iterator end();
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
	
}
template <typename data>
bool MutantStack<data>::empty() const
{
	
}
template <typename data>
unsigned int MutantStack<data>::size()
{}
template <typename data>
void MutantStack<data>::push(data& value)
{
	
}
template <typename data>
void MutantStack<data>::push(const data& value)
{
	
}
template <typename data>
void MutantStack<data>::pop()
{
	
}
template <typename data>
void MutantStack<data>::swap(MutantStack &other)
{
	
}
template <typename data>
typename std::deque<data>::iterator MutantStack<data>::begin()
{
	
}
template <typename data>
typename std::deque<data>::iterator MutantStack<data>::end()
{
	
}
