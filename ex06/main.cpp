/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-atti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 02:36:11 by mel-atti          #+#    #+#             */
/*   Updated: 2025/02/25 02:39:59 by mel-atti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main( int ac, char *av[] )
{
    if (ac != 2)
    {
       	std::cout << "Error: Usage: " << av[0] << " <DEBUG/INFO/WARNING/ERROR..>\n";
        return (1);
    }
    Harl harl;
    harl.complain(av[1]);
    return (0);
}
