# arduino Serial Logger

A simple script to read data from a connected arduino and log it to a file for further data analysis. 

The script tries to find a connected arduino, but also prompts the user for the correct serial-port, baudrate and filename. 


# How to use

The script reads `Serial.print();` messages and logs anything between a `<` and a `>`. The messages to be loggedcanbe split between multiple `Serial.print();`s

The file `serialLoggingExample` illustrates how to sends data from the arduino so the script will log it. 

NOTE: Starting the script will reset the arduino. The script won't work if the serial connection is already in use, fx. if the serial monitor is open. 


# Prerequisites

Python 3

---

Based on [Robin2's](https://forum.arduino.cc/u/Robin2) post on sending and receiving data between arduino and computer over the [serial connection](https://forum.arduino.cc/t/demo-of-pc-arduino-comms-using-python/219184/5#msg1810764). 
