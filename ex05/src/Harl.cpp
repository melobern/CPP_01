/* Copyright 2024 <mbernard>************************************************* */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <mbernard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 09:17:56 by mbernard          #+#    #+#             */
/*   Updated: 2024/08/13 11:03:13 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

Harl::Harl() {
    return;
}

Harl::~Harl() {
    return;
}

void Harl::complain(std::string level) {
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int levelNum = 0;
    void (Harl::*functions[4])(void) = {&Harl::debug,
                                        &Harl::info,
                                        &Harl::warning,
                                        &Harl::error};

    while (levels[levelNum] != level && levelNum < 4)
        levelNum++;
    if (levelNum == 4) {
        std::cout << "Program error ; not a valid argument for Harl";
        std::cout << std::endl;
        return;
    }
    (this->*(functions[levelNum]))();
}
void Harl::debug(void) {
    std::cout << "\033[1;32m" << "[ DEBUG ]" << "\033[0m" << std::endl;
    std::cout << "I love my new security cameras offered by the Mecanists. ";
    std::cout << "Praise Karras and his eyes of metal !";
    std::cout << std::endl;
}

void Harl::info(void) {
    std::cout << "\033[1;93m" << "[ INFO ]" << "\033[0m" << std::endl;
    std::cout << "I cannot believe replacing a camera would cost so much. ";
    std::cout << "You didn't install them properly. ";
    std::cout << "If you had, they wouldn't break so fast and easily !";
    std::cout << std::endl;
}

void Harl::warning(void) {
    std::cout << "\033[1;35m" << "[ WARNING ]" << "\033[0m" << std::endl;
    std::cout << "I think I deserve more cameras for my fortune's security. ";
    std::cout << "I already paid a lot not to leave in fear for my property !";
    std::cout << std::endl;
}

void Harl::error(void) {
    std::cout << "\033[1;31m" << "[ ERROR ]" << "\033[0m" << std::endl;
    std::cout << "Oh no ! I've been robbed tonight ! ";
    std::cout << "This is unacceptable ! ";
    std::cout << "I want an audience with Father Karras immediately.";
    std::cout << std::endl;
}
