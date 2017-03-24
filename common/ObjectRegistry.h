//
// Created by dmitry.khovyakov on 3/24/2017.
//

#ifndef STORYGEN_OBJECTREGISTRY_H
#define STORYGEN_OBJECTREGISTRY_H

#include <vector>

#include "Object.h"

namespace Common {

    class ObjectRegistry {
        std::vector<ObjectPtr> objects;
    };

}

#endif //STORYGEN_OBJECTREGISTRY_H
