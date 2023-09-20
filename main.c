#include "libft.h"
#include <stdio.h>

int main() {

    int array [] = { 54, 85, 20, 63, 21 };
    size_t size = sizeof(int) * 5;
    int length;

    /* Display the initial values */
    for( length=0; length<5; length++) {
        printf( "%d ", array[ length ] );
    }
    printf( "\n" );

    /* Change the memory bloc */
    void * ptr = ft_memset( array, 1, size );

    /* Display the new values */
    for( length=0; length<5; length++) {
        printf( "%d ", array[ length ] );
    }
	ptr++;
    printf( "\n" );
    
    return 0;
}
