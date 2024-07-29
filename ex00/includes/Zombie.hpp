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

#ifndef EX00_INCLUDES_ZOMBIE_HPP_
#define EX00_INCLUDES_ZOMBIE_HPP_

#include <iostream>
#include <string>

class    Zombie {
 public:
    explicit Zombie(std::string name);
    ~Zombie(void);
    void announce(void) const;

 private:
    std::string _name;
};
Zombie *newZombie(std::string name);
void   randomChump(std::string name);
#endif  // EX00_INCLUDES_ZOMBIE_HPP_
