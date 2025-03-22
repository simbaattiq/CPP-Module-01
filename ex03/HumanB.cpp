/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-atti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 05:19:28 by mel-atti          #+#    #+#             */
/*   Updated: 2025/02/22 01:44:46 by mel-atti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name ) : weapon(NULL), name(name) {}

HumanB::~HumanB( void ) {}

void	HumanB::setWeapon( Weapon& weapon )
{
    this->weapon = &weapon;
}

void	HumanB::setName( std::string name )
{
    this->name = name;
}

const std::string& HumanB::getName( void ) const
{
    return (this->name);
}

const std::string& HumanB::getWeapon( void ) const
{
    return (weapon->getType());
}

void HumanB::attack( void )
{
    std::cout << getName() << " attacks with their " << getWeapon() << std::endl;
}
