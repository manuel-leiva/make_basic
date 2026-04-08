# include <stdio.h>
int my_function( int number ) {
	printf ( "%s:%d %d\n", __FUNCTION__, __LINE__, number );
return 0;
}
