#include <stdio.h>

int main() {
  int d=27, m=9;

  int sDni=d;
  switch (m-1) {    
    case 11: sDni+=30;  
    case 10: sDni+=31;  
    case 9 : sDni+=30;   
	case 8 : sDni+=31;  
	case 7 : sDni+=31;  
	case 6 : sDni+=30;  
	case 5 : sDni+=31;  
	case 4 : sDni+=30;  
	case 3 : sDni+=31;  
	case 2 : sDni+=28;  
	case 1 : sDni+=31;  
  }
 
  printf("%d\n", sDni);
}
