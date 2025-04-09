#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, World!";
    strcpy(str, "你好，世界！");
    printf("%s", str);

    return 0;
}
