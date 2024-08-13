/* Copyright 2024 <mbernard>************************************************* */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <mbernard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 09:17:56 by mbernard          #+#    #+#             */
/*   Updated: 2024/08/13 11:27:12 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <cstdlib>
#include "../includes/Harl.hpp"

int main(int ac, char **av) {
    Harl harl;

    if (ac != 2)
        std::cout << "Usage : ./harlFilter [argument]" << std::endl;
    else
        harl.complain(av[1]);
    return 0;
}
