/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozer <mozer@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 10:52:07 by mozer             #+#    #+#             */
/*   Updated: 2023/05/12 15:13:04 by mozer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int main(){
    Bureaucrat bro("Burak", 30);
    Bureaucrat muho("Muharrem", 70);
    Form df;

    Form f1("Work 1", 50, 60);

    muho.signedForm(f1);
    return 0;
}