/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-atti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 02:13:06 by mel-atti          #+#    #+#             */
/*   Updated: 2025/02/19 02:13:12 by mel-atti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main( void )
{
    Zombie *a2 = NULL;

    a2 = newZombie("Jack");
    delete a2;
    randomChump("Horrando");
    return (0);
}
