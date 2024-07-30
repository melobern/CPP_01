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


#include "../includes/HumanA.hpp"
#include "../includes/HumanB.hpp"

int main() { {
        Weapon club = Weapon("crude spiked club");
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    } {
        Weapon club = Weapon("crude spiked club");
        HumanB jim("Jim");
        jim.attack();
        jim.setWeapon(club);
        jim.attack();
        Weapon redClub = Weapon("red club");
        jim.setWeapon(redClub);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
    }
    return 0;
}
