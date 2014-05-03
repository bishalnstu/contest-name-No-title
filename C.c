#include<stdio.h>
#include<string.h>
#define pf printf
#define sf scanf

int check_vowel(char);
 
int main()
{
  char s[105], t[105];
  int i, j = 0;
  
  gets(s);
 strlwr(s);
  for(i = 0; s[i] != '\0'; i++) {
    if(check_vowel(s[i]) == 0) {       
      t[j] = s[i];
      j++;
    }
  }
 
  t[j] = '\0';
 
  strcpy(s, t); 
  
     int h=0;
     
 while(s[h]!='\0')
 {
 	pf(".%c",s[h]);
 	h++;
 }
  
 
  return 0;
}
 
 
int check_vowel(char c)
{
  switch(c) {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
    case 'Y':
	case 'y':	
      return 1;
    default:
      return 0;
  }
}
