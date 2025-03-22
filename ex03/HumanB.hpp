/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-atti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 05:20:53 by mel-atti          #+#    #+#             */
/*   Updated: 2025/02/22 01:45:10 by mel-atti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
private:
    Weapon          *weapon;
    std::string     name;

public:
    HumanB( std::string name );
    ~HumanB( void );
    void attack( void );

    void setWeapon( Weapon& weapon );
    void setName( std::string name );

    const std::string& getName( void ) const;
    const std::string& getWeapon( void ) const;
};

#endif
