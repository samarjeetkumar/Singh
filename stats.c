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
 * @brief Implementation file for Week 1 Application Assignment
 *
 * 
 *
 * @author Samarjeet Kumar Singh
 * @date 09.01.2021 DD.MM.YYYY
 *
 */



#include <stdio.h>
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
print_statistics(test,SIZE);                              

}

unsigned char print_statistics(unsigned char * data, unsigned int size) {
	print_array(data, size);
	printf("\n Minimum value: ");
	printf("%u",find_minimum(data, SIZE));
	printf("\n Maximum value: ");
	printf("%u",find_maximum(data, SIZE));
	printf("\n Mean value: ");
	printf("%u",find_mean(data, SIZE));		
	printf("\n Median value: ");
	printf("%u",find_median(data, SIZE));
	printf("\n\n");
}

unsigned char print_array(unsigned char * data, unsigned int size) {
  printf("\n Values in the test array: \n\n");


  for (int i = 0, j = 0; i < size; ++i)
  {
  	printf("%5u",data[i]);
  	if (++j>7) {
  		printf("\n");
  		j = 0;
  	}
  }
}

unsigned char find_median(unsigned char * data, unsigned int size) {
	sort_array(data, size);
	if ((SIZE % 2) == 0) {
		return (data[size/2]+data[size/2-1])/2;
	}
	else
		return data[size/2];
}

unsigned char find_mean(unsigned char * data, unsigned int size) {
	int mean = 0;
	for (int i = 0; i < size; ++i) mean += data[i];
	mean /= size;
return mean;
}


unsigned char find_maximum(unsigned char * data, unsigned int size) {
	unsigned char max = data[0];
	for (int i = 1; i < size; ++i)
	{
		if (data[i] > max) {
			max = data[i];
		}
	}
	return max;
}
unsigned char find_minimum(unsigned char * data, unsigned int size) {
	unsigned char min = data[0];
	for (int i = 1; i < size; ++i)
	{
		if (data[i] < min) {
			min = data[i];
		}
	}
	return min;
}

unsigned char sort_array(unsigned char * data, unsigned int size) {
	for (int i = 0; i < size;)
	{
		for (int j = i+1; j < size; ++j)
		{
			if (data[j] > data[i]) {
				unsigned char buff = data[i];
				data[i] = data [j];
				data[j] = buff;
			}
		}
	i++;
	}
	return 0;
}
