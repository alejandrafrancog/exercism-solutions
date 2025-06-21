#include "difference_of_squares.h"
long int sum_of_squares(long int number){
    unsigned long int numerator = number*(number+1)*((2*number)+1);
    return numerator/6;
}
long int square_of_sum(long int number){
    long int suma = (number*(number+1))/2;
    return suma*suma;
}
long int difference_of_squares(long int number){
    long int sum = sum_of_squares(number);
    long int square_of = square_of_sum(number);
    if (sum-square_of < 0)
        return (sum-square_of)*-1;
    return  sum-square_of;
}
