/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftadeu-d <ftadeu-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 13:53:57 by ftadeu-d          #+#    #+#             */
/*   Updated: 2023/04/09 14:02:44 by ftadeu-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"


Sample::Sample(void) {

    std::cout << "Constructor called" << std::endl;

    this->publicFoo = 0;
    std::cout << "this->publicFoo: " << this->publicFoo << std::endl;
    this->_privateFoo = 0;
    std::cout << "this->_privateFoo: " << this->_privateFoo << std::endl;

    this->publicBar();
    this->_privateBar();

    return;
}

Sample::~Sample(void) {

    std::cout << "Destructor called" << std::endl;
    return;
}

void    Sample::publicBar(void) const {

    std::cout << "Member functionn publicBar called" << std::endl;
    return;
}

void    Sample::_privateBar(void) const {

    std::cout << "Member function _privateBar called" << std::endl;
    return;
}