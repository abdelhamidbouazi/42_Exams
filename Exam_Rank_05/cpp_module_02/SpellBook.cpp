#include "SpellBook.hpp"

SpellBook::~SpellBook()
{
}

void    SpellBook::learnSpell(ASpell *s)
{
    book[s->getName()] = s;
}

void    SpellBook::forgetSpell(std::string str)
{
    book.erase(str);
}

ASpell* SpellBook::createSpell(std::string const &c)
{
    ///more check !!!!!
    std::map<std::string, ASpell *>::iterator it = book.find(c);
    if (it != book.end())
        return book[c];
    return NULL;
}