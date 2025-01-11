#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    const char *facts[] = {
        "Honig verdirbt nie.",
        "Eine Gruppe von Flamingos wird 'Flamboyance' genannt.",
        "Bananen sind Beeren, aber Erdbeeren sind es nicht.",
        "Der Eiffelturm kann sich im Sommer um bis zu 15 cm dehnen."
    };

    srand(time(0));
    int randomIndex = rand() % 4;
    printf("%s\n", facts[randomIndex]);

    return 0;
}
