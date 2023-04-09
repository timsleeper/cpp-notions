/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample1.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftadeu-d <ftadeu-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 14:24:32 by ftadeu-d          #+#    #+#             */
/*   Updated: 2023/04/09 14:25:50 by ftadeu-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample1.class.hpp"

Sample1::Sample1(void){

    std::cout << "Constructor called" << std::endl;
    return;
}

Sample1::~Sample1(void){

    std::cout << "Destructor called" << std::endl;
    return;
}

void    Sample1::bar(void){

    std::cout << "Member function bar called" << std::endl;
    return;
}