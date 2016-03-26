/* print Celsius-Fahrenheit table
     for c = -20, -10, ..., 150 */
main()
{
	int lower, upper, step;
	float fahr, celsius;

	lower = -20;	/* lower limit of temperature table */
	upper = 150;	/* upper limit */
	step = 10;	/* step size */

	printf("cels fahrenheit\n");
	celsius = lower;
	while (celsius <= upper) {
		fahr = (9.0/5.0) * celsius + 32;
		printf("%4.0f %4.0f\n", celsius, fahr);
		celsius = celsius + step;
	}
}
