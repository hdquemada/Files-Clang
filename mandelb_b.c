#include <stdio.h>
#include <math.h>  
#include <complex.h>

// Define the size of the image and the zoom level  
#define WIDTH 800  
#define HEIGHT 600  
#define ZOOM 200

// Define the maximum number of iterations  
#define MAX\_ITER 1000

// Define a function to map a pixel to a complex number  
double complex pixel\_to\_complex(int x, int y) {  
double real = (x - WIDTH / 2.0) / ZOOM;  
double imag = (y - HEIGHT / 2.0) / ZOOM;  
return real + imag \* I;  
}

// Define a function to calculate the color of a pixel  
int mandelbrot\_color(double complex c) {  
// Initialize z to zero  
double complex z = 0;  
// Initialize the iteration counter  
int iter = 0;  
// Loop until z diverges or the maximum number of iterations is reached  
while (cabs(z) < 2 && iter < MAX\_ITER) {  
// Apply the Mandelbrot function: z = z^2 + c  
z = z \* z + c;  
// Increment the iteration counter  
iter++;  
}  
// Return the number of iterations as the color  
return iter;  
}

// Define a function to write the image data to a file in PPM format  
void write\_image(char \*filename) {  
// Open the file for writing  
FILE \*fp = fopen(filename, "wb");  
if (fp == NULL) {  
printf("Error opening file\\n");  
return;  
}  
// Write the PPM header  
fprintf(fp, "P6\\n%d %d\\n255\\n", WIDTH, HEIGHT);  
// Loop over each pixel  
for (int y = 0; y < HEIGHT; y++) {  
for (int x = 0; x < WIDTH; x++) {  
// Get the color of the pixel  
int color = mandelbrot\_color(pixel\_to\_complex(x, y));  
// Map the color to a RGB value  
unsigned char r = color % 256;  
unsigned char g = 255;  
unsigned char b = 255 \* (color < MAX\_ITER);  
// Write the RGB value to the file  
fwrite(&r, 1, 1, fp);  
fwrite(&g, 1, 1, fp);  
fwrite(&b, 1, 1, fp);  
}  
}  
// Close the file  
fclose(fp);  
}

// The main function  
int main() {  
// Write the image to a file named "mandelbrot.ppm"  
write\_image("mandelbrot.ppm");  
// Return 0 to indicate success  
return 0;  
}