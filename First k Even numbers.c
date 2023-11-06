#include <stdio.h>
void sort_number(int *even , int k );
void by2(int *even,int *evenBy2 , int k );
int main() {
    int k;
    scanf("%d",&k);
    int even[k];
    int evenBy2[k];
    sort_number(even ,  k );
    by2( even, evenBy2 , k );
    // ToDo call Functions
    // print first Array
    printf("First %d even numbers are: \n", k);
    for (int i = 0; i < k; i++) {
        printf("%d ", *(even + i));
    }

    // print second Array
    printf("\nMultiplied by 2 even numbers are: \n");
    for (int i = 0; i < k; i++) {
        printf("%d ", *(evenBy2 + i));
    }
    return 0;
}
void sort_number(int *even , int k ){
    for (int i = 0; i < k; ++i) {
       *even=(i+1)*2;
       even++;
    }
}
void by2(int *even,int *evenBy2 , int k ){
    for (int i = 0; i < k; ++i) {
        *evenBy2=2*(*even);
        evenBy2++;
        even++;
    }
}