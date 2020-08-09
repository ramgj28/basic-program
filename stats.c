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
 * @brief source file for statistics on array
 *
 * <Add Extended Description Here>
 *
 * @author Ramgopal J
 * @date 9/08/2020
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() 
{

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */

  /* Statistics and Printing Functions Go Here */
 print_array(SIZE,test);
 print_statistics(SIZE,test);

}



unsigned char* sort_array(unsigned int len,unsigned char* array1)
{
}

unsigned int find_minimum(unsigned int len,unsigned char* array1)
{
}

unsigned int find_maximum(unsigned int len,unsigned char* array1)
{
}

unsigned int find_mean(unsigned int len,unsigned char* array1)
{
}

unsigned int find_median(unsigned int len,unsigned char* array1)
{
}

void print_array(unsigned int len,unsigned char* array1)
{
}

void print_statistics(unsigned int len,unsigned char* array1)
{
}










