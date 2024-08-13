/* Copyright 2024 <mbernard>************************************************* */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <mbernard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 09:17:56 by mbernard          #+#    #+#             */
/*   Updated: 2024/08/13 09:56:24 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

Harl::Harl() {
    return;
}

Harl::~Harl() {
    return;
}

bool Harl::complain(std::string level) {
    this->
}
bool Harl::debug(void) {
    std::cout << "\033[32m" << "[ DEBUG ]" << "\033[0m" << std::endl;
    std::cout << "I love my new security cameras offered by the Mecanists. ";
    std::cout << "Praise Karras and his eyes of metal !";
    std::cout << std::endl;
}

bool Harl::info(void) {
    std::cout << "\033[32m" << "[ INFO ]" << "\033[0m" << std::endl;
    std::cout << "I cannot believe replacing a camera would cost so much. ";
    std::cout << "You didn't install them properly. "
    std::cout << "If you had, they wouldn't break so fast and easily !";
    std::cout << std::endl;
}

bool Harl::warning(void) {
    std::cout << "\033[32m" << "[ WARNING ]" << "\033[0m" << std::endl;
    std::cout << "I think I deserve more cameras for my fortune's security. ";
    std::cout << "I already paid a lot not to leave in fear for my property !";
    std::cout << std::endl;
}

bool Harl::error(void) {
    std::cout << "\033[32m" << "[ ERROR ]" << "\033[0m" << std::endl;
    std::cout << "Oh no ! I've been robbed tonight ! ";
    std::cout << "This is unacceptable ! ";
    std::cout << "I want an audience with Father Karras immediately.";
    std::cout << std::endl;
}
