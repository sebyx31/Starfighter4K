#include "include/game/ProjectileGuided.h"
#include "include/config/Define.h"
#include "include/game/Spaceship.h"

ProjectileGuided::ProjectileGuided(qreal _dXOrigin, qreal _dYOrigin, Shooter _from, Spaceship *_spaceship)
    :Projectile(_dXOrigin, _dYOrigin, _from),spaceship(_spaceship)
{
    dPower = POWER_GUIDED;
    dSpeed = SPEED_GUIDED_DEF;
}

ProjectileGuided::~ProjectileGuided()
{
    spaceship->disableGuideBonus();
}

void ProjectileGuided::top()
{
    setPos(pos().x(), pos().y()-dSpeed);
}

void ProjectileGuided::bottom()
{
    setPos(pos().x(), pos().y()+dSpeed);
}
