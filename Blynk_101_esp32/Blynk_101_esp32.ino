/* Please note that this is an examople code from https://examples.blynk.cc/?board=ESP32&shield=ESP32%20WiFi&example=GettingStarted%2FBlynkBlink 

    You’ll need:
   - Blynk App (download from AppStore or Google Play)
   - ESP32 board
   - Decide how to connect to Blynk
     (USB, Ethernet, Wi-Fi, Bluetooth, ...)

  There is a bunch of great example sketches included to show you how to get
  started. Think of them as LEGO bricks  and combine them as you wish.
  For example, take the Ethernet Shield sketch and combine it with the
  Servo example, or choose a USB sketch and add a code from SendData
  example.
  
 *************************************************************/
 

#define BLYNK_PRINT Serial

#include <WiFi.h>  
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>

// You should get Auth Token in the Blynk App or from your emai -------------------- Replace ABCD with your info
char auth[] = "ABCD";

// Enter your WiFi name and password  --------------------------
char ssid[] = "ABCD";
char pass[] = "ABCD";

void setup()
{
  // Debug console
  Serial.begin(9600);  // rate (9600bps) at which the board sends data

  Blynk.begin(auth, ssid, pass); // connecting to wifi and Blynk project
  // You can also specify server:
  //Blynk.begin(auth, ssid, pass, "blynk-cloud.com", 80);
  //Blynk.begin(auth, ssid, pass, IPAddress(192,168,1,100), 8080);
}

void loop()
{
  Blynk.run();

}
