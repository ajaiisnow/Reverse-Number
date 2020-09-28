#include <iostream>
#include <stdlib.h>
using namespace std;

int reverse(int x)
{
    if (x < numeric_limits<int>::min() || x > numeric_limits<int>::max())
    {
        throw out_of_range("Value out of range");
    }
    int sign = (x < 0) ? -1 : 1;
    int temp_x = abs(x);
    if (temp_x <= 9)
    {
        return(sign * temp_x);
    }

    int rev_int = 0;
    int place = 1;
    while (temp_x != 0)
    {
        rev_int = ((rev_int * place) + (temp_x % 10));
        temp_x /= 10;
        place = 10;
    }
    return (rev_int * sign);
}


int main(int argc, char** argv)
{
    int number = -2147483648;
    int rev_int = reverse(number);
    cout << "Reversed Number " << rev_int;
    return 0;
}