/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample2.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftadeu-d <ftadeu-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 14:26:08 by ftadeu-d          #+#    #+#             */
/*   Updated: 2023/04/09 14:26:20 by ftadeu-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample2.class.hpp"

Sample2::Sample2(void){

    std::cout << "Constructor called" << std::endl;
    return;
}

Sample2::~Sample2(void){

    std::cout << "Destructor called" << std::endl;
    return;
}

void    Sample2::bar(void){

    std::cout << "Member function bar called" << std::endl;
    return;
}