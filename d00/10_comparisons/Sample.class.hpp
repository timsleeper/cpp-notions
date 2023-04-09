/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftadeu-d <ftadeu-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 16:58:22 by ftadeu-d          #+#    #+#             */
/*   Updated: 2023/04/09 17:03:21 by ftadeu-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class Sample {

public:

    Sample(int v);
    ~Sample(void);

    int     getFoo(void) const;
    int     compare(Sample * other) const;

private:

    int     _foo;

};

#endif
