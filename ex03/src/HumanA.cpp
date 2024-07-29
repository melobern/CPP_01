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

#include "../includes/HumanA.hpp"

Zombie::Zombie(void) {
    std::cout << "An unamed zombie appeared" << std::endl;
    return;
}

Zombie::Zombie(std::string name) {
    this->_name = name;
    std::cout << this->_name << " appeared" << std::endl;
    return;
}

Zombie::~Zombie() {
    std::cout << this->_name << " is dead" << std::endl;
    return;
}

void Zombie::announce(void) const {
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
    return;
}

void Zombie::setName(std::string name) {
    this->_name = name;
    return;
}
