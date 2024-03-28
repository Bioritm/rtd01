#include "docs/source/API/cppsphinx.rst"

/**
 * \class Example
 * \brief Пример класса для демонстрации документации API.
 *
 * Длинное описание класса Example...
 */
class Example {
public:
    /**
     * \brief Конструктор, который инициализирует класс с именем.
     * \param name Имя пользователя.
     */
    Example(const std::string& name);

    /**
     * \brief Возвращает приветствие.
     * \return Строка с приветствием пользователя.
     */
    std::string greet() const;
private:
    std::string name; ///< Имя пользователя.
};

