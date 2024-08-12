/* Copyright 2024 <mbernard>************************************************* */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replacer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <mbernard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 16:38:48 by mbernard          #+#    #+#             */
/*   Updated: 2024/08/12 18:09:45 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX04_INCLUDES_REPLACER_HPP_
#define EX04_INCLUDES_REPLACER_HPP_

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

class Replacer {
  public:
    Replacer(std::string s1, std::string s2);
    ~Replacer();
    void replace(std::ifstream &file_src, std::ofstream &file_dest);
  private:
    std::string src;
    std::string dest;
    std::string all;
};
#endif  // EX04_INCLUDES_REPLACER_HPP_
