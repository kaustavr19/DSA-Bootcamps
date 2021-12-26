#include <iostream>
using namespace std;

unsigned int countSetBits(unsigned int n)
{
    unsigned int count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}
int main()
{
    int i,j;
    cin>>i>>j;
    cout << countSetBits(i)+countSetBits(j);
    return 0;
}