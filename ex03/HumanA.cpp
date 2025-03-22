/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-atti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 05:16:47 by mel-atti          #+#    #+#             */
/*   Updated: 2025/02/22 01:43:25 by mel-atti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon& weapon )
:  weapon(weapon), name(name) {}

HumanA::~HumanA( void ) {}

void	HumanA::setWeapon( const Weapon& weapon )
{
    this->weapon = weapon;
}

void	HumanA::setName( std::string name )
{
    this->name = name;
}

const std::string& HumanA::getName( void ) const
{
    return (this->name);
}

const std::string& HumanA::getWeapon( void ) const
{
    return (weapon.getType());
}

void HumanA::attack( void )
{
    std::cout << getName() << " attacks with their " << getWeapon() << std::endl;
}
