#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> Split(const std::string& str, char delimiter) { //функция возвращающая вектор строк, принимающая строку и чар
    std::vector<std::string> result; //вектор строк
    if (str.empty()) { //пустая
        result.push_back(""); //вернуть пустую строку
        return result;
    }

    size_t start = 0;
    for (size_t i = 0; i < str.length(); ++i) {
        if (str[i] == delimiter) {
            result.push_back(str.substr(start, i - start)); //подстрока начинающаяся в start размером (i - start)
            start = i + 1; //стартовая позиция для вырезания подстрок
        }
    }
    result.push_back(str.substr(start)); //добавление последней строки
    return result;
}

int main() {
    setlocale(0, "");
    std::cout << "Результат: ";
    for (const auto& s : Split("What_is_your_name?", '_')) { //объявление переменной s внутри цикла
        std::cout << "\"" << s << "\" ";
    }


    /*std::string str1 = "What_is_your_name?";
    char delimiter1 = '_';
    std::vector<std::string> result1 = Split(str1, delimiter1);
    std::cout << "Input: \"" << str1 << "\", Delimiter: '" << delimiter1 << "'" << std::endl;
    std::cout << "Result: ";
    for (const auto& s : result1) {
        std::cout << "\"" << s << "\" ";
    }
    std::cout << std::endl;*/

    return 0;
}