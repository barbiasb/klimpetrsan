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
    return lines;
}

// Функция 2: Вывод строк на экран
void printLinesToScreen(const std::vector<std::string>& lines) {
    // Здесь будет код для вывода строк на экран
    // Пока функция пустая
}

// Функция 3: Запись строк в файл
void writeLinesToFile(const std::vector<std::string>& lines, const std::string& filename) 
{
    std::ofstream outFile(filename);
    if (!outFile.is-open())
    {
        std::cerr << "Ошибка: не удалось открыть файл для записи:" << filename << std::endl;
        return;
    }
    for (const auto& line : lines)
    {
        outFile << line << '\n';
    }

    outFile.close();
   
}

int main() {
    // Последовательный вызов трех функций как требуется в задании
    std::vector<std::string> lines = readLinesFromFile("input.txt");
    printLinesToScreen(lines);
    writeLinesToFile(lines, "output.txt");

    return 0;
}