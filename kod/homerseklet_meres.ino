#include <DHT.h>

#define DHTPIN 2
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature();

  Serial.print("Homerseklet: ");
  Serial.print(temperature);
  Serial.println(" C");

  Serial.print("Paratartalom: ");
  Serial.print(humidity);
  Serial.println(" %");

  delay(2000);
}
