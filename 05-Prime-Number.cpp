#include<iostream>
int main()
{
  /* given number */
  int num = 5;

  /* flag to check prime */
  int flag = 1;

  if(num < 2) 
    flag = 0;

  for(int i = 2; i<=num/2; i++) {
    if(num % i == 0) 
      flag = 0;

  /* check the flag */
  if(flag == 1)
    cout << "Number is Prime";
  else 
    cout << "Number is not Prime";
  
}
