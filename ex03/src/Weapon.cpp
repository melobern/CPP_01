/* Copyright 2024 <mbernard>************************************************* */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <mbernard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 17:16:18 by mbernard          #+#    #+#             */
/*   Updated: 2024/07/29 19:58:25 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Weapon.hpp"

Weapon::Weapon(void) {
    return;
}

Weapon::Weapon(std::string const weaponType) {
    this->_type = weaponType;
    return;
}

Weapon::~Weapon(void) {
    return;
}

void Weapon::setType(std::string type) {
    if (!type.empty())
        this->_type = type;
    return;
}

const std::string &Weapon::getType() const {
    return (this->_type);
}
