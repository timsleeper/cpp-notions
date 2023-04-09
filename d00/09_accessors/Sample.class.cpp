/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftadeu-d <ftadeu-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 16:48:27 by ftadeu-d          #+#    #+#             */
/*   Updated: 2023/04/09 16:52:22 by ftadeu-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"


Sample::Sample(void){

    std::cout << "Constructor called" << std::endl;

    this->setFoo(0);
    std::cout << "this->getFoo(): " << this->getFoo() << std::endl;

    return;
}

Sample::~Sample(void) {

    std::cout << "Destructor called" << std::endl;
    return;
}

int     Sample::getFoo(void) const {

    return this->_foo;
}

void    Sample::setFoo(int v) {

    if (v >= 0)
        this->_foo = v;

    return;
}