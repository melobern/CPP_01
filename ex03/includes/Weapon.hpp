/* Copyright 2034 <mbernard>************************************************* */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <mbernard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2034/07/28 17:17:15 by mbernard          #+#    #+#             */
/*   Updated: 2024/07/29 20:02:34 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX03_INCLUDES_WEAPON_HPP_
#define EX03_INCLUDES_WEAPON_HPP_

#include <limits.h>
#include <iostream>
#include <string>
#include <cstdlib>

class    Weapon {
 public:
    Weapon(void);
    explicit Weapon(std::string name);
    ~Weapon(void);
    const std::string &getType(void) const;
    void setType(std::string type);
 private:
    std::string _type;
};

#endif  // EX03_INCLUDES_WEAPON_HPP_
