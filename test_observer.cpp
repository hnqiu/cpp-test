#include <iostream>
#include <memory>
#include <vector>

class Observer
{
public:
    Observer(int i) : _id(i) {}
    virtual void update() = 0;
protected:
    int _id{};
};

class Subject
{
public:
    void addObserver(std::shared_ptr<Observer> observer)
    {
        observers.push_back(observer);
    }

    void notify()
    {
        for (auto it = observers.begin(); it != observers.end();)
        {
            if (auto obs = it->lock())
            {
                obs->update();
                ++it;
            }
            else
            {
                it = observers.erase(it);
            }
        }
    }

private:
    std::vector<std::weak_ptr<Observer>> observers;
};

class ConcreteObserver : public Observer
{
public:
    ConcreteObserver(int i) : Observer(i) {}
    void update() override
    {
        std::cout << "Observer #" << _id << " updated.\n";
    }
};

int main()
{
    auto subject = std::make_shared<Subject>();
    auto observer1 = std::make_shared<ConcreteObserver>(1);
    auto observer2 = std::make_shared<ConcreteObserver>(2);

    subject->addObserver(observer1);
    subject->addObserver(observer2);

    subject->notify(); // Both observers are updated

    observer1.reset(); // Destroy observer1

    subject->notify(); // Only observer2 is updated

    return 0;
}
