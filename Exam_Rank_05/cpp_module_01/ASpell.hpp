#pragma once 

#include <iostream>
#include "ATarget.hpp"

class ATarget;

class ASpell
{
    protected :
        std::string name;
        std::string effects;
    public :
        virtual ~ASpell();
        ASpell(std::string name, std::string effects);
        const std::string &getName() const;
        const std::string &getEffects() const;
        virtual ASpell *clone() const = 0;
        void launch(const ATarget &tr) const ;
};