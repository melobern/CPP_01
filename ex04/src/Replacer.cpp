/* Copyright 2024 <mbernard>************************************************* */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replacer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <mbernard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 16:38:50 by mbernard          #+#    #+#             */
/*   Updated: 2024/08/13 09:07:03 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Replacer.hpp"

Replacer::Replacer(const std::string s1, const std::string s2) {
    this->src = s1;
    this->dest = s2;
    return;
}

Replacer::~Replacer() {
    return;
}

void Replacer::replace(std::string content, std::ofstream &file_dest) {
    std::string resultString;
    std::size_t begin = 0;
    std::size_t pos = content.find(this->src);
    std::size_t src_length = this->src.length();

    if (pos == std::string::npos)
        std::cout << this->src << " not found" << std::endl;
    while (pos != std::string::npos) {
        resultString += content.substr(begin, pos - begin);
        resultString += this->dest;
        begin = pos + src_length;
        pos = content.find(this->src, begin);
    }
    resultString += content.substr(begin);
    file_dest << resultString;
}

