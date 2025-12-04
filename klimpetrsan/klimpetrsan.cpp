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
void printLinesToScreen(const std::vector<std::string>& lines) 
{
    if (lines.empty()) // проверяем вектор на пустоту
    {
        std::cout << "Нет строк для вывода." << std::endl;
        return;
    }
    for (int i = 0; i < lines.size(); i++) // проходим по всем строкам в векторе
    {
        std::cout << lines[i] << std::endl; // выводим каждую строку на экран
    }
}

// Функция 3: Запись строк в файл
void writeLinesToFile(const std::vector<std::string>& lines, const std::string& filename) {
    // Здесь будет код для записи строк в файл
    // Пока функция пустая
}

int main() {
    // Последовательный вызов трех функций как требуется в задании
    std::vector<std::string> lines = {"Привет", "Это тест", "Функция 2 работает!"};
    printLinesToScreen(lines);
    writeLinesToFile(lines, "output.txt");

    return 0;
}