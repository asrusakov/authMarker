#pragma once

#include <string>
namespace pex_key {  
    bool is_valid_key(const std::string &key);

    /// @brief do a simple check of the key vs hashed key
    /// it is not expected to be strong vs any real hacker atack
    /// but it requires illegal debugging to figure out how to hack
    class AuthMarker {
    public:
        AuthMarker() {};
        AuthMarker(const std::string& k) : key_(k) {};
        //valid if key hash used in ctor matches secret hash
        bool valid() { return is_valid_key(key_); }
    private:
        std::string key_;
    };
}
