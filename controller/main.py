import time
import serial

arduino = serial.Serial(port='COM5', baudrate=9600, timeout=.1)

def pushCommand(cmd):
        if cmd == "":
               print("Error: empty command")
               return
        triesLeft = 3
        response = ""
        while(response != "Success: " + cmd):
                if triesLeft < 0:
                     print("Error: no response from arduino")
                     break
                for c in cmd:
                     arduino.write((c).encode())
                arduino.write(("\n").encode())
                response = (arduino.readline()).decode().strip()
                triesLeft -= 1
 
while True:
        cmd = input()
        pushCommand(cmd)