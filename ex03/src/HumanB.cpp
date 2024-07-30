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

HumanB::HumanB(const std::string name)
    : _name(name), _weapon(0) {
    std::cout << this->_name << " entered the realm." << std::endl;
    return;
}

HumanB::~HumanB(void) {
    std::cout << this->_name << " left the realm." << std::endl;
    return;
}

void HumanB::attack(void) const {
    if (this->_weapon == 0) {
        std::cout << this->_name;
        std::cout << " tried to attack without success.";
        std::cout << " He has no weapon.";
        std::cout << std::endl;
        return;
    }
    std::cout << this->_name;
    std::cout << " attacks with their ";
    std::cout << this->_weapon->getType();
    std::cout << std::endl;
    return;
}

void HumanB::setWeapon(Weapon &weapon) {
    this->_weapon = &weapon;
    return;
}
