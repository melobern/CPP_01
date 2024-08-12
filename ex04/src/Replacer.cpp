/* Copyright 2024 <mbernard>************************************************* */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replacer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <mbernard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 16:38:50 by mbernard          #+#    #+#             */
/*   Updated: 2024/08/12 16:44:34 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Replacer.hpp"

Replacer::Replacer(const std::string s1, const std:string s2) {
    this->src = s1;
    this->dest = s2;
    return;
}

Replacer::~Replacer() {
    return;
}

void Replacer::replace(const std::string s1, const std::string s2) {
}
