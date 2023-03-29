/*
    Имеется 2 одномерных массива (вектора) размерами N1 и N2.
    Заполнить 3-й  массив размера N1+N2 элементами1-го 
    массива, за которыми идут элементы 2-го массива
*/
#include <iostream>
using namespace std;


void fill_arr(int *_v1, int _N1) 
{
    for (int i = 0; i < _N1; i++) {
        *(_v1+i) = rand() % 20;
    }
}

void show_arr(int* _v1, int _N1)
{
    for (int i = 0; i < _N1; i++) {
        cout << _v1[i] << ' ';
    }
    cout << endl;
}
void join_arr(int *v1, int N1, int *v2, int N2, int *v3) {
    int i, j;
    for (i = 0; i < N1; i++) {
        v3[i] = v1[i];
    }
    for (j = 0; j < N2; j++, i++) {
        v3[i] = v2[j];
    }
}

int main()
{
    const short N1 = 3;
    const short N2 = 4;
    const short N3 = N1 + N2;
    int v1[N1];
    int v2[N2];
    int v3[N3];
    fill_arr(v1, N1);
    fill_arr(v2, N2);
    show_arr(v1, N1);
    show_arr(v2, N2);
    join_arr(v1, N1, v2, N2, v3);
    show_arr(v3, N3);
}
