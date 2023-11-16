/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mario <mario@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 20:13:40 by magonzal          #+#    #+#             */
/*   Updated: 2023/11/16 10:53:16 by mario            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void)
{
	Array<int> a(10);
	
	try
	{
		a[6] = 8;
		std::cout << a[6] << std::endl;
		std::cout << a[50] << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << "index is out of range" << std::endl;
	}
	return (0);
}