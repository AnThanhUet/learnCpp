#include<iostream>

int main() {
    int n = 5;
    int a[n] =  { 1, 3, 4, 5, 8};
    for (int i = 0; i < n - 1; i++)
        std::cout << a[i] << " ";
    return 0;
}