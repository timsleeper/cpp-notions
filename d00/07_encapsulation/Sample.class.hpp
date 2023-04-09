/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftadeu-d <ftadeu-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 13:43:42 by ftadeu-d          #+#    #+#             */
/*   Updated: 2023/04/09 13:45:17 by ftadeu-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H


class Sample {

public:

    int     publicFoo;

    Sample(void);
    ~Sample(void);

    void    publicBar(void) const;


private:

    int     _privateFoo;

    void    _privateBar(void) const;

};

#endif