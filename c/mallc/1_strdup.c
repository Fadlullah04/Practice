#include <stdlib.h>

char *_strdup(char *str) {
	  int i = 0;
	    int j = 0;
	      char *strPtr;

	        if (str == NULL) {
			    return NULL;
			      }

		  while (str[j] != '\0') {
			      ++j;
			        }

		    strPtr = malloc((sizeof(char) * j) + 1);
		      if (strPtr == NULL) {
			          return NULL;
				    }
		        
		        i = 0;
			  
			  while (*(str + i) != '\0') {
				      strPtr[i] = str[i];
				          i++;
					    }
			    *(strPtr + i) = '\0';

			      return (strPtr);
}
