#include <iostream>
#include "../common/common.hpp"
using namespace std;
union _Obj
{
    union _Obj *_M_free_list_link;
    char _M_client_data[1]; /* The client sees this.        */
};
int round_up(int x)
{
    return (((x) + 8 - 1) & ~(8 - 1));
}
typedef struct
{
    int a[2];
    double d;

} struct_t;

double fun(int i)
{
    volatile struct_t s;
    s.d = 3.14;
    s.a[i] = 1073741824;
    return s.d;
}
void copyij(int src[2048][2048], int dst[2048][2048])
{
    int i, j;
    for (i = 0; i < 2048; i++)
        for (j = 0; j < 2048; j++)
            dst[i][j] = src[i][j];
}
void copyji(int src[2048][2048], int dst[2048][2048])
{
    int i, j;
    for (j = 0; j < 2048; j++)
        for (i = 0; i < 2048; i++)
            dst[i][j] = src[i][j];
}
int src[2048][2048];
int dst[2048][2048];
int main()
{
    uint64_t start_time, end_time;

    memset(src, 5, sizeof(src));

    memset(dst, 0, sizeof(dst));

    // int src[2048][2048] = {3};
    // int dst[2048][2048] = {0};
    GETTIME(&start_time);

    copyij(src, dst);
    GETTIME(&end_time);
    cout << "copyij cost: " << end_time - start_time << endl;
    GETTIME(&start_time);
    copyji(src, dst);
    GETTIME(&end_time);
    cout << "copyji cost: " << end_time - start_time << endl;

    // cout << sizeof(_Obj) << endl; // 8
    // char _M_client_data[1];
    // cout << sizeof(_M_client_data[1]) << endl; // 1
    // cout << round_up(12) << endl;
    // cout << fun(6) << endl;
    return 0;
}
