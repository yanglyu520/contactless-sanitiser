## Background and Purpose Statement

Having many people pressing the bottle of hand sanitizer by hand, it could put potential danger in virus contamination, especially in public places like shops, or even at home.I want to have a device that could turn a normal hand sanitizer to a contactless automatic hand sanitizer.

Make the hand sanitizer bottle bought from supermarket to be contactless and automatic hand sanitizer that triggers when hands approach the bottle.

## Schema

The project uses an ultrasonic sensor to detect the approach of user's hands to activate the servo motor. This servo will then press the plunger of the handwash bottle thus dispensing the soap.

![alt text](../images/schema.png)

## Bill of Materials:

1.Servo motor: MG995 High Speed Digital 12kg Metal Gear Servo

2.Arduino UNO Board

3.Ultrasonic Sensor

4.Breadboard

5.Wires

6.Copper

7.Hot Glue Gun

## Instructions on how to assemble as demonstrated.

### Step1: Watch the video

Please watch my video on youtube:
https://youtu.be/WFEjHkKJ7jo

### Step2: Purchase all equipments as listed in the bills of materials

### Step3: Understand the connections and schemas

Let's Understand the schema and logic of different components before we start making it. We will need a system that will create a force to push the nozzle down and dispense the liquid. The easiest way to do so is to use a powerful servo motor that creates a downward force to pull the nozzle down. After multiple tests, I know this is the easiest way to set up this system. Please pay attention to the force of the motor servo and buy what the same one.

### Step 4: Connect arduino to the servo and sensors as illustrated

#### Servo

- Signal servo1 = 9;
- Vcc to Vin
- Gnd to Gnd

#### Sensor

- Trigger to D10
- Echo to D11
- Vcc to Vcc
- Gnd to Gnd

If you have trouble, please refer to the schema illustration above.

### Put the rest of the pieces together

1. make two holes on the nozzle of the bottle and use the copper to create a pull string
2. Use the hot glue gun to make the servo stick to a surface that you wish it to stay
3. Use the hot glue gun to make the sanitiser bottle to stick to the surface of any platform or table
4. Use the breadboard to stick the entire sensor on the right side of the bottle.

### Test

1. Connect the arduino to your laptop using a usb cable
2. Clone my folder, and go to the contactless-sanitiser folder and load the code in the arduino IDE.
3. If you do not have the IDE, please download the latest version here: https://www.arduino.cc/en/main/software
4. Verify the code and confirm that there is no bug
5. Load the code to the arduino.
6. Put your hand next to the sensor and there you go.

### notice

1. If the test is successful then you could change the USB cable to a power cable and install this device in the front door of your shop in a shopping mall.
2. In this case, the code will run and whenever a customer comes and she/he does not need to press the bottle and therefore avoid contamination.
