/******************************************************************************
 * Họ và tên: [Trương Minh Việt]
 * MSSV:      [PS48885]
 * Lớp:       [COM108]
 *****************************************************************************/
 #include <stdio.h>
#include <math.h>
void giaiPTBac2(float a, float b, float c, float *x1, float *x2, int *soNghiem) {
    float delta = b*b - 4*a*c;
    if (delta < 0) {
        *soNghiem = 0;
    } else if (delta == 0) {
        *x1 = -b / (2 * a);
        *x2 = *x1;
        *soNghiem = 1;
    } else {
        *x1 = (-b + sqrt(delta)) / (2 * a);
        *x2 = (-b - sqrt(delta)) / (2 * a);
        *soNghiem = 2;
    }
}
int main() {
    float a, b, c, n1, n2;
    int trangThai;
    printf("Nhap a: ");
    scanf("%f", &a);
    printf("Nhap b: ");
    scanf("%f", &b);
    printf("Nhap c: ");
    scanf("%f", &c);
    if (a == 0) {
        printf("He so a phai khac 0 de la phuong trinh bac 2\n");
        return 0;
    }
    giaiPTBac2(a, b, c, &n1, &n2, &trangThai);
    if (trangThai == 0) {
        printf("Phuong trinh VO NGHIEM\n");
    } else if (trangThai == 1) {
        printf("Phuong trinh co nghiem KEP:\n");
        printf("x1 = x2 = %.2f\n", n1);
    } else {
        printf("Phuong trinh co 2 nghiem PHAN BIET:\n");
        printf("x1 = %.2f\n", n1);
        printf("x2 = %.2f\n", n2);
    }
    return 0;
}