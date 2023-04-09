/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stdio.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftadeu-d <ftadeu-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 21:05:32 by ftadeu-d          #+#    #+#             */
/*   Updated: 2023/04/08 21:13:16 by ftadeu-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int     main( void ){

    char buff[512];

    std::cout << "Hello world !" << std::endl;

    std::cout << "Input a word: ";
    std::cin >> buff;
    std::cout << "You entered: [" << buff << "]" << std::endl;

    return 0;
}