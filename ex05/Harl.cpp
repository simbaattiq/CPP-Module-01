/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-atti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 02:10:43 by mel-atti          #+#    #+#             */
/*   Updated: 2025/02/25 22:14:22 by mel-atti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl( void ) {}

Harl::~Harl( void ) {}

void	Harl::debug( void )
{
	std::cout << "[ DEBUG ]\n";
	std::cout << "I love having extra bacon for my ";
	std::cout << "7XL-double-cheese-triple-pickle-specialketchup burger.\nI really do!\n";
}

void	Harl::info( void )
{
	std::cout << "[ INFO ]\n";
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put\n";
	std::cout << "enough bacon in my burger! If you did, I wouldn't be asking for more!\n";
}

void	Harl::warning( void )
{
	std::cout << "[ WARNING ]\n";
	std::cout << "I think I deserve to have some extra bacon for free.\n";
	std::cout << "I've been coming for years whereas you started working here since last month.\n";
}

void	Harl::error( void )
{
	std::cout << "[ ERROR ]\n";
	std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}

lev	Harl::get_msg_lvl(std::string lvl)
{
	if (lvl == "DEBUG")
		return (DEBUG);
	if (lvl == "INFO")
		return (INFO);
	if (lvl == "WARNING")
		return (WARNING);
	if (lvl == "ERROR")
		return (ERROR);
	return (UNKNOWN);
}

void	Harl::complain(std::string level) 
{
	lev	lvl = get_msg_lvl(level);

	void (Harl::*funPtr[4])() = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
	switch (lvl)
	{
		case DEBUG:
			(this->*funPtr[DEBUG])();
			break ;
		case INFO:
			(this->*funPtr[INFO])();
			break ;
		case WARNING:
			(this->*funPtr[WARNING])();
			break ;
		case ERROR:
			(this->*funPtr[ERROR])();
			break ;
		default:
			break ;
    }
}
