/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-atti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 01:40:21 by mel-atti          #+#    #+#             */
/*   Updated: 2025/02/25 02:09:33 by mel-atti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int main(int argc, char *av[]) 
{
    std::string filename;
    char s1;
    char s2;

    if (argc != 4) 
    {
        std::cerr << "Error Usage: " << av[0] << " <filename> <s1> <s2>" << std::endl;
        std::cerr << "While <s1> <s2> Are Two Different Characters" << std::endl;
        return (1);
    }
    if (check_char_args(av))
        return (1);
    filename = av[1];
    s1 = av[2][0];
    s2 = av[3][0];
    replace_in_file(filename, s1, s2);

    return (0);
}
