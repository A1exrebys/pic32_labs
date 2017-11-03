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
	TRISD = 1 << 5;

	/*
	 * Infinite loop
	 */
	while( 1)
	{
	/*
	 * Flash led
	 */
	PORTE = 1 << 7;

		if (PORTD & (1 << 5)) {
			PORTE = 0xFF;
		}
	}
}
