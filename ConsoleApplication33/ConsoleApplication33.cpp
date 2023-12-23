#include <iostream>

// Базовий клас
class Tree 
{
public:
    virtual void draw() const = 0; // Віртуальний метод 
};

// Похідні класи
class Tree1 : public Tree 
{
public:
    void draw() const override 
    {
        std::cout << "  / \\\n // \\\\\n";
    }
};

class Tree2 : public Tree 
{
public:
    void draw() const override 
    {
        std::cout << "   / \\\n  / ** \\\n";
    }
};

class Tree3 : public Tree 
{
public:
    void draw() const override 
    {
        std::cout << "  / \\\n / ++ \\\n";
    }
};

int main() 
{
    system("chcp 1251 > null");

    Tree* trees[3];

    Tree1 tree1;
    Tree2 tree2;
    Tree3 tree3;

    trees[0] = &tree1;
    trees[1] = &tree2;
    trees[2] = &tree3;

    // Виклик методу draw для кожного об'єкта
    for (int i = 0; i < 3; ++i) 
    {
        std::cout << "Малюнок " << i + 1 << ":\n";
        trees[i]->draw();
        std::cout << std::endl;
    }

}
