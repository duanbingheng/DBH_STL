#include <vector>
#include <list>
#include <deque>
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
    const int arrSize = 7;
    int ia[arrSize] = {0, 1, 2, 3, 4, 5, 6};

    vector<int> ivect(ia, ia + arrSize);
    list<int> ilist(ia, ia + arrSize);
    deque<int> ideque(ia, ia + arrSize);
    vector<int>::iterator it1 = find(ivect.begin(), ivect.end(), 4);
    if (it1 == ivect.end())
        cout << "4 not found." << endl;
    else
        cout << "4 found. " << endl;
    list<int>::iterator it2 = find(ilist.begin(), ilist.end(), 6);
    if (it2 == ilist.end())
        cout << "6 not found" << endl;
    else
        cout << "6 found " << endl;
    deque<int>::iterator it3 = find(ideque.begin(), ideque.end(), 8);
    if (it3 == ideque.end())
        cout << "8 not found" << endl;
    else
        cout << "8 found " << endl;
    return 0;
}