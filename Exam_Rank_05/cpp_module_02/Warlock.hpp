#pragma once

#include <iostream>
#include <map>
#include "ASpell.hpp"
#include "SpellBook.hpp"

class ASpell;

class Warlock
{
    private :
        std::string name;
        std::string title;
        SpellBook spel;
    public :
        ~Warlock();
        Warlock(const std::string &name, const std::string &title);
        void setTitle(const std::string &title);
        const std::string &getName() const;
        const std::string &getTitle() const;
        void introduce() const;
        void    learnSpell(ASpell *s);
        void    forgetSpell(std::string str);
        void    launchSpell(std::string s, ATarget &tr);
};