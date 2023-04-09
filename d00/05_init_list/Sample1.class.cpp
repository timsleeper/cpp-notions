/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample1.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftadeu-d <ftadeu-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 13:10:57 by ftadeu-d          #+#    #+#             */
/*   Updated: 2023/04/09 13:16:11 by ftadeu-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample1.class.hpp"

Sample1::Sample1(char p1, int p2, float p3) {

    std::cout << "Constructor called" << std::endl;

    this->a1 = p1;
    std::cout << "this->a1 = " << this->a1 << std::endl;

    this->a2 = p2;
    std::cout << "this->a2 = " << this->a2 << std::endl;

    this->a3 = p3;
    std::cout << "this->a3 = " << this->a3 << std::endl;

    return;
}

Sample1::~Sample1(void){

    std::cout << "Destructor called" << std::endl;
    return;
}