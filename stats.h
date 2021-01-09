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
 * @brief Header File for Week 1 Application Assignment
 *
 *
 *
 * @author Samarjeet Kumar Singh
 * @date 09.01.2021 DD.MM.YYYY
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/**
 * @brief A function that prints the statistics of an array.
 *
 * 	This funtion accepts as input a dataset
 *	Then calls functions for finding it's minimum, maximum, mean, and median.
 *  And then print the calculated data to the CLI 
 * 
 * @param data Pointer to an array, containing a dataset 
 * @param size Size of the dataset array.
 *
 * @return Error code
 */
unsigned char print_statistics(unsigned char * data, unsigned int size);

/**
 * @brief A function that print an array to the CLI
 *
 * 	This funtion accepts as input a dataset
 *  And then print it to CLI
 * 
 * @param data Pointer to an array, containing a dataset 
 * @param size Size of the dataset array.
 *
 * @return Error code
 */
unsigned char print_array(unsigned char * data, unsigned int size);

/**
 * @brief A function to find median value
 *
 * 	This funtion accepts as input a dataset
 *  And returns the median value of the array
 * 
 * @param data Pointer to an array, containing a dataset 
 * @param size Size of the dataset array.
 *
 * @return The median value of the array
 */
unsigned char find_median(unsigned char * data, unsigned int size);

/**
 * @brief A function to find mean value
 *
 * 	This funtion accepts as input a dataset
 *  And returns the mean value of the array
 * 
 * @param data Pointer to an array, containing a dataset 
 * @param size Size of the dataset array.
 *
 * @return The mean value of the array
 */
unsigned char find_mean(unsigned char * data, unsigned int size);

/**
 * @brief A function to find maximum value
 *
 * 	This funtion accepts as input a dataset
 *  And returns the maximum value of the array
 * 
 * @param data Pointer to an array, containing a dataset 
 * @param size Size of the dataset array.
 *
 * @return The maximum value of the array
 */
unsigned char find_maximum(unsigned char * data, unsigned int size);

/**
 * @brief A function to find minimum value
 *
 * 	This funtion accepts as input a dataset
 *  And returns the minimum value of the array
 * 
 * @param data Pointer to an array, containing a dataset 
 * @param size Size of the dataset array.
 *
 * @return The minimum value of the array
 */
unsigned char find_minimum(unsigned char * data, unsigned int size);

/**
 * @brief A function for sorting an array
 *
 * 	This funtion accepts as input a dataset
 *  Then sorts it from largest to smallest
 * 
 * @param data Pointer to an array, containing a dataset 
 * @param size Size of the dataset array.
 *
 * @return Error code
 */
unsigned char sort_array(unsigned char * data, unsigned int size);

#endif /* __STATS_H__ */
