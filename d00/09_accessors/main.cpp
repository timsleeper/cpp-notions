/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftadeu-d <ftadeu-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 16:53:19 by ftadeu-d          #+#    #+#             */
/*   Updated: 2023/04/09 16:54:37 by ftadeu-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

int     main() {

    Sample  instance;

    instance.setFoo(42);
    std::cout << "instance.getFoo(): " << instance.getFoo() << std::endl;
    instance.setFoo(-42);
    std::cout << "instance.getFoo(): " << instance.getFoo() << std::endl;

    return 0;
    
}