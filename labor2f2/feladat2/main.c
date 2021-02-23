#include <stdio.h>
#include "function.h"
int paros,paratlan,pozitiv,negativ;
int main() {
    int n=10,x[1001];
    for(int i=1;i<=n;i++)
    {
        scanf("%d", &x[i]);
        vizsgal(x[i]);

    }
    kiir();
    //printf("%d", maxi(98,33,99));
    return 0;
}
