


#include <algorithm>
#include <math.h>
#include <stdio.h>
#include <vector>



void build_matrix(float* matrix, int width, int height, float initial) {
    for (int i = 0; i < width * height; i++){
        *(matrix + i) = initial;	
    }

}

void print_matrix(float* matrix, int width, int height) {
    printf("This is a %d * %d matrix. \n", height, width);
    printf("The matrix takes %d bytes. \n", sizeof(*matrix) * width * height);
    printf("\n");
    for (int h = 0; h < height; h++) {
        for (int w = 0; w < width; w++) {
            printf("%f", *(matrix + h * width + w));
            if (w + 1 == width) {
	         printf("\n");
	    }       
	    else {
	         printf(", ");
	    }
	}
    }
        
}



int main() {
    float* matrix_a;

    build_matrix(matrix_a, 4, 4, 1.0);
    print_matrix(matrix_a, 4, 4);
    return 1;
}
