/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-atti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 01:40:52 by mel-atti          #+#    #+#             */
/*   Updated: 2025/02/25 02:10:24 by mel-atti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

bool check_char_args(char *av[])
{
    if (av[2][0] == av[3][0])
    {
        std::cerr << "Error: Provide different <s1> <s2> characters" << std::endl;
        return (true);
    }
    if (av[2][1] || av[3][1])
    {
        std::cerr << "Error: Provide only one character for <s1> <s2>" << std::endl;
        return (true);
    }
    return (false);
}

void replace_in_file(const std::string& filename, char s1, char s2)
{
    std::ifstream inFile;
    if (!open_input_file(inFile, filename)) 
    {
        return;
    }

    std::ofstream outFile;
    if (!create_output_file(outFile, filename)) 
    {
        inFile.close();
        return;
    }
    process_file(inFile, outFile, s1, s2);
    inFile.close();
    outFile.close();
    std::cout << "Replacement complete.!!" << std::endl;
}

bool open_input_file(std::ifstream& inFile, const std::string& filename)
{
    inFile.open(filename.c_str());
    if (!inFile.is_open())
    {
        std::cerr << "Error: Could not open file " << filename << std::endl;
        return (false);
    }
    return (true);
}

bool create_output_file(std::ofstream& outFile, const std::string& filename)
{
    std::string outputFilename = filename + ".replace";
    outFile.open(outputFilename.c_str());
    if (!outFile.is_open()) 
    {
        std::cerr << "Error: Could not create file " << outputFilename << std::endl;
        return (false);
    }
    return (true);
}

void process_file(std::ifstream& inFile, std::ofstream& outFile, char s1, char s2)
{
    std::string line;
    while (std::getline(inFile, line))
    {
        std::string newLine = replace_in_line(line, s1, s2);
        outFile << newLine << std::endl;
    }
}

std::string replace_in_line(const std::string& line, char s1, char s2)
{
    std::string newLine;
    size_t pos = 0;
    size_t prevPos = 0;

    while ((pos = line.find(s1, prevPos)) != std::string::npos)
    {
        newLine += line.substr(prevPos, pos - prevPos);
        newLine += s2;
        prevPos = pos + 1;
    }

    newLine += line.substr(prevPos);
    return (newLine);
}
