/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmehadje <rmehadje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 10:51:43 by rmehadje          #+#    #+#             */
/*   Updated: 2024/07/10 11:38:26 by rmehadje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <vector>

Span::Span(unsigned int n){
	N = n;
	std::cout << "Span constructor called\n";
}

Span::Span(const Span &cp){
	*this = cp;
}

Span &Span::operator=(const Span &og){
	if (this != &og){
		N = og.N;
		vec = og.vec;
	}
	return *this;
}

Span::~Span(){
	std::cout << "Span deconstructor called\n";
}

void	Span::addNumber(int num){
	if (vec.size() < N)
		vec.push_back(num);
	else
		throw std::exception();
}

int	Span::shortestSpan(){
	if (vec.size() < 2)
		throw std::exception();
	std::vector<int> vik = vec;
	std::sort(vik.begin(), vik.end());
	int shortest = vik[1] - vik[0];
	for (int i = 1; i < vik.size() - 1; i++){
		int span = vik[i + 1] - vik[i];
		if (span < shortest)
			shortest = span;
	}
	return shortest;
}

int	Span::longestSpan(){
	if (vec.size() < 2)
		throw std::exception();
	std::vector<int> vik = vec;
	std::sort(vik.begin(), vik.end());
	int i = vik.size() - 1;
	int longest = vik[i] - vik[0];
	return longest;
}
