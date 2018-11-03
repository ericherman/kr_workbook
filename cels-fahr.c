/* cels-fahr.c
   Copyright (C) 2016, 2018 Eric Herman <eric@freesa.org>

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

	https://www.gnu.org/licenses/gpl-3.0.txt
 */
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
