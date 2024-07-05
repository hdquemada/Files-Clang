#include <stdio.h>
#include <stdlib.h>

#define WIDTH 80
#define HEIGHT 24

int mandelbrot(double real, double imag, int max_iter) {
    int iter = 0;
    double real_temp, imag_temp, real_squared, imag_squared;

    while (iter < max_iter && (real_squared + imag_squared) < 4.0) {
        real_temp = real_squared - imag_squared + real;
        imag_temp = 2 * real * imag + imag;
        real = real_temp;
        imag = imag_temp;

        real_squared = real * real;
        imag_squared = imag * imag;

        iter++;
    }

    return iter;
}

void displayMandelbrot() {
    int max_iter = 1000;

    for (int row = 0; row < HEIGHT; row++) {
        for (int col = 0; col < WIDTH; col++) {
            double real = (col - WIDTH / 2.0) * 4.0 / WIDTH;
            double imag = (row - HEIGHT / 2.0) * 4.0 / HEIGHT;

            int value = mandelbrot(real, imag, max_iter);

            if (value == max_iter) {
                putchar('#');  // Point is in the Mandelbrot set
            } else {
                putchar(' ');  // Point is not in the Mandelbrot set
            }
        }
        putchar('\n');
    }
}

int main() {
    displayMandelbrot();
    return 0;
}