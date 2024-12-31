/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 14:40:04 by rboudwin          #+#    #+#             */
/*   Updated: 2024/12/31 15:24:23 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
int *easyFind(T box, int num)
{
	int length {-1};
	
	for (int& element : box)
	{
		length++;
		if (element == num)
			return &element;
	}
	return nullptr;
	//throw std::out_of_range(e)
}
