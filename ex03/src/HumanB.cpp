/* Copyright 2024 <mbernard>************************************************* */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <mbernard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 17:15:44 by mbernard          #+#    #+#             */
/*   Updated: 2024/07/29 19:58:53 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanB.hpp"

Zombie *zombieHorde(int N, std::string name) {
    if (N < 1)
        return NULL;
    Zombie *horde = new Zombie[N];
    for (int i = 0; i < N; i++) {
        horde[i].setName(name);
        std::cout << name << " was given a name" << std::endl;
    }
    return (horde);
}
