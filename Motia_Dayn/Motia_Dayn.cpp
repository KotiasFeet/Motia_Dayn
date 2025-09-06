#include <iostream>

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define _countof(_Array) (sizeof(_Array) / sizeof(_Array[0]))



int main() {

	

	//// printf()    - #include <stdio.h>
	//printf("Hello, World!\n");

	////             %d - integer
	//printf("Value: %d\n", 42);

	////                 %c - character
 //   printf("Character: %c\n", 'A');

	////			    %s - string
	//printf("String: %s\n", "Sample");

	////             %.Nf - float, .N - number of digits after decimal point
	//printf("Float: %.5f\n", 3.14159265);

	////           %x - hexadecimal
	//printf("Hex: %x\n", 255);

	//// 		       %o - octal
	//printf("Octal: %o\n", 34);

	////                %u - unsigned integer
	//printf("Unsigned: %u\n", 3000000000U);

	////			  %ld - long integer
	//printf("Long: %ld\n", 1234567890L);

	////			  %lld - long long integer
	//printf("Long Long: %lld\n", 123456789012345LL);

	////			  %e - scientific notation
	//printf("Scientific: %e\n", 1340000.658);

	////			  %g - use %f or %e based on value and precision
	//printf("General format: %g\n", 12345.6789);

	////			  %% - print a percent sign
	//printf("Percent sign: %%\n");

	////			  %p - pointer address
	//int var = 10;
	//printf("Pointer: %p\n", (void*)&var);
	// Note: Always cast to (void*) when printing pointers to avoid warnings.
	


	// scanf_s()   - #include <stdio.h>
	// Note: scanf_s is a safer version of scanf, but it is not part of the C standard.
	// Example:
	// int x;
	// scanf_s("%d", &x);
	// printf("You entered: %d\n", x);
	// For strings, you need to provide the buffer size:
	// char str[100];
	// scanf("%s", str);
	// printf("You entered: %s\n", str);


	// _countof() is defined in stdlib.h
	// Example:

	//int N = 3;

	//int** matrix = (int**)malloc(N * sizeof(int*));
	//for (int i = 0; i <= N; ++i) {
	//	matrix[i] = (int*)malloc(N * sizeof(int));
	//}

	//for (int i = 0; i <= N; ++i) {
	//	for (int j = 0; j <= N; ++j) {
	//		printf("Print: %d ", matrix[i]);
	//	}
	//	printf("\n");
	//}

	// 
	// char buffer[50];
	// scanf_s("%s", buffer, (unsigned)_countof(buffer));
	// printf("You entered: %s\n", buffer);
	// Note: _countof is a Microsoft-specific extension and may not be available in all compilers.
	// Example:
	// char arr[10];
	// size_t arrSize = _countof(arr); // arrSize will be 10
	// printf("Array size is: %zu\n", arrSize);
	// Note: _countof is not part of the C standard, so for portable code, use sizeof(arr)/sizeof(arr[0]) instead.
	
    
    // malloc()    - #include <stdlib.h>
	// free()      - #include <stdlib.h>
	// Example:
	// int* ptr = (int*)malloc(10 * sizeof(int)); // allocate memory for 10 integers
	// if (ptr == NULL) {
	//     // handle memory allocation failure
	// }
	// // use the allocated memory
	// free(ptr); // free the allocated memory
	// Always free memory allocated with malloc to avoid memory leaks.
	// Example:
	//  int* numbers = (int*)malloc(5 * sizeof(int));
	//  if (numbers == NULL) {
	//      // handle allocation failure
	//  }
	//  for (int i = 0; i < 5; i++) {
	//      numbers[i] = i * 10;
	//  }
	//  for (int i = 0; i < 5; i++) {
	//      printf("%d ", numbers[i]);
	//  }
	//  printf("\n");
	//  free(numbers);
    

    // strlen()    - #include <string.h>
	//const char* str = "Hello";
 //   int len = strlen(str);
	//printf("Length of '%s' is %d\n", str, len);

	
    // isdigit()   - #include <ctype.h>      
	//char ch = '5';
	//if (isdigit(ch)) {
	//    printf("'%c' is a digit.\n", ch);
	//}
	//else {
	//    printf("'%c' is not a digit.\n", ch);
	//}


    // atoi()      - #include <stdlib.h>
	//const char* numStr = "12345";
	//int num = atoi(numStr);
	//printf("The integer value is %d\n", num);













    int N;
    //// Example 1
    //scanf_s("%d", &N);


    // Example 2
    char input[100];
    int isNumber = 1;

    printf("Enter something: ");
    scanf_s("%s", input, (unsigned)_countof(input));

    for (int i = 0; i < strlen(input); i++) {
        if (!isdigit(input[i])) {
            isNumber = 0;
            break;
        }
    }

    if (isNumber) {
        N = atoi(input);
        printf("It is a number!\n");
    }
    else {
        printf("Not a number!\n");
    }






	int** matrix = (int**)malloc(N * sizeof(int*));
	for (int i = 0; i < N; i++) {
		matrix[i] = (int*)malloc(N * sizeof(int));
	}


    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            matrix[i][j] = 0;
        }
    }

    /*
    {00, 01, 02, 03, 04},
    {10, 11, 12, 13, 14},
    {20, 21, 22, 23, 24},
    {},
	{}
    
    
    
    */




    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (i == j || i + j == N - 1)
                matrix[i][j] = 1;
        }
    }

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (matrix[i][j] == 1)
                printf(" * ");
            else if (matrix[i][j] == 0)
                printf(" | ");
            else
                printf("SMTHG WENT WRONG");
        }
        printf("\n");
    }

    for (int i = 0; i < N; i++) {
        free(matrix[i]);
    }
    free(matrix);

    return 0;
}
