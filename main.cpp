
#include "key.h"
#include "key_check.h"
#include <assert.h>


int main() {
    int seed = 0;
    pex_key::AuthMarker valid_marker(pex_key::get_key(seed));

    pex_key::AuthMarker invalid_marker("wrong_key");
    assert(valid_marker.valid() == true);
    assert(invalid_marker.valid() == false);
}

