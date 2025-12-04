// klimpetrsan.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <fstream>
#include <vector>
#include <string>

std::vector<std::string> readLinesFromFile(const std::string& TextFile1 ) {
    std::vector<std::string> lines;
    std::ifstream file(TextFile1);

    if (!file.is_open()) {
        std::cerr << "error opened" << TextFile1 << std::endl;
        return lines; // возвращаем пустой вектор
    }

    return lines;
}

// Функция 2: Вывод строк на экран
void printLinesToScreen(const std::vector<std::string>& lines) {
    // Здесь будет код для вывода строк на экран
    // Пока функция пустая
}

// Функция 3: Запись строк в файл
void writeLinesToFile(const std::vector<std::string>& lines, const std::string& filename) {
    // Здесь будет код для записи строк в файл
    // Пока функция пустая
}

int main() {
    // Последовательный вызов трех функций как требуется в задании
    std::vector<std::string> lines = readLinesFromFile("TextFile1.txt");
    printLinesToScreen(lines);
    writeLinesToFile(lines, "output.txt");

    return 0;
}