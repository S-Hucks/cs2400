# Author: Nasseef Abukamail
#   Date: 2018-11-28
#
# Makefile for the rectangle project
# All commands under the rules must start with a tab

#Variables
CFLAGS = -Wall -std=c++11
CC = g++
#Linking all the files
#Create the executable program "rectangle-main"
a.out: rectangle_main.o rectangle.o
	$(CC) $(CFLAGS) rectangle.o rectangle_main.o

rectangle.o: rectangle.cc rectangle.h
	$(CC) -c $(CFLAGS) rectangle.cc

rectangle_main.o: rectangle_main.cc rectangle.h
	$(CC) -c $(CFLAGS) rectangle_main.cc

# remove all the object and executable files
clean:
	rm -f rectangle_main.o rectangle.o a.out
