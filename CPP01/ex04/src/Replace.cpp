/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelattr <jdelattr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/10 15:37:10 by jdelattr          #+#    #+#             */
/*   Updated: 2026/05/11 13:45:25 by jdelattr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <string>
# include <fstream>
# include <iostream>
# include "Replace.hpp"

std::string newContent(std::string content, const std::string& s1, const std::string& s2)
{
    size_t pos = 0;
    // std::string::npos if not found
    // while find() find something to replace
    while ((pos = content.find(s1, pos)) != std::string::npos)
    {
        content.erase(pos, s1.length());
        content.insert(pos, s2);
        pos += s2.length();
    }
    return (content);
}

void newFile(const std::string& filename, const std::string& s1, const std::string& s2)
{
    //.c_str() convert in Cstring (for old cpp version)
    //return tab of char with (\0) at the end
    std::ifstream infile(filename.c_str());
    
    if (!infile.is_open())
    {
        std::cerr << "Error: "
                    << std::endl
                    << "Cannot open file " 
                    << filename 
                    << std::endl;
        return ;
    }
    
    std::string content;
    std::string line;
    
    while (std::getline(infile, line))
    {
        content += line;
        content += "\n";
    }
    
    infile.close();

    content = newContent(content, s1, s2);

    std::string outfileName = filename + ".replace";
    std::ofstream outfile(outfileName.c_str());
    
    if (!outfile.is_open())
    {
        std::cerr << "Error: cannot create file " << outfileName << std::endl;
        return ;
    }
    outfile << content;
    outfile.close();
}
