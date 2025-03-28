#include <iostream>
#include <string>

template<typename Tag>
class TypedString {
public:
    explicit TypedString(const std::string& value) : value_(value) {}

    const std::string& value() const { return value_; }

    operator std::string() const { return value_; }

    bool operator==(const TypedString& other) const {
        return value_ == other.value_;
    }

    bool operator!=(const TypedString& other) const {
        return value_ != other.value_;
    }

private:
    std::string value_;
};

struct TagA {};
struct TagB {};

int main() {
    TypedString<TagA> A("Hello");
    TypedString<TagB> B("World");

    std::cout << "A: " << A.value() << std::endl;
    std::cout << "B: " << B.value() << std::endl;

    std::string C = A;
    std::cout << "C: " << C << std::endl;

    // the following line will cause a compile-time error
    // A = B;

    return 0;
}
