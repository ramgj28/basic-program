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
 * <Add Extended Description Here>
 *
 * @author Ramgopal J
 * @date 09/08/2020
 *
 */
#ifndef __STATS_H__
#define __STATS_H__


/**
 * @brief A function that prints the statistics of an array including minimum, 
 * maximum, mean, and median.
 *
 * The function takes in two parameters- len and array1.
 * It uses various other functions to find mean, median, minimum, maximum.
 *
 * @param len    - An unsigned integer as the size of the array.
 * @param array1 - An unsigned char pointer to an n-element array.
 *
 * @return The function only prints the values, doesn't return any values.
 */
void print_statistics(unsigned int len,unsigned char* array1);


/**
 * @brief Given an array of data and a length, prints the array to the screen.
 *
 * The function takes in two parameters- len and array1 and prints the array 
 * to the screen
 *
 * @param len    - An unsigned integer as the size of the array.
 * @param array1 - An unsigned char pointer to an n-element array.
 *
 * @return The function only prints the values, doesn't return any values.
 */
void print_array(unsigned int len,unsigned char* array1);


/**
 * @brief  Given an array of data and a length, returns the median value
 *
 * The function takes in two parameters- len and array1.
 * It returns the median value.For this sorting is done by calling another 
 * function sort_array() 
 *
 * @param len    - An unsigned integer as the size of the array.
 * @param array1 - An unsigned char pointer to an n-element array.
 *
 * @return An unsigned integer which is the median of the array
 */
unsigned int find_median(unsigned int len,unsigned char* array1);


/**
 * @brief  Given an array of data and a length, returns the mean.
 *
 * The function takes in two parameters- len and array1.
 * It returns the mean value.
 *
 * @param len    - An unsigned integer as the size of the array.
 * @param array1 - An unsigned char pointer to an n-element array.
 *
 * @return An unsigned integer which is the mean of the array.
 */
unsigned int find_mean(unsigned int len,unsigned char* array1);


/**
 * @brief Given an array of data and a length, returns the maximum.
 *
 * The function takes in two parameters- len and array1.
 * It returns the maximum value.For this sorting is done by calling another 
 * function sort_array() 
 *
 *
 * @param len    - An unsigned integer as the size of the array.
 * @param array1 - An unsigned char pointer to an n-element array.
 *
 * @return An unsigned integer which is the maximum of the array.
 */
unsigned int find_maximum(unsigned int len,unsigned char* array1);


/**
 * @brief  Given an array of data and a length, returns the minimum.
 *
 * The function takes in two parameters- len and array1.
 * It returns the minimum value.For this sorting is done by calling another 
 * function sort_array() 
 *
 * @param len    - An unsigned integer as the size of the array.
 * @param array1 - An unsigned char pointer to an n-element array.
 *
 * @return An unsigned integer which is the minimum of the array.
 */
unsigned int find_minimum(unsigned int len,unsigned char* array1);


/**
 * @brief  Given an array of data and a length, sorts the array from largest 
 * to smallest. 
 *
 * The function takes in two parameters- len and array1.
 * sorting is done usinf nested for loops in descending order.
 *
 * @param len    - An unsigned integer as the size of the array.
 * @param array1 - An unsigned char pointer to an n-element array.
 *
 * @return Nothing is returned
 */
void sort_array(unsigned int len,unsigned char* array1);




#endif /* __STATS_H__ */
