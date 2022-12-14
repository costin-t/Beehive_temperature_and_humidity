# Beehive_temperature_and_humidity

## Publication in Romania Apicola no 12/2021
  
  The project presents the creation of a monitoring sensor and a case study monitoring a hive.
  
  The importance of temperature monitoring is to observe the moment when the bees start to grow brood. At that moment the temperature will increase to 35 C. To increase the temperature, the bees have to consume a lot of food. And this implies the intervention of the beekeeper to supplement with food if the family does not have enough reserves.
Humidity in the beehive is both beneficial and destructive among the benefits brought to the bee family we can list: it helps the secretion of royal jelly to raise the larvae, it helps to cool the honeycombs during transport. But the most problematic is excess humidity because it causes diseases.
It takes an experienced beekeeper to detect the impending signals of bees, and constantly opening a hive to check their condition often disturbs the bees.
External monitoring can solve these problems.

# Hardware requirements:

 - Arduino nano v3;
 - Display oled 0.96;
 - DHT 22;
 - Dupont wire;
 - USB cable AM - B;
 - External battery; 
 
# Software required:
   - Arduino IDE;
   - CDM-2.08.28-WHQL-Certified1;
   - CH34x_Install_Windows_v3_4;
   
1. The following libraries must be installed in Arduino IDE: 
 - DHT sensor library
 - Adafruit SSD1306
 - Adafruit GFX Library
 
2. Requires detection of the I2C address for the display:
 - I2C scanner is used and loaded into Arduino;
 
In the present case, the I2C address is: 0x3C;

3. Arduino program settings
     Tools = Board"Arduino Nano"
Processor = “ATmega328P (Old Bootloader);
       Port = COM3
Programmer = "Arduino as ISP"
(The port is COM3, the port is tested by re-entering
usb in the computer and checking in Device Manager)

# Connecting the arduino components: 

The DHT22 sensor connects:
   + = D10
Out = D7
   - = GND
Connecting the OLED display:
GND = GND
VDC = 5V
SCL = A5
SDA = A4
The Arduino board will connect via usb cable to a power source with a USB AM - B cable

The use of storage space and dynamic memory after compiling.
![image](https://user-images.githubusercontent.com/104298934/207472359-cf45b755-5ccd-4c94-bb1c-75107169fd38.png)
![image](https://user-images.githubusercontent.com/104298934/207472821-be9e864d-a589-4cb0-a3d7-984153b8009c.png)
![image](https://user-images.githubusercontent.com/104298934/207472845-ba4de80d-995f-414a-92af-91e573cdef6c.png)





