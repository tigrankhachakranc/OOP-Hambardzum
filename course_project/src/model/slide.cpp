#include <stdexcept> // std::runtime_error

#include "slide.hpp"

namespace model {

Slide::Slide() {
    static int id = 0;
    id_ = id++;
}

void Slide::addItem(ItemPtr item) {
    items_.push_back(item); // TK:  should be added into topItem
    topItem_.addItem(item);
    ++itemCount_;
}

void Slide::removeItem(int id) {
    items_.erase(std::next(items_.begin(), id));
    topItem_.removeItem(id);
    --itemCount_;
}

ItemPtr Slide::getItem(int id) const {
    // TK: id is not index, you need to lookup to find it!
    // Ids are unique and always growing across whole life time of the app, I can add/remove items 10 times, my slide can have one item but its id could be 100
    if(items_.size() == 0 || id > itemCount_ || id < 0) {
        throw std::runtime_error("No item found with given id: [" + std::to_string(id) + "]\n");
    }

    return items_[id];
}

ItemGroup Slide::getTopItem() const {
    return topItem_;
}

int Slide::getID() const {
    return id_;
}

} // namespace model