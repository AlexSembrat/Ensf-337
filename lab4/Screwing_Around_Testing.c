
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

double convert_to_double(const char *digits);
int is_valid_double(const char* digits);

int main(){

char c[] = "-2135.67";

double a = convert_to_double(&c);

printf("This is the conversion %lf\n", a);

int valid = is_valid_double(&c);
printf("%d",valid);


}




double convert_to_double(const char *digits){
  
  double total = 0, sign = 1;
  if (*digits == '-'){
    digits++;
    sign = -1;
  };
  for (int point_seen = 0; *digits; digits++){
    if (*digits == '.'){
      point_seen = 1; 
      continue;
    }
    int d = *digits - '0';
    if (d >= 0 && d <= 9){
      if (point_seen) sign /= 10.0;
      total = total * 10.0 + (double)d;
    }
  }
  return total * sign;
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