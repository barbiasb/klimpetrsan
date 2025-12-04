// klimpetrsan.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <fstream>
#include <vector>
#include <string>

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
void printLinesToScreen(const std::vector<std::string>& lines) {
    // Здесь будет код для вывода строк на экран
    // Пока функция пустая
}

// Функция 3: Запись строк в файл

void writeLinesToFile(const std::vector<std::string>& lines, const std::string& filename) 
{
    std::ofstream outFile(filename);  // Создаём объект вывода в файл

    if (!outFile.is_open()) 
    {  // Проверяем, открылся ли файл
        std::cerr << "Ошибка: не удалось открыть файл для записи: " << filename << std::endl;
        return;
    }

    for (const auto& line : lines) 
    {
        outFile << line << '\n';  // Записываем каждую строку с новой строки
    }

    outFile.close();  // Закрываем файл
}

int main() {
    // Последовательный вызов трех функций как требуется в задании
    std::vector<std::string> lines = readLinesFromFile("TextFile1.txt");
    printLinesToScreen(lines);
    writeLinesToFile(lines, "output.txt");

    return 0;
}
