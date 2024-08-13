/* Copyright 2024 <mbernard>************************************************* */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <mbernard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 17:15:23 by mbernard          #+#    #+#             */
/*   Updated: 2024/08/13 09:59:39 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/FileSrc.hpp"

int main(int ac, char **av) {
    if (ac != 4) {
        std::cout << "Error: wrong number of arguments" << std::endl;
        return (1);
    }
    FileSrc file(av[1]);
    const std::string s1 = av[2];
    const std::string s2 = av[3];

    if (s1.empty() || s2.empty()) {
        std::cout << "Error: s1 or s2 is empty" << std::endl;
        return (1);
    }
    file.create_new_file(s1, s2);
    return (0);
}
