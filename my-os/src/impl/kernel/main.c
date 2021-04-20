#include "print.h"

void kernel_main() {
    print_clear();
    print_set_color(PRINT_COLOR_LIGHT_BLUE, PRINT_COLOR_BLACK);
    print_str("N      N   U       U   S S S S S S   T T T T T T T");
    print_newline();
    print_str("NN     N   U       U   S                   T");
    print_newline();
    print_str("N N    N   U       U   S                   T");
    print_newline();
    print_str("N  N   N   U       U   S S S S S S         T");
    print_newline();
    print_str("N   N  N   U       U             S         T");
    print_newline();
    print_str("N    N N   U       U             S         T");
    print_newline();
    print_str("N     NN   U U U U U   S S S S S S         T");
}
