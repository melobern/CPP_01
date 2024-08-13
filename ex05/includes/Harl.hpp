/* Copyright 2024 <mbernard>************************************************* */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <mbernard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 09:17:56 by mbernard          #+#    #+#             */
/*   Updated: 2024/08/13 09:19:41 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX05_INCLUDES_HARL_HPP_
#define EX05_INCLUDES_HARL_HPP_

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cstdlib>
#include "../includes/Replacer.hpp"

class Harl {
 public:
    explicit Harl(std::string filename);
    ~Harl();
    void create_new_file(std::string s1, std::string s2);
 private:
    std::string filename;
    std::string file_replace;
    std::ifstream file_src;
    std::ofstream file_dest;
    bool open_in(std::string name);
    bool open_out(std::string name);
    void replace(std::string s1, std::string s2);
};
#endif  // EX05_INCLUDES_HARL_HPP_
