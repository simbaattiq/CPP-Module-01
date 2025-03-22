/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-atti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 05:23:47 by mel-atti          #+#    #+#             */
/*   Updated: 2025/02/21 05:24:02 by mel-atti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <iostream>

class Weapon
{

private:
    std::string type;

public:
    Weapon( void );
    Weapon( std::string name );
    ~Weapon( void );

    const std::string&  getType( void ) const;
    void                setType( std::string new_type );
};

#endif
