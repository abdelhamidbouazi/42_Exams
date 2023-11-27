#pragma once

#include <iostream>

class Warlock
{
    private :
        std::string name;
        std::string title;
    public :
        ~Warlock();
        Warlock(const std::string &name, const std::string &title);
        void setTitle(const std::string &title);
        const std::string &getName() const;
        const std::string &getTitle() const;
        void introduce() const;
};