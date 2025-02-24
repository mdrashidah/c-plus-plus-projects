#include <iostream>
using namespace std;

int main()
{
    printf("calculator for finding square of a number \n \n");
    int num, i;
    cout << "enter the number do wish to find square \n";
    cin >> num;
    for (i = 1; i * i < num; i++)
        ;
    //i--; // Adjust i to be the integer part of the square root

    i = i * i;
    cout << "the square root of the entered number is " << i << endl;


    return 0;
}