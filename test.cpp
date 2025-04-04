#include <iostream>
#include <tuple>

int sum(int a, int b, int c)
{
    return a + b + c;
}

int main()
{
    std::tuple numbers{1, 2, 3};
    std::cout << std::apply(sum, numbers) << std::endl;
}
