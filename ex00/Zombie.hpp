/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-atti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 02:14:36 by mel-atti          #+#    #+#             */
/*   Updated: 2025/02/19 02:14:49 by mel-atti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>
#include <string>

class Zombie
{
private:
    std::string name;

public:
    Zombie();
    ~Zombie();

    void        announce(void);
    std::string get_name(void);
    void        set_name(std::string name);
};

Zombie*     newZombie( std::string name );
void        randomChump( std::string name );

#endif
