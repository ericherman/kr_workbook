/* visitab.c
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
/* compress regions of whitespace to a single blank */
main()
{
	int c;

	while ((c = getchar()) != EOF) {
		switch (c) {
		case '\t':
			printf(">\b-");
			break;
		case '\b':
			printf("<\b-");
			break;
		default:
			printf("%c", c);
		}
	}
}
