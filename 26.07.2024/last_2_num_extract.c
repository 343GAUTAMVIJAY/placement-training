#include <stdio.h>
int main() {
    int n,td;
    printf("Enter an integer: ");
    scanf("%d",&n);
    td=n%100;
    printf("Last two digits of %d are: %02d\n",n,td);

}
