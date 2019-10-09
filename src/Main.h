

#ifndef MAIN_H
#define MAIN_H

//Includes
#include <wiringPi.h>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <wiringPiSPI.h>
#include <mcp3004.h>
#include <unistd.h>
#include <math.h>
#include <pthread.h>
#include <iostream>

//Define buttons
#define CHANGE_INTERVAL_BUTTON 1 
#define RESET_TIME_BUTTON 4 
#define DISMISS_ALARM_BUTTON 5 
#define STOP_START_BUTTON 6 



//SPI Settings
#define BASE 100 
#define SPI_CHAN 0// Write your value here
#define SPI_SPEED 200000// Write your value here


//Function definitions
void dismiss_alarm(void);
void reset_time(void);
void change_interval(void);
void start_stop(void);
int setup_gpio(void);
int main(void);


#endif
