#include <stdio.h>

void printMessage(const char *message) {
    printf("%s\n", message);
}

int main() {
    const char* topic = "Subject: My Project Essay";
    const char* message = "This is a random c code for my project Essay on the topic of [insert topic here].";

    printMessage(topic);
    printMessage(message);

    return 0;
}
