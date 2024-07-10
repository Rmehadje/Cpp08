/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmehadje <rmehadje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 10:06:32 by rmehadje          #+#    #+#             */
/*   Updated: 2024/07/10 10:30:29 by rmehadje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(){
	std::vector<int> vec;


	vec.push_back(20);
	vec.push_back(50);
	vec.push_back(2);
	vec.push_back(21);
	vec.push_back(53);
	vec.push_back(99);
	try{
		std::cout << easyfind(vec, 21) << std::endl;
		std::cout << easyfind(vec, 99) << std::endl;
		std::cout << easyfind(vec, 4) << std::endl;
	}catch (std::exception &e){
		std::cout << "error: " << e.what() << std::endl;
	}
	return (0);
}