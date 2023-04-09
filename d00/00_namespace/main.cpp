/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftadeu-d <ftadeu-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 20:45:15 by ftadeu-d          #+#    #+#             */
/*   Updated: 2023/04/08 21:01:55 by ftadeu-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int     gl_var = 0;
int     f( void ) { return 2; }



namespace Foo {

    int     gl_var = 3;
    int     f( void ) { return 4; }

}

namespace Bar {

    int     gl_var = 5;
    int     f( void ) { return 6; }

}

namespace Muf = Bar;

int         main( void ) {

    printf( "gl_var:        [%d]\n", gl_var );
    printf( "f():           [%d]\n\n", f() );

    printf( "Foo::gl_var:        [%d]\n", Foo::gl_var );
    printf( "Foo::f():           [%d]\n\n", Foo::f() );

    printf( "Bar::gl_var:        [%d]\n", Bar::gl_var );
    printf( "Bar::f():           [%d]\n\n", Bar::f() );

    printf( "::gl_var:        [%d]\n", ::gl_var );
    printf( "::f():           [%d]\n\n", ::f() );
    
    return 0;
}