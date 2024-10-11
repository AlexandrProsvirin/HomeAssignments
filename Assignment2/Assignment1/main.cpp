#include "myheader.h"
#include <iostream>

int main() {
    size_t fileSize;
    char* buffer = readFile("first.txt", fileSize);
    
    if (!buffer) return 1; // Проверяем, что файл был успешно прочитан

    reverseArray(buffer, fileSize);
    writeFile("reverse.txt", buffer, fileSize);

    delete[] buffer; // Освобождаем память
    std::cout << "Файл успешно обработан и сохранен как reverse.txt" << std::endl;
    
    return 0;
}