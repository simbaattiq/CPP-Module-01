/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-atti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 05:18:34 by mel-atti          #+#    #+#             */
/*   Updated: 2025/02/22 01:43:51 by mel-atti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
private:
    Weapon          &weapon;
    std::string     name;

public:
    HumanA(std::string name, Weapon& weapon);
    ~HumanA( void );
    void attack( void );

    void setWeapon( const Weapon& weapon );
    void setName( std::string name );

    const std::string& getName( void ) const;
    const std::string& getWeapon( void ) const;
};

#endif
