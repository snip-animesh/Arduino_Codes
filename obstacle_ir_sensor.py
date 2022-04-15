import pyfirmata,time
irPin=7
arduino = pyfirmata.Arduino("COM4") # change com port
arduino.digital[irPin].mode = pyfirmata.INPUT
it = pyfirmata.util.Iterator(arduino)

it.start()
time.sleep(1) #without sleep it won't work
while True:
    obstacle = arduino.digital[irPin].read() #returns true or false
    time.sleep(1)
    if obstacle:
        print("No obstacle")
    elif not obstacle:
        print("Obstacle found !")