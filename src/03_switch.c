#include <stdio.h>

int main() {
  int mesec = 2, steviloDni;

  switch (mesec) {    
    case 2:      
      steviloDni=28; 
	  break;     
    case 4:    
    case 6:    
    case 9:   
    case 11:      
      steviloDni=30;    
	  break;
    default:      
      steviloDni=31;          
  }
  printf("%d\n", steviloDni);
}
