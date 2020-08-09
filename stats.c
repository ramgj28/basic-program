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


//sort function
void sort_array(unsigned int len,unsigned char* array1)
{
 int temp=0;
 for(int i=0;i<len-1;++i)
    for(int j=0;j<len-1-i;++j)
    {
     if(array1[j]<array1[j+1])
       {
        temp = array1[j];
        array1[j] = array1[j+1];
        array1[j+1] = temp;
       }
    }
}


//minimum function
unsigned int find_minimum(unsigned int len,unsigned char* array1)
{
 unsigned  char min;
 sort_array(len,array1);
 min = array1[len-1];
 return min;
}


//maximum function
unsigned int find_maximum(unsigned int len,unsigned char* array1)
{
unsigned  char max;
 sort_array(len,array1);
 max = array1[0];
 return max;
}


//mean function
unsigned int find_mean(unsigned int len,unsigned char* array1)
{
 int mean;
  for(int i=0;i<len;++i)
  { 
   mean = mean + array1[i];
  }
  mean = mean/len;
  return mean;
}


//median function
unsigned int find_median(unsigned int len,unsigned char* array1)
{
 unsigned  char median;
 sort_array(len,array1);
 if( len % 2 == 0)
   median = (array1[len/2-1]+array1[len/2])/2;
 else
   median = array1[(len-1)/2];
 return median;
}


//print array function
void print_array(unsigned int len,unsigned char* array1)
{
  printf(" The array is "); 
 for(int i=0;i<len;++i)
 {
  printf(" %d ",array1[i]);
 }
}


//print statistics function
void print_statistics(unsigned int len,unsigned char* array1)
{
 unsigned char median, mean,min,max;
 mean   = find_mean( len,array1);
 median = find_median(len,array1);
 printf("\n Sorted array is ");
 print_array(len,array1);
 max = find_maximum(len,array1);
 min = find_minimum(len,array1);
 printf("\n Median is %d ",median);
 printf("\n Mean is %d ", mean);
 printf("\n Minimum is %d ",min);
 printf("\n Maximum is %d",max);
}










