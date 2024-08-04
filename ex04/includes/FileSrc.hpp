/* Copyright 2024 <mbernard>************************************************* */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <mbernard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 17:17:15 by mbernard          #+#    #+#             */
/*   Updated: 2024/07/29 20:01:52 by mbernard         ###   ########.fr       */
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
    void open_file(std::string name, std::ios_base::openmode mode);
    void replace(std::string s1, std::string s2);
  private:
    std::string filename;
    std::string file_replace;
    std::fstream file_src;
};
#endif  // EX04_INCLUDES_FILESRC_HPP_
