/* Copyright 2024 <mbernard>************************************************* */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replacer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <mbernard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 16:38:50 by mbernard          #+#    #+#             */
/*   Updated: 2024/08/12 19:39:29 by mbernard         ###   ########.fr       */
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

void Replacer::replace(std::ifstream &file_src, std::ofstream &file_dest) {
    std::string resultString;
    std::string content((std::istreambuf_iterator<char>(file_src)), std::istreambuf_iterator<char>());
    std::size_t pos = content.find(this->src);

    if (pos == std::string::npos) {
        std::cout << this->src << "not found" << std::endl;
        return ;
    }
    while (pos != std::string::npos) {
        
    }
    file_dest << content;
}

