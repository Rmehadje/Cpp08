/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyFind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmehadje <rmehadje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 10:02:23 by rmehadje          #+#    #+#             */
/*   Updated: 2024/07/10 10:17:17 by rmehadje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <ostream>
#include <string>
#include <vector>



template <typename T>
int	easyfind(T &container, int n){
	typename T::iterator it = std::find(container.begin(), container.end(), n);
		if (it == container.end())
			throw std::exception();
		return *it;
}