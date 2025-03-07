#include <stdexcept> // std::runtime_error

#include "command.hpp"

namespace cli {

namespace commands {

Value Command::getValue(const std::string& optionName) {
    const auto iter = options_.find(optionName);

    if(iter == options_.end()) {
        throw std::runtime_error("Uknown option: [" + optionName + "]\n");
    }

    return iter->second;
}

void Command::addOption(const OptionRegistry::value_type& option) {
    options_[option.first] = option.second;
}

} // namespace commands

} // namespace cli