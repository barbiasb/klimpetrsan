// klimpetrsan.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <fstream>
#include <vector>
#include <string>

// Функция 1: Чтение строк из файла в вектор
std::vector<std::string> readLinesFromFile(const std::string& TextFile1 ) {
    // создаем пустой вектор для хранения строк из файла
    std::vector<std::string> lines;
    // создаем объект для чтения из файла с указанным именем
    std::ifstream file(TextFile1);

    // проверяем открылся файл или нет
    if (!file.is_open()) {
        std::cerr << "error opened" << TextFile1 << std::endl;
        return lines; // возвращаем пустой вектор
    }
    // создаем переменную для хранения каждой считанной строки
    std::string line;

    // читаем строчки из файла
    while (std::getline(file, line)) {
        // добавляем прочитанную строку в конец вектора
        lines.push_back(line);
    }

    file.close();

    return lines; // возвращаем вектор со всеми прочитанными строками
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

int main() 
{
    // Последовательный вызов трех функций как требуется в задании
    std::vector<std::string> lines = readLinesFromFile("TextFile1.txt");
    printLinesToScreen(lines);
    writeLinesToFile(lines, "output.txt");

    return 0;
}