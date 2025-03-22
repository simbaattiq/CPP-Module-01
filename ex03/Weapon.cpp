/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-atti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 05:22:36 by mel-atti          #+#    #+#             */
/*   Updated: 2025/02/22 01:48:32 by mel-atti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string name) : type(name) {}

Weapon::Weapon( void ) : type(NULL) {}

Weapon::~Weapon( void ) {}

void	Weapon::setType(std::string new_type)
{
    type = new_type;
}

const std::string& Weapon::getType( void ) const
{
    return (this->type);
}
