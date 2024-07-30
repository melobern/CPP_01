/* Copyright 2024 <mbernard>************************************************* */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <mbernard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 17:17:15 by mbernard          #+#    #+#             */
/*   Updated: 2024/07/29 20:01:52 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX03_INCLUDES_HUMANA_HPP_
#define EX03_INCLUDES_HUMANA_HPP_

#include <limits.h>
#include <iostream>
#include <string>
#include <cstdlib>
#include "../includes/Weapon.hpp"

class    HumanA {
 public:
    explicit HumanA(std::string name, const Weapon &weapon);
    ~HumanA(void);
    void attack(void) const;
 private:
    const std::string _name;
    const Weapon      &_weapon;
};

#endif  // EX03_INCLUDES_HUMANA_HPP_
