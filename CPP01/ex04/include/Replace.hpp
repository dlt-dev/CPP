/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelattr <jdelattr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/10 15:37:05 by jdelattr          #+#    #+#             */
/*   Updated: 2026/05/11 12:21:35 by jdelattr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
# define REPLACE_HPP

# include <string>
# include <fstream>
# include <iostream>


// Open the file and write/create in the new one
std::string newContent(std::string content, const std::string& s1,
            const std::string& s2);
            
// Called in createFile 
// take content of first file and replace occurences
void newFile(const std::string& filename, 
            const std::string& s1, const std::string& s2);

#endif
