#include <iostream>
using namespace std;

// Padding in Classes
// Definition:
// Padding is the extra unused bytes added by the compiler to align data members in memory efficiently. This is done to meet hardware alignment requirements and improve performance.

// Greedy Alignment in Classes
// Definition:
// Greedy alignment refers to the compiler's aggressive approach of rearranging the data members to minimize padding and optimize memory usage.

// Conclusion
// Padding is extra memory added to maintain data alignment.
// Greedy alignment is an optimization where the compiler rearranges members to reduce padding.
// Understanding these concepts is important for memory optimization in system programming and embedded systems.


class Animal{
    double b;
    int a;
    char ch;
};

int main()
{

    cout << sizeof(Animal) << endl;
}