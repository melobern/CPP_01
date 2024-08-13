/* Copyright 2024 <mbernard>************************************************* */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <mbernard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 17:15:23 by mbernard          #+#    #+#             */
/*   Updated: 2024/08/12 16:15:18 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/FileSrc.hpp"

/*
    Exercise 04: Sed is for losers
    Exercise : 04
    Sed is for losers
    Turn-in directory : ex04/
    Files to turn in : Makefile, main.cpp, *.cpp, *.{h, hpp}
    Forbidden functions : std::string::replace
    Create a program that takes three parameters in the following order: a filename and
    two strings, s1 and s2.
    It will open the file <filename> and copies its content into a new file
    <filename>.replace, replacing every occurrence of s1 with s2.
    Using C file manipulation functions is forbidden and will be considered cheating. All
    the member functions of the class std::string are allowed, except replace. Use them
    wisely!
    Of course, handle unexpected inputs and errors. You have to create and turn in your
    own tests to ensure your program works as expected.
 */
int main(int ac, char **av) {
    if (ac != 4) {
        std::cout << "Error: wrong number of arguments" << std::endl;
        return 1;
    }
    FileSrc file(av[1]);
//    const std::string filename = av[1];
    const std::string s1 = av[2];
    const std::string s2 = av[3];

    if (s1.empty() || s2.empty()) {
        std::cout << "Error: s1 or s2 is empty" << std::endl;
        return 1;
    }
    file.create_new_file(s1, s2);
//    file.open_file(av[1], std::ios::in);
//    file.replace(av[2], av[3]);
    return 0;
}
