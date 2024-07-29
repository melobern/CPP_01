/* Copyright 2024 <mbernard>************************************************* */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <mbernard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 17:17:15 by mbernard          #+#    #+#             */
/*   Updated: 2024/07/28 17:17:24 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX01_INCLUDES_ZOMBIE_HPP_
#define EX01_INCLUDES_ZOMBIE_HPP_

#include <limits.h>
#include <iostream>
#include <string>
#include <cstdlib>

class    Zombie {
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

#endif  // EX01_INCLUDES_ZOMBIE_HPP_
