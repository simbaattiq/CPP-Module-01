/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-atti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 01:41:09 by mel-atti          #+#    #+#             */
/*   Updated: 2025/02/25 02:09:55 by mel-atti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <iostream>
#include <fstream>
#include <string>

bool		open_input_file(std::ifstream& inFile, const std::string& filename);

bool		create_output_file(std::ofstream& outFile, const std::string& filename);

std::string	replace_in_line(const std::string& line, char s1, char s2);

void		process_file(std::ifstream& inFile, std::ofstream& outFile, char s1, char s2);

void		replace_in_file(const std::string& filename, char s1, char s2);

bool		check_char_args(char *av[]);

#endif
