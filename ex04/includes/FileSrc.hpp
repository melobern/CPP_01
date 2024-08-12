/* Copyright 2024 <mbernard>************************************************* */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileSrc.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <mbernard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 17:17:15 by mbernard          #+#    #+#             */
/*   Updated: 2024/08/12 15:15:59 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX04_INCLUDES_FILESRC_HPP_
#define EX04_INCLUDES_FILESRC_HPP_

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

class FileSrc {
  public:
    FileSrc(std::string filename);
    ~FileSrc();
    void create_new_file(std::string s1, std::string s2);
  private:
    std::string filename;
    std::string file_replace;
    std::ifstream file_src;
    std::ofstream file_dest;
    void open_in(std::string name);
    void open_out(std::string name);
    void replace(std::string s1, std::string s2);
};
#endif  // EX04_INCLUDES_FILESRC_HPP_
