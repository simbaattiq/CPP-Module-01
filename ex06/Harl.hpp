/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-atti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 02:34:47 by mel-atti          #+#    #+#             */
/*   Updated: 2025/02/25 02:35:59 by mel-atti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef HARL_HPP
#define HARL_HPP

#include <string>
#include <iostream>

enum lev
{
    DEBUG,
    INFO,
    WARNING,
    ERROR,
    UNKNOWN
};

class Harl
{
private:
	void	debug( void );
	void	info( void );
	void	warning( void );
	void	error( void );
	lev	get_msg_lvl(std::string lvl);

public:
	Harl( void );
	~Harl( void );
	void	complain( std::string level );
};

#endif
