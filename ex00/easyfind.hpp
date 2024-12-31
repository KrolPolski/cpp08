/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 14:40:04 by rboudwin          #+#    #+#             */
/*   Updated: 2024/12/31 18:36:32 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <algorithm>
#include <string>
#include <stdexcept>

template <typename T>
typename T::iterator easyFind(T& box, int num)
{
	auto iter = std::find(box.begin(), box.end(), num);
	if (iter == box.end())
		throw std::runtime_error(std::to_string(num) + " not found in container");
	return iter;
}
