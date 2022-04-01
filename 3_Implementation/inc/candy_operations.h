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


<<<<<<< HEAD
<<<<<<< HEAD
#include <candy_operations.h>
=======
#include "candy_operations.c"
#include "candy_operations.h"
>>>>>>> 0f360e19d753a37f1d2065534d7796088d1b7df5
=======
#include "candy_operations.c"
#include "candy_operations.h"
>>>>>>> 0f360e19d753a37f1d2065534d7796088d1b7df5
/**
 * @brief 
 * 
 * @param arr_name 
 * @param count 
 * @param size 
 * @param new_size 
 */
void sort_array(int*arr_name, int *count,int size, int*ne_size);
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