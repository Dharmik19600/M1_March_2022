/**
 * @file candy_operations.h
 * @author Dharmik Mahulkar (dharmik.mahulkar19@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-03-29
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef __CANDY_OPERATIONS_H__
#define __CANDY_OPERATIONS_H__



#include <cand_operations.h>

/*
 * Filename: e:\session\M1_March_2022\3_Implementation\inc\candy_operations.h
 * Path: e:\session\M1_March_2022\3_Implementation\inc
 * Created Date: Friday, April 1st 2022, 12:07:16 pm
 * Author: Dharmik Mahulkar
 * 
 * Copyright (c) 2022 Your Company
 */



/**
 * @brief 
 * 
 * @param arr_name 
 * @param count 
 * @param size 
 * @param new_size 
 */

void sort_array(int*arr_name, int *count,int size, int*new_size);

/**
 * @brief 
 * 
 * @param arr_name 
 * @param left 
 * @param right 
 * @param count 
 * @param count_left 
 * @param count_right 
 * @param left_size 
 * @param right_size 
 * @param new_size 
 */

void merge_array(int*arr_name, int*left,int*right, int *count, int*count_left,int*count_right, int left_size, int right_size, int*new_size);

/**
 * @brief Get the position object
 * Used for Getting Position in the array
 * @param arr_name 
 * @param num 
 * @param size 
 * @return int 
 */

int get_positions(int*arr_name, int num, int size);

/**
 * @brief 
 * Used for Finding Median in the array
 * @param arr_name 
 * @param size 
 * @return int 
 */
int median_of_array(int*arr_name, int size);


#endif  /* #define __CANDY_OPERATIONS_H__ */