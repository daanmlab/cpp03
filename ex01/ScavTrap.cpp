/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabalm <dabalm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 14:11:31 by dabalm            #+#    #+#             */
/*   Updated: 2024/03/06 14:34:07 by dabalm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    this->_gateKeepMode = false;
    std::cout << "ScavTrap " << this->_name << " has been created." << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << this->_name << " has been destroyed." << std::endl;
}


void ScavTrap::guardGate()
{
    if (this->_gateKeepMode == true)
    {
        std::cout << "ScavTrap " << this->_name << " is already in Gate Keeper mode." << std::endl;
        return;
    }
    this->_gateKeepMode = true;
    std::cout << "ScavTrap " << this->_name << " has entered Gate Keeper mode." << std::endl;
}