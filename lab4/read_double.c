/*
*  File Name: read_double.c
*  Assignment: Lab 4 Exercise E
*  Lab Section: B01
*  Completed by: Alexander Sembrat (30089188)
*  Submission Date: Oct 12th 2020
*/

#include "read_input.h"

int read_real(char* digits, int n, double* num){
	
	if(get_string(digits, n)== EOF)
    return EOF;

  if(is_valid_double(digits)){
    if(digits[0] == '-')
      *num = -convert_to_double(digits + 1);
    else if(digits[0] == '+') 
      *num = convert_to_double(digits + 1);
    else
      *num = convert_to_double(digits);
    return 1;
  }

  return 0;
}

int is_valid_double(const char* digits){
	 
	 int valid = 1;
  int i;

  /* i = index where first digit should be */
  if(digits[0] == '+' || digits[0] == '-')
    i = 1;
  else
    i = 0;

  /* Must have at least one digit, and no non-digits. */
  if (digits[i] == '\0')
    valid = 0;
  else
    while (valid && (digits[i] != '\0')) {
	if((digits[i] >= '0' && digits[i] <= '9') || (digits[i] == '.' && digits[i+1] != '.') ){
		  valid = 1;
	}
	 else{
		  valid = 0;
		  break;
	}
      i++;
    }
  
  return valid;
}

double convert_to_double(const char *digits){
  
  double total = 0;
  double  sign = 1;
  int x = 0;
  
  if (*digits == '-'){
    digits++;
    sign = -1;
  }
  while(*digits){
    if (*digits == '.'){
      x = 1; 
    }
    int d = *digits - '0';
    if (d >= 0 && d <= 9){
      if (x) {
		  sign = sign*0.1;
	  }
      total = total * 10.0 + (double)d;
    }
	digits++;
  }
  return total * sign;
}

