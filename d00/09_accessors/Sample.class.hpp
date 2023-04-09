/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftadeu-d <ftadeu-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 16:44:01 by ftadeu-d          #+#    #+#             */
/*   Updated: 2023/04/09 16:51:31 by ftadeu-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H


class Sample {

public:

    Sample(void);
    ~Sample(void);

    int     getFoo(void) const;
    void    setFoo(int v);

private:

    int     _foo;

};

#endif