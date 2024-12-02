#include <iostream>
#include <memory>
#include <cstdio>

struct FileDeleter
{
    void operator()(FILE *file) const
    {
        if (file)
        {
            std::cout << "Closing file\n";
            fclose(file);
        }
    }
};

int main()
{
    std::unique_ptr<FILE, FileDeleter> filePtr(fopen("example.txt", "w"));
    if (filePtr)
    {
        std::cout << "File opened successfully\n";
    }
    return 0;
}
