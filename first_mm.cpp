#include <algorithm>
#include <math.h>
#include <stdio.h>
#include <vector>
#include <cassert>

// For generics in the following functions.
enum Data_Type {
    INT,
    DOUBLE,
    FLOAT
};

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

bool evaluation(void* matrix_a, void* matrix_b, int byte_len, int width, int height, float error) {
    int num_elements = width * height;
    assert(byte_len = 4); //suppose it's integer this version.
    int num_error = 0;
    for (int i = 0; i < num_elements; i++) {
       if (*((int*)matrix_a + i) != *((int*)matrix_b+i)) {
           return false;
       }
    }
    return true;


}

int main() {
    float* matrix_a;

    build_matrix(matrix_a, 4, 4, 1.0);
    print_matrix(matrix_a, 4, 4);
    return 1;
}
