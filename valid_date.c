/***********************
 * Program: To Check whether a date is valid or not. 
 * Date   : 11/10/2024
 **********************/
#include<stdio.h>
int main(){
    int date, month, year, flag=0, leap=0;
    
    printf("Enter a date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &date, &month, &year);
    
    // Check for leap year
    if ((year % 400 == 0) || (year % 100 != 0 && year % 4 == 0)){
        leap = 1;
    }
    
    // Validate month
    if (month < 1 || month > 12){
        flag = 1;
    }
    
    // Validate date for February
    if (month == 2){
        if (leap == 1){  // Leap year, February has 29 days
            if (date <= 0 || date > 29){
                flag = 1;
            }
        } else {  // Non-leap year, February has 28 days
            if (date <= 0 || date > 28){
                flag = 1;
            }
        }
    }
    
    // Validate date for months with 31 days
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
        if (date <= 0 || date > 31){
            flag = 1;
        }
    }
    
    // Validate date for months with 30 days
    if (month == 4 || month == 6 || month == 9 || month == 11){
        if (date <= 0 || date > 30){
            flag = 1;
        }
    }
    
    // Output the result
    if (flag == 1){
        printf("Invalid Date!");
    } else {
        printf("Valid Date");
    }
    
    return 0;
}
