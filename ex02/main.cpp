/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-atti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 03:21:07 by mel-atti          #+#    #+#             */
/*   Updated: 2025/02/21 05:16:27 by mel-atti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

/*
	Your program has to print:
		• The memory address of the string variable.
		• The memory address held by stringPTR.
		• The memory address held by stringREF.
	And then:
		• The value of the string variable.
		• The value pointed to by stringPTR.
		• The value pointed to by stringREF.
*/

int main( void )
{
    std::string     str_var = "HI THIS IS BRAIN";
    std::string     *stringPTR = &str_var;
    std::string     &stringREF = str_var;

    std::cout << "\n******** [Memory Addresses] *************\n" << std::endl;
    std::cout << "Memory address of the string var: " << &str_var << std::endl;
    std::cout << "Memory address held by stringPTR: " << stringPTR << std::endl;
    std::cout << "Memory address held by stringREF: " << &stringREF << std::endl;

    std::cout << "\n\n******** [String Value] *************\n" << std::endl;
    std::cout << "The value of  the string variable: " << str_var << std::endl;
    std::cout << "The value pointed to by stringPTR: " << *stringPTR << std::endl;
    std::cout << "The value pointed to by stringREF: " << stringREF << std::endl;

}
