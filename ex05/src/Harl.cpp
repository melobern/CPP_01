/* Copyright 2024 <mbernard>************************************************* */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <mbernard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 09:17:56 by mbernard          #+#    #+#             */
/*   Updated: 2024/08/13 09:20:47 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

Harl::Harl(std::string filename) {
    this->filename = filename;
    this->file_replace = filename + ".replace";
    return;
}

Harl::~Harl() {
    return;
}

bool Harl::open_in(const std::string name) {
        this->file_src.open(name.c_str(), std::ios::in);
        if (!this->file_src.is_open()) {
            std::cout << "Error: "<< std::endl;
            std::perror(name.c_str());
            return (0);
        }
        return (1);
}

bool Harl::open_out(const std::string name) {
        this->file_dest.open(name.c_str(), std::ios::out);
        if (!this->file_dest.is_open()) {
            std::cout << "Error: "<< std::endl;
            std::perror(name.c_str());
            return (0);
        }
        return (1);
}
