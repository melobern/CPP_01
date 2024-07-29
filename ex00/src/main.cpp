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

int main() {
    Zombie *zombie = new Zombie("Simple");
    zombie->announce();
    delete zombie;
    Zombie *glouglou = new Zombie("glouglou");
    glouglou->announce();
    delete glouglou;
    randomChump("randomChump ONE");
    zombie = newZombie("newZombie");
    zombie->announce();
    delete zombie;
    randomChump("randomChump TWO");
    return 0;
}
