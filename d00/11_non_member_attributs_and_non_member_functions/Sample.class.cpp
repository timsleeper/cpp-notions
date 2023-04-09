/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftadeu-d <ftadeu-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 19:26:09 by ftadeu-d          #+#    #+#             */
/*   Updated: 2023/04/09 19:28:25 by ftadeu-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

Sample::Sample(void) {

    std::cout << "Constructor called" << std::endl;
    Sample::_nbInst += 1;

    return;
}

Sample::~Sample(void) {

    std::cout << "Destructor called" << std::endl;
    Sample::_nbInst -= 1;

    return;
}

int     Sample::getNbInst(void) {

    return Sample::_nbInst;
}

int     Sample::_nbInst = 0;