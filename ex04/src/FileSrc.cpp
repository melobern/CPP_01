/* Copyright 2024 <mbernard>************************************************* */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileSrc.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <mbernard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 17:15:50 by mbernard          #+#    #+#             */
/*   Updated: 2024/08/12 16:18:28 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/FileSrc.hpp"

FileSrc::FileSrc(std::string filename) {
    this->filename = filename;
    this->file_replace = filename + ".replace";
    return;
}

FileSrc::~FileSrc() {
    return;
}

void FileSrc::open_in(const std::string name) {
        this->file_src.open(name.c_str(), std::ios::in);
        if (!this->file_src.is_open()) {
            std::cout << "Error: "<< std::endl;
            std::perror(name.c_str());
            exit(1);
        }
}

void FileSrc::open_out(const std::string name) {
        this->file_dest.open(name.c_str(), std::ios::out);
        if (!this->file_src.is_open()) {
            std::cout << "Error: "<< std::endl;
            std::perror(name.c_str());
            exit(1);
        }
}

void close_fds() {
    this->file_src.close();
    this->file_dest.close();
 }

// void FileSrc::replace(const std::string s1, const std::string s2) {
void create_new_file(const std::string s1, const std::string s2) {
    this->open_in(this->filename);
    this->open_out(this->file_replace);
    this->close_fds();
}
