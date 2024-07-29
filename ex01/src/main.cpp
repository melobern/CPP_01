/* Copyright 2024 <mbernard>************************************************* */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <mbernard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 17:15:23 by mbernard          #+#    #+#             */
/*   Updated: 2024/07/28 17:17:28 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

int main(int ac, char **av) {
    if (ac != 3) {
        std::cout << "Usage: ./zombieHorde (number of zombies) (name)";
        std::cout << std::endl;
        return (1);
    }
    int N = std::atoi(av[1]);
    Zombie *horde = zombieHorde(N, av[2]);
    for (int i = 0; i < N; i++)
        horde[i].announce();
    delete [] horde;
    return (0);
}
