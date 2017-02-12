#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int x = 2 ;
    int a ;
    int b = 0 ;
    
    printf("请输入一个数，以显示这么多素数\n");
    scanf("%d",&a );
    
    printf("前%d个素数是：\n",a);
    while (b < a) {
        int i ;
        int Prime = 1 ;
        
        for (i = 2 ; i < x ; i++ ) {
            if ( x % i == 0 ) {
                Prime = 0 ;
                break ;
            }
        }
        
        if (Prime == 1) {
            printf("%d ",x );
            b ++ ;
        }
        x ++ ;
    }
    
    printf("\n");
    
    return 0;
    
}
