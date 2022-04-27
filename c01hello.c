/*
 * c01hello.c
 * 
 * Copyright 2022  <pi@raspberry>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	printf("Helllo C...\n");
	printf("Helllo C...%s\n","kim");
	printf("Helllo C...%5s\n","kim");
	printf("Helllo C...%c\n",'A');
	printf("Helllo C...%d\n",100);
	printf("Helllo C...%f\n",3.141592);
	printf("Helllo C...%.2f\n",3.141592);
	return 0;
}

