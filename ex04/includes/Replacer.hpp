/* Copyright 2024 <mbernard>************************************************* */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replacer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <mbernard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 16:38:48 by mbernard          #+#    #+#             */
/*   Updated: 2024/08/12 16:42:38 by mbernard         ###   ########.fr       */
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
    void replace(std::string s1, std::string s2);
  private:
    std::string src;
    std::string dest;
    std::string all;
    void replace(std::string s1, std::string s2);
};
#endif  // EX04_INCLUDES_REPLACER_HPP_