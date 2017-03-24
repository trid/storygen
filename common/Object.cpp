//
// Created by dmitry.khovyakov on 3/23/2017.
//

#include "Object.h"

using namespace Common;

void Object::setProperty(const std::string &name, const boost::any &value) {
    properties[name] = value;
}

boost::any &Object::getProperty(const std::string &name) {
    return properties[name];
}
