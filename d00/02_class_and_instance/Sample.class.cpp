/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftadeu-d <ftadeu-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 21:18:08 by ftadeu-d          #+#    #+#             */
/*   Updated: 2023/04/08 21:20:40 by ftadeu-d         ###   ########.fr       */
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
