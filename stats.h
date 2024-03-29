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
 * @brief header file for stats.c
 *
 * A detailed header file containing all the basic function defs in order to work with arrays
 *
 * @author Parishi Naik
 * @date 22nd December, 2019
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/**
 * @brief A function that prints the statistics of an array including minimum, maximum, mean, and median.
 *
 * @param arr[] The unsigned array of bytes passed
 * @param length The number of elements in the array
 *
 * @return void - this function outputs to the terminal with printf
 */

void print_statistics(unsigned char arr[], int length); 

/**
 * @brief Given an array of data and a length, prints the array to the screen
 *
 * @param arr[] The unsigned array of bytes passed in as a pointer
 * @param arr_size The number of elements in the array
 *
 * @return void - this function outputs to the terminal with printf
 */

void print_array(unsigned char arr[], int length);

/**
 * @brief Given an array of data and a length, returns the median value
 *
 * @param arr[] The unsigned array of bytes
 * @param arr_size The number of elements in the array
 *
 * @return the median - middle of the dataset
 */

unsigned char find_mean(unsigned char arr[], int length);

/**
 * @brief Given an array of data and a length, returns the mean
 *
 * @param arr[] The unsigned array of bytes
 * @param arr_size The number of elements in the array
 *
 * @return unsigned char - the max
 */

unsigned char find_median(unsigned char arr[], int length);

/**
 * @brief Given an array of data and a length, returns the mean
 *
 * @param arr[] The unsigned array of bytes
 * @param arr_size The number of elements in the array
 *
 * @return void - this function outputs to the terminal with printf
 */

unsigned char find_maximum(unsigned char arr[], int length);

/**
 * @brief Given an array of data and a length, returns the minimum
 *
 * @param arr The unsigned array of bytes
 * @param arr_size The number of elements in the array
 *
 * @return int - the min
 */

unsigned char find_minimum(unsigned char arr[], int length);

/**
 * @brief Given an array of data and a length, sorts the array from largest to smallest. 
 * (The zeroth Element should be the largest value, and the last element (n-1) should be the
 * smallest value. )
 *
 * @param arr The unsigned array of bytes
 * @param arr_size The number of elements in the array
 *
 * @return void - this function sorts the array that is passed in by pointer and swaps it round
 * largest --> smallest
 */

void sort_array(unsigned char arr[], int length);



#endif /* __STATS_H__ */
