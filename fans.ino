#include <DHT.h>;

#define DHTPIN 2
#define DHTTYPE DHT22
DHT dht(DHTPIN, DHTTYPE);

int chk;
float temp;

void setup() {
  Serial.begin(9600);
  pinMode(11, OUTPUT);
  dht.begin();
}

void loop() {
  temp = dht.readTemperature();
  Serial.print(temp);
  Serial.println();
  if(temp < 25){
    digitalWrite(11, 0);
  } else {
   digitalWrite(11, 255); 
  }
  delay(2000);
}
