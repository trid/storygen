//
// Created by dmitry.khovyakov on 3/23/2017.
//

#ifndef STORYGEN_OBJECT_H
#define STORYGEN_OBJECT_H

#include <memory>
#include <string>
#include <unordered_map>

#include <boost/any.hpp>

namespace Common {

    using Properties = std::unordered_map<std::string, boost::any>;

    class Object {
        Properties properties;
    public:
        void setProperty(const std::string &name, const boost::any &value);

        boost::any &getProperty(const std::string &name);
    };

    using ObjectPtr = std::unique_ptr<Object>;

}

#endif //STORYGEN_OBJECT_H
