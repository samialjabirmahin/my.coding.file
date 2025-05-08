
#include <stdio.h>

int main() {
    int n1=0 , n2=1 , next, n, i;
    next= n1+n2;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    
    printf("%d %d ", n1, n2);
    
    
    for(i=1; i<=n; i++){
        printf("%d ", next);
        n1=n2;
        n2=next;
        next=n1+n2;
    }
    
    
    

    return 0;
}