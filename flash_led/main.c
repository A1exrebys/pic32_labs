#include <plib.h>

/*
 * Main fucntion
 */
int main()
{
	/*
	 * Init port
	 */
	TRISE = 0;

	/*
	 * Infinite loop
	 */
	while( 1)
	{
	/*
	 * Flash led
	 */
	PORTE = 1 << 7;
	}
}
