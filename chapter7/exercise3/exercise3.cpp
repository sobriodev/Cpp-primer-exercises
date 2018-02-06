#include <iostream>

struct Box {
    char producer[40];
    float height;
    float width;
    float length;
    float volume;
};

void printBox(Box box);
void setVolume(Box *box);

int main() {
    Box box = {"SomeProducer", 10, 20, 30.1, 0};
    std::cout << "Before calculating volume: ";
    printBox(box);
    std::cout << "After calculating volume: ";
    setVolume(&box);
    printBox(box);
    return EXIT_SUCCESS;
}

void printBox(Box box) {
    std::cout << box.producer
              << " "
              << box.width
              << ", "
              << box.height
              << ", "
              << box.length
              << " | "
              << box.volume
              << std::endl;
}

void setVolume(Box *box) {
    box->volume = box->height * box->width * box->length;
}