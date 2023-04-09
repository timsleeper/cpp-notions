/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftadeu-d <ftadeu-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 21:37:04 by ftadeu-d          #+#    #+#             */
/*   Updated: 2023/04/08 21:40:56 by ftadeu-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

Sample::Sample(void){

    std::cout << "Constructor called" << std::endl;
    return;
}

Sample::~Sample(void){

    std::cout << "Destructor called" << std::endl;
    return;
}

void    Sample::bar(void){

    std::cout << "Member function bar called" << std::endl;
    return;
}