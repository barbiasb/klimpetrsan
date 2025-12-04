// klimpetrsan.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <fstream>
#include <vector>
#include <string>

// Функция 1: Чтение строк из файла в вектор
std::vector<std::string> readLinesFromFile(const std::string& filename) {
    std::vector<std::string> lines;
    // Здесь будет код для чтения строк из файла
    // Пока возвращаем пустой вектор
}

// Функция 2: Вывод строк на экран
    for (int i = 0; i < lines.size(); i++) 
    {
        std::cout << lines[i] << std::endl;
    }
}

// Функция 3: Запись строк в файл
void writeLinesToFile(const std::vector<std::string>& lines, const std::string& filename) {
    // Здесь будет код для записи строк в файл
    // Пока функция пустая
}

int main() {
    // Последовательный вызов трех функций как требуется в задании
    std::vector<std::string> lines = readLinesFromFile("input.txt");
    printLinesToScreen(lines);
    writeLinesToFile(lines, "output.txt");

    return 0;
}