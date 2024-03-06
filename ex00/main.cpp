/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabalm <dabalm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:57:21 by dabalm            #+#    #+#             */
/*   Updated: 2024/03/06 14:06:06 by dabalm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap claptrap("Claptrap");
    claptrap.attack("enemy");
    claptrap.takeDamage(5);
    claptrap.takeDamage(5);
    claptrap.takeDamage(5);
    claptrap.beRepaired(5);
    return 0;
}