COMPANY : CODTECH IT SOLUTIONS

NAME : BHARAT KUMAR MADDILA

INTERN ID : CT04DF2079

DOMAIN : INTERNET OF THINGS

DURATION : 4 WEEKS

MENTOR : NEELA SANTOSH

For the fourth task of my IoT internship at CodTech, I developed an Air Quality Monitoring System using an ESP32 microcontroller, an MQ2 gas sensor, and the ThingSpeak cloud platform. The main goal of this task was to create a smart system that could monitor the air quality in real time and send the data to a cloud-based dashboard. This allows users to keep track of pollution levels from anywhere using just an internet connection. I used the Wokwi online simulator to build and test this system virtually, which helped me complete the task without needing physical components.

In my circuit, I connected the MQ2 gas sensor to the ESP32 board. The sensor was used to detect gases in the environment and produce an analog output based on the gas concentration. I connected the sensor’s analog output (AO) to the A0 pin (GPIO36) on the ESP32. The power and ground pins of the sensor were connected to the 3.3V and GND pins of the ESP32, respectively. The MQ2 sensor detects gases like smoke, propane, and methane, and provides a numeric value that reflects the air quality. Higher values indicate more gas presence in the air, while lower values mean cleaner air.

Once the hardware connections were made, I wrote a program in Arduino code to read the analog values from the MQ2 sensor and send them to the ThingSpeak platform using Wi-Fi. ThingSpeak is a cloud service that allows IoT devices to send data and view it as a graph in real-time. I created a ThingSpeak account and set up a new channel with one field labeled "Air Quality." I added the API key and channel ID to my code, which helped the ESP32 send sensor data to the correct channel every 5 seconds. I used Wokwi’s simulated Wi-Fi network (Wokwi-GUEST) to run the code, and I was able to see the live gas readings appear on the ThingSpeak dashboard as a line graph.

This task gave me practical experience in building a complete IoT system that collects, processes, and visualizes environmental data. I learned how to simulate sensors, write Arduino code, and use cloud platforms like ThingSpeak. The graph on ThingSpeak showed how gas levels changed over time, and this helped me understand how air quality monitoring works in real life. In actual use, this system can be installed in homes, schools, or offices to continuously monitor pollution and provide early warnings if the air becomes unhealthy. Task 4 helped me understand the real-world importance of air quality systems and how IoT can make such systems smarter and more accessible
