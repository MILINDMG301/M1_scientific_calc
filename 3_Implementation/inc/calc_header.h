/**
 * @file calc_header.h
 * @author Milind G
 * @brief Header file for calculator functions
 * @version 0.1
 * @date 2021-03-31
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __CALC_HEADER_H__
#define __CALC_HEADER_H__
/**
 * @brief Funtion to find the sum of two float or int numbers
 * 
 * @param[in] number1 to add
 * @param[in] number2 to add
 * @param[out] result result of sum operation
 * @return float result of the sum operation
 */
float addition(float number1, float number2);

/**
 * @brief Function to find square of a float number
 * 
 * @param[in] number for which the square has to be found
 * @param[out] result result of square operation
 * @return float Result of the square operation
 */
float square(float number);

/**
 * @brief Funtion to find the difference of two float or integer numbers
 * 
 * @param[in] number1
 * @param[in] number2 
 * @param[out] result result of substract operation
 * @return float result of the difference operation
 */
float substract(float number1, float number2);

/**
 * @brief Funtion to find the product of two float or int numbers
 * 
 * @param[in] number1
 * @param[in] number2 
 * @param[out] result result of product operation
 * @return float result of the product operation 
 */
float prod(float number1, float number2);

/**
 * @brief Funtion to find the division of two float or int numbers
 * 
 * @param[in] dividend
 * @param[in] divisor 
 * @param[out] result result of division operation
 * @return float result of the division operation
 */
float division(float dividend, float divisor);

/**
 * @brief Funtion to find the remainder of division of two integer numbers
 * 
 * @param[in] dividend
 * @param[in] divisor
 * @param[out] result result of remainder operation
 * @return int remainder of the division operation
 */
int remaind(int number1, int number2);

/**
 * @brief Funtion to find the mod of integer or float number 
 * 
 * @param[in] number for which mod has to be found
 * @param[out] result result of mod operation
 * @return float result of the mod operation
 */
float mod(float number);

/**
 * @brief Funtion to find the factorial of integer number
 * 
 * @param[in] number to find factorial
 * @param[out] result result of factorial operation
 * @return int result of the factorial operation
 */
int facto(int number);

/**
 * @brief Funtion to find the sum of float or integer number's series
 * 
 * @param[in] numbers series
 * @param[in] its size of the series
 * @param[out] result result of summation operation
 * @return int result of the summation operation on the series
 */
float summation(float series[],int size);

/**
 * @brief Funtion to find the square series of integer or float numbers list
 * 
 * @param[in] series of numbers 
 * @param[in] its size of the series
 * @param[out] result resultant series of squared operation
 * @return float result as squared series of the given series
 */
float * sq(float series[],int size);

/**
 * @brief Funtion to find the sum of squared float or integer numbers series
 * 
 * @param[in] series of numbers
 * @param[in] its size of the series
 * @param[out] result sum of squared operation on series
 * @return float result of the sum operation of squared series
 */
float sqsum(float series[],int size);

/**
 * @brief Funtion to find the sum of two float or integer numbers series
 * 
 * @param[in] number1 series
 * @param[in] number2 series
 * @param[in] its size of the series
 * @param[out] result sum of product operation of both series
 * @return float result of the sum operation on the product series of both series
 */
float sumxy(float seriesx[], float seriesy[],int size);

/**
 * @brief Funtion to find the sum of two float or integer numbers series where one series is squared
 * 
 * @param[in] number1 series which is cached and squared series
 * @param[in] number2 series
 * @param[in] its size of the series
 * @param[out] result sum of product operation on one squared series and another series
 * @return float result of the sum operation on the product series of both series 
 */
float xsqy(float seriesx[], float seriesy[],int size);

/**
 * @brief Funtion to find the sum of float or integer numbers cube series 
 * 
 * @param[in] series of numbers
 * @param[in] its size of the series
 * @param[out] result sum of cube operation on the series
 * @return float result of the sum operation of cube series
 */
float cubx(float series[],int size);

/**
 * @brief Funtion to find the mean of float or integer numbers series
 * 
 * @param[in] series of numbers
 * @param[in] its size of the series
 * @param[out] result mean of the given series
 * @return float result of the mean operation of series
 */
float meanseries(float series[],int size);

/**
 * @brief Funtion to find the median of float or integer numbers series
 * 
 * @param[in] series of numbers
 * @param[in] its size of the series
 * @param[out] result median of the given series
 * @return float result of the median operation of series
 */
float medianseries(float series[],int size);

/**
 * @brief Function to find sine of the angle
 * 
 * @param[in] angle in degrees
 * @param[out] result result of sine operation on angle
 * @return float Result of the sine operation
 */
float sinx(float angle);

/**
 * @brief Function to find cos of the angle
 * 
 * @param[in] angle in degrees
 * @param[out] result result of cos operation on angle
 * @return float Result of the cos operation
 */
float cosx(float angle);

/**
 * @brief Function to find tan of the angle
 * 
 * @param[in] angle in degrees
 * @param[out] result result of tan operation on angle
 * @return float Result of the tan operation
 */
float tanx(float angle);

/**
 * @brief Function to find cosec of the angle
 * 
 * @param[in] angle in degrees
 * @param[out] result result of cosec operation on angle
 * @return float Result of the cosec operation
 */
float cosecx(float angle);

/**
 * @brief Function to find sec of the angle
 * 
 * @param[in] angle in degrees
 * @param[out] result result of sec operation on angle
 * @return float Result of the sec operation
 */
float secx(float angle);

/**
 * @brief Function to find cot of the angle
 * 
 * @param[in] angle in degrees
 * @param[out] result result of cot operation on angle
 * @return float Result of the cot operation
 */
float cotx(float angle);



#endif  /* __FUN_H__  */