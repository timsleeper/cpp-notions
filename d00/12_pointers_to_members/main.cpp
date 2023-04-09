/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftadeu-d <ftadeu-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 20:18:00 by ftadeu-d          #+#    #+#             */
/*   Updated: 2023/04/09 20:21:59 by ftadeu-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"


int     main() {


    Sample      instance;
    Sample *    instancep = &instance;

    int         Sample::*p = NULL;
    void        (Sample::*f)(void) const;

    p = &Sample::foo;

    std::cout << "Value of member foo: " << instance.foo << std::endl;
    instance.*p = 21;
    std::cout << "Value of member foo: " << instance.foo << std::endl;
    instancep->*p = 42;
    std::cout << "Value of member foo: " << instance.foo << std::endl;

    f = &Sample::bar;

    (instance.*f)();
    (instancep->*f)();

    return 0;
}