#include <string>

class Example {
public:
    Example(const std::string& name);

    std::string greet() const;

private:
    std::string name;
};
