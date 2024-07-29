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
    Zombie(void);
    explicit Zombie(std::string name);
    ~Zombie(void);
    void announce(void) const;
    void setName(std::string name);
 private:
    std::string _name;
};
Zombie *zombieHorde(int N, std::string name);

#endif  // EX03_INCLUDES_WEAPON_HPP_
