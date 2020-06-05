/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Add FirsName LastName>
 * @date <Add date >
 *
 */



#include <stdio.h>
#include <stdbool.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)


void main() {

    unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

    /* Other Variable Declarations Go Here */
    /* Statistics and Printing Functions Go Here */

    print_statistics(test);
}

/* Add other Implementation File Code Here */
void print_statistics(char* arr){
    printf("Statistics for array: \n");
    sort_array(arr);
    print_array(arr);
    printf("MEAN: %i \n", find_mean(arr));
    printf("MEDIAN: %i \n", find_median(arr));
    printf("MAXIMUM: %i \n", find_maximum(arr));
    printf("MINIMUM: %i \n", find_minimum(arr));
}

void print_array(char* arr){

    printf("\t");

    for ( int i = 0; i < SIZE; i++ ){
        printf("%i ", arr[i]);
        if ( (i != 0) && (i % 5 == 0) ) printf("\n\t");
    }

    printf("\n\n");

}

int find_median(char* arr){

    return arr[SIZE/2];

}

int find_mean(char* arr){

    int sum = 0;

    for( int i = 0; i < SIZE; i++ ){
        sum += arr[i];
    }

    return sum / SIZE;
    
}

int find_maximum(char* arr){

    return *arr;

}

int find_minimum(char* arr){

    return arr[SIZE - 1];

}

//Uses bubble sort for lolz
void sort_array(char* arr){

    while ( !isarray_sort(arr) ){

        for ( int i = 1; i < SIZE; i++ ){

            if ( arr[i-1] < arr[i] ){
                char temp = arr[i];
                arr[i] = arr[i-1];
                arr[i-1] = temp;
            }
        }

    }
}


int isarray_sort(char* arr){

    for( int i = 1; i < SIZE; i++ ){
        if(arr[i-1] < arr[i]) return false;
    }

    return true;

}