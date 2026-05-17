/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelattr <jdelattr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 12:15:24 by jdelattr          #+#    #+#             */
/*   Updated: 2026/05/11 13:51:31 by jdelattr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <string>
# include <fstream>
# include <iostream>

#define ANSI_BLACK		"\033[30m"
#define ANSI_BBLACK		"\033[90m"

#define ANSI_RED		"\033[31m"
#define ANSI_BRED		"\033[91m"

#define ANSI_YELLOW		"\033[33m"
#define ANSI_BYELLOW	"\033[93m"

#define ANSI_CYAN		"\033[36m"
#define ANSI_BCYAN		"\033[96m"

#define ANSI_PURPLE		"\033[35m"
#define ANSI_BPURPLE	"\033[95m"

#define ANSI_BOLD		"\033[1m"
#define ANSI_ITALIC		"\033[3m"
#define ANSI_RESET		"\033[0m"

class Harl
{
    private:
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
        
    public:
        Harl();
        ~Harl();
        void complain(std::string level);
};

typedef struct s_HarlLevel
{
	std::string	name;
	void		(Harl::*func)();
}	t_HarlLevel;

#endif
