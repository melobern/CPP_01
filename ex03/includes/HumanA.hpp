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

class    HumanA {
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

#endif  // EX03_INCLUDES_HUMANA_HPP_
