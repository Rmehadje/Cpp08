/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmehadje <rmehadje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 10:48:22 by rmehadje          #+#    #+#             */
/*   Updated: 2024/07/10 10:55:36 by rmehadje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <ostream>
#include <string>
#include <vector>


class Span{
	private:
		std::vector<int> vec;
		unsigned int N;
	public:
		Span(unsigned int n);
		Span(const Span &cp);
		Span &operator=(const Span &og);
		~Span();
		void addNumber(int num);
		int	shortestSpan();
		int	longestSpan();
		
};