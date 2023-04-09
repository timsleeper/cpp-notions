/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftadeu-d <ftadeu-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 14:00:13 by ftadeu-d          #+#    #+#             */
/*   Updated: 2023/04/09 14:02:17 by ftadeu-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

int     main() {

    Sample  instance;

    instance.publicFoo = 42;
    std::cout << "instance.publicFoo: " << instance.publicFoo << std::endl;
    // instance._privateFoo = 42;
    // std::cout << "instance._privateFoo: " << instance._privateFoo << std::endl;

    instance.publicBar();
    // instance._privateBar();

    return 0;
}