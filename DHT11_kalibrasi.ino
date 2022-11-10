#include <DHT.h>
#include <DHT_U.h>
DHT dht(6, DHT11); //Pin, Jenis DHT

void setup(){
 Serial.begin(9600);
 dht.begin();
}

void loop(){
 float suhu = dht.readTemperature();
 float hasil = dht.readTemperature();
 Serial.print("suhu : ");
 Serial.println(suhu);

 hasil = 0.2526*suhu + 23.42;
 Serial.print("hasil suhu : ");
 Serial.println(hasil);
 
  delay(1000);
}
