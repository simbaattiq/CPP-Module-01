/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-atti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 02:41:03 by mel-atti          #+#    #+#             */
/*   Updated: 2025/02/19 02:41:12 by mel-atti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void ) {}

Zombie::~Zombie( void )
{
    std::cout << get_name() << ": Terminated!" << std::endl;
}

void    Zombie::announce( void )
{
    std::cout << get_name() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string Zombie::get_name( void )
{
    return (this->name);
}

void    Zombie::set_name( std::string name )
{
    this->name = name;
}
