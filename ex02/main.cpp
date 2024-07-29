/* Copyright 2024 <mbernard>************************************************* */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <mbernard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 17:15:23 by mbernard          #+#    #+#             */
/*   Updated: 2024/07/28 17:17:28 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>


int main(void) {
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "Address of the string:\t" << &str << std::endl;
    std::cout << "Address of the stringPTR:\t" << stringPTR << std::endl;
    std::cout << "Address of the stringREF:\t" << &stringREF << std::endl;
    std::cout << "Value of the string:\t" << str << std::endl;
    std::cout << "Value of the stringPTR:\t" << *stringPTR << std::endl;
    std::cout << "Value of the stringREF:\t" << stringREF << std::endl;
    return (0);
}
