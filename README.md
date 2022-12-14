# Beehive_temperature_and_humidity

## Publication in Romania Apicola no 12/2021
  
  The project presents the creation of a monitoring sensor and a case study monitoring a hive for 3 months.
  
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
![Untitled](https://user-images.githubusercontent.com/104298934/207473156-5a06bc29-3b20-49a0-9648-7643def6ae24.jpg)
![image](https://user-images.githubusercontent.com/104298934/207473200-99d858be-f73b-4d9a-9303-49ae6f8a0b38.png)

# Association of Beekeepers from Romania - Romania apicola no. December 12, 2021:

![6](https://user-images.githubusercontent.com/104298934/207474115-8883d2c1-ca5e-403a-990e-174abdf6d50e.jpeg)
![8](https://user-images.githubusercontent.com/104298934/207474150-98340cc5-83fe-4dbe-bd78-6b7854811b57.jpeg)
![10](https://user-images.githubusercontent.com/104298934/207474158-0b93a201-4552-4688-b1fe-5c7b1122ef67.jpeg)
![11](https://user-images.githubusercontent.com/104298934/207474168-0aae380b-de8e-476f-b34d-46b5a053e5ea.jpeg)

# The 3-month study: 
 
![1](https://user-images.githubusercontent.com/104298934/207474640-081dd609-4d95-4392-981b-9f84ce942202.jpg)

  Throughout the monitoring period 27.11.2021 - 10.03.2022. The highest temperature in the hive was recorded on 27.11.2021 of 32 °C and the lowest of 4.7 °C during
24.12.2021 and 11.01.2022. The outside temperature recorded a maximum on 27.11.2021 and 10.02.2022 of 14°C. The lowest recorded
being -2 °C recorded on 11.01.2022 and 13.01.2022. It can be seen that after putting the foil over the frames 17.02.2022
the temperature remained constant in the hive even though the outside temperature dropped.

![2](https://user-images.githubusercontent.com/104298934/207474649-5318c16b-c1e4-4098-8b7e-7f35afd3c101.jpg)

  Humidity monitoring was carried out between 27.11.2021 and 13.02.2022. The highest outdoor humidity value was recorded
on 29.12.2021 of 99% due to the fact that it rained and the lowest outdoor humidity was 35% on 31.01.2022. humidity
the maximum recorded in the hive was 91% on 12.12.2021 and the lowest 41% on 27.02.2021.

# Conclusion

  A beekeeper needs a number of tools to carry out his activity, among them
more basic and common being the bee chisel, smoker, bee brush, pliers for removing frames up to
the most complex honey refractometer, elevator for beehives, automatic lines for extracting honey, unit
to remove frames with steam heating, kit for artificial marking of queens with a microscope, sensors
hive monitoring. It takes an experienced beekeeper to detect impending signals
of bees, and constantly opening a hive to check their condition many times
disturb the bees.
The device helps the beekeeper to monitor microclimate parameters. The sensor represents
the device that can detect signals from the physical environment, in the presented case it detects
humidity and temperature. This signal is converted to a readable display at its location.
The sensor can be an indispensable tool for researching the effects of the external environment on the hive
as well as the research of the internal environment of the hive correlated with the bee harvesting periods.
