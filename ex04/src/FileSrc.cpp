/* Copyright 2024 <mbernard>************************************************* */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <mbernard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 17:15:50 by mbernard          #+#    #+#             */
/*   Updated: 2024/07/29 19:58:40 by mbernard         ###   ########.fr       */
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

static bool is_regular_file(const char *path)
{
    struct stat path_stat;

    stat(path, &path_stat);
    return (S_ISREG(path_stat.st_mode));
}

void FileSrc::open_file(const std::string name, const std::ios_base::openmode mode) {

        if (!is_regular_file(name.c_str())) {
            std::cout << "Error:"<< std::endl;
            std::cout << name << " is not a regular file."<< std::endl;
            exit(1);
        }
        this->file_src.open(name.c_str(), mode);
        if (!this->file_src.is_open()) {
            std::cout << "Error: "<< std::endl;
            std::perror(name.c_str());
            exit(1);
        }
}

// void FileSrc::replace(const std::string s1, const std::string s2) {
// }

