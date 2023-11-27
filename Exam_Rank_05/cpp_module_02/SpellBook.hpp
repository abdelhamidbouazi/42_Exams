#pragma once

#include <iostream>
#include <map>
#include "ASpell.hpp"

class ASpell;

class SpellBook
{
    private :
        std::map<std::string, ASpell *> book;
    public :
        ~SpellBook();
        void    learnSpell(ASpell *s);
        void    forgetSpell(std::string str);
        ASpell* createSpell(std::string const &c);
};