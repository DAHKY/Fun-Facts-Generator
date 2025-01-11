#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    const char* facts[] = {
        "Honig verdirbt nie.",
        "Eine Gruppe von Flamingos wird 'Flamboyance' genannt.",
        "Bananen sind Beeren, aber Erdbeeren sind es nicht.",
        "Der Eiffelturm kann sich im Sommer um bis zu 15 cm dehnen."
    };

    srand(time(0));
    int randomIndex = rand() % 4;
    std::cout << facts[randomIndex] << std::endl;

    return 0;
}
