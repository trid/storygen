//
// Created by dmitry.khovyakov on 3/24/2017.
//

#ifndef STORYGEN_WORLDS_H
#define STORYGEN_WORLDS_H

#include "Action.h"
#include "Role.h"
#include "Manager.h"
#include "Goal.h"

namespace Common {

    using ActionManager = Manager<Action>;
    using RoleManager = Manager<Role>;
    using TargetManager = Manager<Goal>;

    class World {
        ActionManager actionManager;
        RoleManager roleManager;
        TargetManager targetManager;

    public:
        World();
    };

}

#endif //STORYGEN_WORLDS_H
