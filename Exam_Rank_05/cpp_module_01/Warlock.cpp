#include "Warlock.hpp"

Warlock::Warlock(const std::string &name, const std::string &title)
{
    this->name = name;
    this->title = title;
    std::cout << this->name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock()
{
    std::cout << this->getName() << ": My job here is done!" << std::endl;
}

const std::string &Warlock::getName() const
{
    return this->name;
}

const std::string &Warlock::getTitle() const
{
    return this->title;
}

void Warlock::setTitle(const std::string &title)
{
    this->title = title;
}

void Warlock::introduce() const
{
    std::cout << this->getName() << ": I am " << this->getName() << ", " << this->getTitle() << "!\n";
}

void    Warlock::learnSpell(ASpell *s)
{
    spel[s->getName()] = s;
}

void    Warlock::forgetSpell(std::string str)
{
    spel.erase(str);
}

void    Warlock::launchSpell(std::string s, ATarget &tr)
{
    std::map<std::string, ASpell *>::iterator it = spel.find(s);
    if (it != spel.end())
        it->second->launch(tr);
}