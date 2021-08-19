#pragma once

#include <tr1/cstdint.hpp>
#include <string>

namespace numbering {

std::string createNumber(const uint32_t number, const std::string &format, const bool letterSync);

}
