#include <WiFi.h>
#include <ThingSpeak.h>

const char* ssid = "Wokwi-GUEST";
const char* password = "";

WiFiClient client;
unsigned long channelID = 2998214;
const char* writeAPIKey = "PEP2CAJ8NOLIK56Y";

void setup() {
  Serial.begin(115200);
  WiFi.begin(ssid, password);
  ThingSpeak.begin(client);

  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Connecting to WiFi...");
  }

  Serial.println("WiFi connected!");
}

void loop() {
  int airValue = analogRead(A0);

  Serial.print("Air Quality (simulated): ");
  Serial.println(airValue);

  int response = ThingSpeak.writeField(channelID, 1, airValue, writeAPIKey);

  if (response == 200) {
    Serial.println("Data sent to ThingSpeak!");
  } else {
    Serial.println("Failed to send data. Error: " + String(response));
  }

  delay(5000);
}