#include <iostream>
#include <string>

/// Класс для демонстрации вывода сообщения
class Foo {
public:
    /// Выводит приветствие с сообщением
    /// @param message Сообщение для вывода
    void say_hello(const std::string& message) const {
        std::cout << message << std::endl;
    }
};

int main() {
    Foo foo;
    foo.say_hello("Hello, World!");  // Вызов метода say_hello объекта класса Foo
    return 0;
}
