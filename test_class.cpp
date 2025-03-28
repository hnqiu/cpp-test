#include <iostream>
// #include <iterator>

class Obj
{
private:
    size_t size;
    int* data;
public:
    explicit Obj(size_t s)
    : size(s), data(new int[s])
    {
        std::cout << "constructor\n";
    }
    ~Obj()
    {
        std::cout << "destructor\n";
        delete[] data;
    }

    Obj(const Obj& other)
    : size(other.size), data(new int[other.size])
    {
        std::cout << "copy constructor\n";
        std::copy(other.data, other.data + other.size, data);
    }

    Obj(Obj&& other) noexcept
    : size(other.size), data(other.data)
    {
        std::cout << "move constructor\n";
        other.size = 0;
        other.data = nullptr;
    }

    Obj& operator=(const Obj& other)
    {
        std::cout << "copy assignment\n";
        if (this == &other)
        {
            return *this;
        }
        delete[] data;
        size = other.size;
        data = new int[other.size];
        std::copy(other.data, other.data + other.size, this->data);
        return *this;
    }

    Obj& operator=(Obj&& other) noexcept
    {
        std::cout << "move assignment\n";
        if (this == &other)
        {
            return *this;
        }
        delete[] data;
        size = other.size;
        data = other.data;
        other.size = 0;
        other.data = nullptr;
        return *this;
    }

    void assign(const int* values, size_t count)
    {
        if (count > size)
        {
            throw std::out_of_range("Count exceeds array size");
        }
        std::copy(values, values + count, data);
    }

    void print() const
    {
        for (size_t i = 0; i < size; ++i)
        {
            std::cout << data[i] << " ";
        }
        std::cout << std::endl;
    }
};


int main(int argc, char* argv[])
{
    Obj a(5);
    int v[] = {1, 2, 3, 4, 5};
    a.assign(v, 5);
    a.print();

    Obj b(a);
    b.print();
    v[2] = 10;
    b.assign(v, 5);

    Obj c(5);
    c = a;
    c.print();

    c = std::move(b);
    c.print();

    return 0;
}
