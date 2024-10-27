#include<stdio.h>
int main()
{
  char c;
  int lower_case,upper_case;
  printf("Enter an alphabet:");
  scanf("%c",&c);
  lower_case=(c=='a'|| c=='i'|| c=='o'|| c=='e'|| c=='u');
  upper_case=(c=='A'||c=='I'|| c=='E'|| c=='O'||c=='U');
  if (lower_case||upper_case)
  {
    /* code */ printf("\n%c is a vowel",c);
  }else
  {
    printf("\n%c is a consonant",c);
  }
  
}