#pragma once

// Stores secret key for shared library core function initialization
// this file must not be included into share library code.
// shared lib
namespace pex_key {

    //@brief -- return key. key must be visible only in the caller. 
    auto get_key(int /*seed*/) {
        static char key[] = "asr_secret_key_my_molodcy A horse! A horse! My kingdom for a horse!";
        return key;
    };
};
