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
 * @file stats.h
 * @brief Function prototypes for stats.c
 *
 * The functions prototypes included are print statistics, print array, find median,
 * find mean, find max, find min, and sort array. The statistics are rounded down to 
 * nearest integer.
 *
 * @author Raquel Valencia
 * @date 20/09/2023
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief Prints the min, max, mean, and mean of an int array
 *
 * This functions takes as an input an array of unsigned chars, and its size.
 * This will call other functions to calculate the statistics, and
 * print them. 
 *
 * @param size The number of elements in the array
 * @param arr  The array of unsigned chars
 *
 * @return Nothing
 */
void print_statistics(unsigned int size, unsigned char arr[]);


/**
 * @brief Prints an array
 *
 * This functions takes as an input an array of unsigned chars, and its size.
 * This will print all the array elements.
 *
 * @param size The number of elements in the array
 * @param arr  The array of unsigned chars
 *
 * @return Nothing
 */
void print_array(unsigned int size, unsigned char arr[]);


/**
 * @brief Finds the median of an array
 *
 * This functions takes as an input an array of unsigned chars, and its size.
 * This will call a sorting function, and then find the middle value.
 *
 * @param size The number of elements in the array
 * @param arr  The array of unsigned chars
 *
 * @return The unsigned char median value
 */
unsigned char find_median(unsigned int size, unsigned char arr[]);


/**
 * @brief Finds the mean of an array
 *
 * This functions takes as an input an array of unsigned chars, and its size.
 * This will find the mean of the array, and return it. 
 *
 * @param size The number of elements in the array
 * @param arr  The array of unsigned chars
 *
 * @return The unsigned char mean value
 */
unsigned char find_mean(unsigned int size, unsigned char arr[]);

/**
 * @brief Finds the maximum of an array
 *
 * This functions takes as an input an array of unsigned chars, and its size.
 * This will call a sorting function, and take the first value which is the max,
 * and the return it. 
 *
 * @param size The number of elements in the array
 * @param arr  The array of unsigned chars
 *
 * @return The unsigned char max value
 */
unsigned char find_maximum(unsigned int size, unsigned char arr[]);


/**
 * @brief Finds the minimum of an array
 *
 * This functions takes as an input an array of unsigned chars, and its size.
 * This will call a sorting function, and take the last value which is the smallest,
 * and the return it. 
 *
 * @param size The number of elements in the array
 * @param arr  The array of unsigned chars
 *
 * @return The unsigned char min value
 */
unsigned char find_minimum(unsigned int size, unsigned char arr[]);


/**
 * @brief Sorts the array from largest to smallest
 *
 * This functions takes as an input an array of unsigned chars, and its size.
 * This will sort the array from largest to smallest and return a pointer to the sorted array. 
 *
 * @param size The number of elements in the array
 * @param arr  The array of unsigned chars
 *
 * @return The pointer to an array of unsgined chars
 */
unsigned char* sort_array(unsigned int size, unsigned char arr[]);

#endif /* __STATS_H__ */
