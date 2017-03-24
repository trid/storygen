//
// Created by dmitry.khovyakov on 3/24/2017.
//

#ifndef STORYGEN_MANAGER_H
#define STORYGEN_MANAGER_H

#include <memory>
#include <string>
#include <unordered_map>

namespace Common {

    template <typename T> class Manager {
        std::unordered_map<std::string, std::unique_ptr<T>> items;
    public:
        template <typename ...Ts> void addItem(const std::string& key, Ts... args) {
            items.emplace(std::piecewise_construct,
                          std::forward_as_tuple(key),
                          std::forward_as_tuple(args...)); }

        T& getItem(const std::string& key) { return *items[key]; }
    };

}

#endif //STORYGEN_MANAGER_H
