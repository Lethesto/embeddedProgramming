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
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief <Add Brief Description of Function Here>
 *
 * <Add Extended Description Here>
 *
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 *
 * @return <Add Return Informaiton here>
 */

/*
Function: 
	print_statistics

Description:
	Sorts the array (max to min) then prints the minimum, maximum, mean and median of the supplied array

Parameters:
		character array [char* arr]

Returns:
	VOID
*/
void print_statistics(char* arr);

/*
Function:
	print_array

Description:
	Prints the contents of the supplied array

Parameters:
	character array [char* arr]

Returns:
	VOID

*/
void print_array(char* arr);

/*
Function:
	find_median

Description:
	Finds and returns the median value contained within the supplied array

Parameters:
	character array [char* arr]

Returns:
	integer value representing the median value of the supplied array

*/
int find_median(char* arr);

/*
Function:
	find_mean

Description:
	Finds and returns the mean value of the supplied array

Parameters:
	SORTED (max to min) character array [char* arr]

Returns:
	integer value representing the mean of the supplied array

*/
int find_mean(char* arr);

/*
Function:
	find_maximum

Description:
	Finds and returns the maximum value of the supplied array

Parameters:
	SORTED (max to min) character array [char* arr]

Returns:
	integer value representing the maximum value of the supplied array

*/
int find_maximum(char* arr);

/*
Function:
	find_minimum

Description:
	Finds and returns the maximum value of the supplied array

Parameters:
	SORTED (max to min) character array [char* arr]

Returns:
	VOID

*/
int find_minimum(char* arr);

/*
Function:
	sort_array

Description:
	Sorts a given array from largest to smallest (index 0 has the largest and index n-1 is the smallest)
	
Parameters:
	character array [char* arr]

Returns:
	VOID

*/
void sort_array(char* arr);

/*
Function:
	isarray_sort

Description:
	Checks to see if the given array is sorted from largest to smallest (index 0 has the largest and index n-1 is the smallest)
	
Parameters:
		character array [char* arr]

Returns:
	boolean (true --> array sorted | false --> array not sorted)

*/
int isarray_sort(char* arr);

#endif /* __STATS_H__ */
