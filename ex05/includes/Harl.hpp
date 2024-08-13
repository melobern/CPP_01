/* Copyright 2024 <mbernard>************************************************* */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <mbernard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 09:17:56 by mbernard          #+#    #+#             */
/*   Updated: 2024/08/13 11:05:34 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX05_INCLUDES_HARL_HPP_
#define EX05_INCLUDES_HARL_HPP_

#include <iostream>
#include <string>

class Harl {
 public:
    Harl(void);
    ~Harl(void);
    void complain(std::string level);
 private:
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);
};
#endif  // EX05_INCLUDES_HARL_HPP_
