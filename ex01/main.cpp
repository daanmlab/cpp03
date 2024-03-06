/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabalm <dabalm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:57:21 by dabalm            #+#    #+#             */
/*   Updated: 2024/03/06 14:35:08 by dabalm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ClapTrap claptrap("jabediah");
    claptrap.attack("enemy");
    claptrap.takeDamage(5);
    claptrap.beRepaired(5);
    ScavTrap scavtrap("bob");
    scavtrap.attack("enemy");
    scavtrap.takeDamage(5);
    scavtrap.beRepaired(5);
    scavtrap.guardGate();
    scavtrap.guardGate();
    return 0;
}