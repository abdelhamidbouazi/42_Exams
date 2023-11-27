#include "ATarget.hpp"

ATarget::ATarget(std::string type)
{
    this->type = type;
}

ATarget::~ATarget()
{

}

const std::string &ATarget::getType() const
{
    return this->type;
}

void ATarget::getHitBySpell(const ASpell &sp) const 
{
    std::cout << this->getType() << " has been " << sp.getEffects() << "!\n";
}
