#include "../allocator/dbhalloc.h"
#include <vector>
#include <iostream>
using namespace std;
int main()
{
    int ia[5] = {0, 1, 2, 3, 4};
    unsigned int i;
    vector<int, DBH::allocator<int> > iv(ia, ia + 5);
    for (i = 0; i < iv.size(); i++)
    {
        cout << iv[i] << " ";
        cout << endl;
    }
}