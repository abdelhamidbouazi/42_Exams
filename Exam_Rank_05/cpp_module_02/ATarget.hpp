#pragma once 

#include <iostream>
#include "ASpell.hpp"

class ASpell;

class ATarget
{
    protected :
        std::string type;
    public :
        virtual ~ATarget();
        ATarget(std::string type);
        const std::string &getType() const;
        virtual ATarget *clone() const = 0;
        void getHitBySpell(const ASpell &sp) const;
};