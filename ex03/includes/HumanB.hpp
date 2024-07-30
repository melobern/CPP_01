/* Copyright 2024 <mbernard>************************************************* */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <mbernard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 17:17:15 by mbernard          #+#    #+#             */
/*   Updated: 2024/07/29 20:01:52 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX03_INCLUDES_HUMANB_HPP_
#define EX03_INCLUDES_HUMANB_HPP_

#include <limits.h>
#include <iostream>
#include <string>
#include <cstdlib>
#include "../includes/Weapon.hpp"

class    HumanB {
 public:
    explicit HumanB(std::string name);
    ~HumanB(void);
    void attack(void) const;
    void setWeapon(Weapon &weapon);
 private:
    std::string const _name;
    Weapon            *_weapon;
};

#endif  // EX03_INCLUDES_HUMANB_HPP_
