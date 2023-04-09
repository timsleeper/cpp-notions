/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftadeu-d <ftadeu-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 19:33:04 by ftadeu-d          #+#    #+#             */
/*   Updated: 2023/04/09 19:36:16 by ftadeu-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

void    f0(void) {

    Sample instance;

    std::cout << "Number of instances: " << Sample::getNbInst() << std::endl;

    return;
}

void    f1(void) {

    Sample instance;

    std::cout << "Number of instances: " << Sample::getNbInst() << std::endl;
    f0();

    return;
}

int     main() {

    std::cout << "Number of instances: " << Sample::getNbInst() << std::endl;
    f1();
    std::cout << "Number of instances: " << Sample::getNbInst() << std::endl;

    return 0;
}