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
 * @file stats.c
 * @brief Functions implementation to calculate array statistics
 *
 * The functions are print statistics, print array, find median,
 * find mean, find max, find min, and sort array
 *
 * @author Raquel Valencia
 * @date 20-09-2023
 *
 */



#include <stdio.h>
#include "stats.h"
#include <math.h>
#include <stdlib.h>

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
  printf("You inserted the array : \n");
  print_array(SIZE, test);
  printf("\nThe sorted array in descending order is : \n");
  unsigned char* arr2 = sort_array(SIZE, test);
  print_array(SIZE, arr2);
  print_statistics(SIZE, test);
}

/* Implementation code */

void print_statistics(unsigned int size, unsigned char arr[]) {
  printf("\nThe statics of the array are the following: \n");
  printf("Minimum: %u\n", find_minimum(size, arr));
  printf("Maximum: %u\n", find_maximum(size, arr));
  printf("Mean: %u\n", find_mean(size, arr));
  printf("Median: %u\n", find_median(size, arr));
}

void print_array(unsigned int size, unsigned char arr[]) {
  for(unsigned int i = 0; i < size; i++) {
    printf("%u ", arr[i]);
  }
}

unsigned int find_mean(unsigned int size, unsigned char arr[]) {
  unsigned int sum = 0;
  for(unsigned int i = 0; i < size; i++) {
    sum = sum + arr[i];
  }
  unsigned int mean = floor(sum / size);
  return mean;
}

unsigned int find_median(unsigned int size, unsigned char arr[]) {
  unsigned char* sorted_arr = sort_array(size, arr);
  unsigned int median;
  unsigned int half = size / 2;
  if (size % 2 == 0) {
    median = (sorted_arr[half] + sorted_arr[half - 1]) / 2;
  } else {
    median = sorted_arr[half];
  }
  return median;
}


unsigned char find_maximum(unsigned int size, unsigned char arr[]) {
  unsigned char* arr2;
  arr2 = sort_array(size, arr);
  return arr2[0];
}

unsigned char find_minimum(unsigned int size, unsigned char arr[]) {
  unsigned char* arr2;
  arr2 = sort_array(size, arr);
  return arr2[size - 1];
}

unsigned char* sort_array(unsigned int size, unsigned char arr[]) {
  /* Swap algorithm */
  unsigned char a;
  for (unsigned int i = 0; i < size; i++) {
    for (unsigned int j = i + 1; j < size; j++) {
      if (arr[i] < arr[j]) {
        a = arr[i];
        arr[i] = arr[j];
        arr[j] = a;
      }
    }
  }
  return arr;
}


