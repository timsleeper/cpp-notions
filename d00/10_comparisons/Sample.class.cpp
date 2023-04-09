/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftadeu-d <ftadeu-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 17:00:19 by ftadeu-d          #+#    #+#             */
/*   Updated: 2023/04/09 17:04:29 by ftadeu-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

Sample::Sample(int v) : _foo(v) {

    std::cout << "Constructor called" << std::endl;
    return;
}

Sample::~Sample(void) {
    
    std::cout << "Destructor called" << std::endl;
    return;
}

int     Sample::getFoo(void) const {

    return this->_foo;
}

int     Sample::compare(Sample * other) const {

    if(this->_foo < other->getFoo())
        return -1;
    else if (this->_foo > other->getFoo())
        return 1;

    return 0;
}