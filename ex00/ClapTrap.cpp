/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabalm <dabalm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 13:16:37 by dabalm            #+#    #+#             */
/*   Updated: 2024/03/06 14:05:47 by dabalm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor called" << std::endl;
}

void ClapTrap::attack(std::string const & target)
{
    if (this->_energyPoints <= 0)
    {
        std::cout << "ClapTrap has no energy points left!" << std::endl;
        return;
    }
    if (this->_hitPoints <= 0)
    {
        std::cout << "ClapTrap has no health points left!" << std::endl;
        return;
    }
    if (this->_attackDamage <= 0)
    {
        std::cout << "ClapTrap has no attack damage!" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << target << " has been attacked for " << this->_attackDamage << " points of damage!" << std::endl;
    this->_energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hitPoints <= 0)
    {
        std::cout << "ClapTrap is already death!" << std::endl;
        return;
    }
    this->_hitPoints -= amount;
    std::cout << "ClapTrap has taken " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_hitPoints <= 0)
    {
        std::cout << "ClapTrap has no health points left!" << std::endl;
        return;
    }
    if (this->_energyPoints <= 0)
    {
        std::cout << "ClapTrap has no energy points left!" << std::endl;
        return;
    }
    this->_hitPoints += amount;
    std::cout << "ClapTrap has been repaired for " << amount << " points of health!" << std::endl;
}

/*






*/