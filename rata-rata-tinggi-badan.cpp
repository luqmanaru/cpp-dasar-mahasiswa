// Code 2 - Rata-rata Tinggi Badan
#include <iostream>
using namespace std;

int main() {
    int tinggi_badan[10] = {175, 165, 166, 157, 184, 156, 163, 176, 171, 169};
    int length = sizeof(tinggi_badan) / sizeof(tinggi_badan[0]);
    int sum = 0;

    for (int i = 0; i < length; i++) {
        sum += tinggi_badan[i];
    }

    float rata_rata = (float)sum / length;
    printf("Rata-rata tinggi badan: %.2f\n", rata_rata);

    return 0;
}
