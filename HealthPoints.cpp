//
// Created by eladm on 21/05/2022.
//

#include "HealthPoints.h"
class InvalidArgument{
public:
    InvalidArgument(){};
};
HealthPoints::HealthPoints(int maxHP) :m_currentHP(0),m_MaxHP(maxHP) {
    if(maxHP<=0)
        throw InvalidArgument();
}