#pragma once

#include <iostream>
#include <map>
#include "ATarget.hpp"

class ATarget;

class TargetGenerator
{
    private :
        std::map<std::string, ATarget *> tar;
    public :
        ~TargetGenerator();
        void    learnTargetType(ATarget *s);
        void    forgetTargetType(std::string str);
        ATarget* createTarget(std::string const &c);
};