#include <stdio.h>

void print_name(const char *name) {
    printf("%s\n", name);
}

int main() {
    const char *person = "Alice";
    print_name(person);
    return 0;
}
