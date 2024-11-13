#include <stdio.h>
int main()
{
	  int arr[5] = {10, 20, 30, 40, 50};//La variable p tiene que apuntar al 50; 
	  int *p = &arr; //arr+5 (mejor)
			//%arr[5]//
          for (int i = 5; i > 0; i--) {
	        printf("Elemento %d: %d\n", i, *(p - i));
	  }
return 0
}
