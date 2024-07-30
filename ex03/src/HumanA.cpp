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

HumanA::HumanA(const std::string name, const Weapon &weapon)
    : _name(name), _weapon(weapon) {
    std::cout << this->_name << " entered the realm." << std::endl;
    return;
}

HumanA::~HumanA(void) {
    std::cout << this->_name << " left the realm." << std::endl;
    return;
}

void HumanA::attack(void) const {
    std::cout << this->_name;
    std::cout << " attacks with their ";
    std::cout << this->_weapon.getType();
    std::cout << std::endl;
    return;
}


