/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-atti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 02:41:25 by mel-atti          #+#    #+#             */
/*   Updated: 2025/02/19 02:41:52 by mel-atti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*
        Zombie* zombieHorde( int N, std::string name );
    It allocate N Zombie objects. Then, it initialize the
    Zombies, giving each one of them the name passed as parameter.
    The function returns a pointer to the first zombie.
*/

Zombie* zombieHorde( int N, std::string name )
{
    int i;
    Zombie *hord;

    hord = new Zombie[N];

    i = 0;
    while (i < N)
    {
        hord[i].set_name(name);
        hord[i].announce();
        i++;
    }
    return (hord);
}