#include <stdio.h>

#include <stdio.h>

int main() {
    int a, b;

    for (;;) {  

        scanf("%d %d", &a, &b);
        
        if (!a && !b) break;  

        printf("%d\n", a + b);
  
    }
    
    return 0;
}


/* int main() {
	
    int a, b;

	while (1) {

		scanf("%d %d", &a, &b);
		
        if (!a && !b) break;

		printf("%d\n", a + b);
	}
	return 0;
} */