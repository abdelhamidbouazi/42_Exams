#include "TargetGenerator.hpp"

TargetGenerator::~TargetGenerator()
{
}

void    TargetGenerator::learnTargetType(ATarget *s)
{
    tar[s->getType()] = s;
}

void    TargetGenerator::forgetTargetType(std::string str)
{
    tar.erase(str);
}

ATarget* TargetGenerator::createTarget(std::string const &c)
{
    std::map<std::string, ATarget *>::iterator it = tar.find(c);
    if (it != tar.end())
        return tar[c];
    return NULL;
}