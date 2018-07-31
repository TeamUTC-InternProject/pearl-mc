import tkinter
from tkinter import messagebox
import serial

arduinoData = serial.Serial('com5',9600)

LED_ON = str.encode('1')
LED_OFF = str.encode('2')

def led_on():
    arduinoData.write(LED_ON)

def led_off():
    arduinoData.write(LED_OFF)

led_control_window = tkinter.Tk()
Button = tkinter.Button
btn = Button(led_control_window, text="Active", command=led_on)
btn1 = Button(led_control_window, text="Passive", command=led_off)
btn.grid(row=0,column=1)
btn1.grid(row=1, column=1)
led_control_window.mainloop()
