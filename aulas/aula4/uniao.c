#include <stdio.h>

union RGBA_Pixel {
    int pixel;
    unsigned char rgba[4];
};

int main() {
    union RGBA_Pixel pixel1;
    union RGBA_Pixel *ponteiro_pixel = &pixel1;

    ponteiro_pixel->pixel = 0x00FF0000; // azul

    printf("Pixel: %X\n", ponteiro_pixel->pixel);
    printf("R: %d\n", ponteiro_pixel->rgba[0]);
    printf("G: %d\n", ponteiro_pixel->rgba[1]);
    printf("B: %d\n", ponteiro_pixel->rgba[2]);
    printf("A: %d\n", ponteiro_pixel->rgba[3]);

    return 0;
}