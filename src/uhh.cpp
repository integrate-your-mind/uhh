#include "setup/setup.h"

int main(int argc, char** argv) {
    (void)argc;
    (void)argv;

    std::string home = std::string(getenv("HOME"));
    Uhh* uhh = new Uhh(home);

    return 0;
}
