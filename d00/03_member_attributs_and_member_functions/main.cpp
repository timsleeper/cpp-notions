/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftadeu-d <ftadeu-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 21:41:09 by ftadeu-d          #+#    #+#             */
/*   Updated: 2023/04/08 21:42:04 by ftadeu-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

int     main(){

    Sample instance;

    instance.foo = 42;
    std::cout << "instance.foo:" << instance.foo << std::endl;

    instance.bar();

    return 0;
}