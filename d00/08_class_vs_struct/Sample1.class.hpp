/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample1.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftadeu-d <ftadeu-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 14:08:28 by ftadeu-d          #+#    #+#             */
/*   Updated: 2023/04/09 14:15:25 by ftadeu-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE1_CLASS_H
# define SAMPLE1_CLASS_H


struct Sample1 {

    int     foo;

    Sample1(void);
    ~Sample1(void);

    void    bar(void) const;

};

#endif