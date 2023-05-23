#include <CapacitiveSensor.h>
#define buzzer 11

// Set the Send Pin & Receive Pin
CapacitiveSensor cs_12_3 = CapacitiveSensor(12, 3);
CapacitiveSensor cs_12_4 = CapacitiveSensor(12, 4);
CapacitiveSensor cs_12_5 = CapacitiveSensor(12, 5);
CapacitiveSensor cs_12_6 = CapacitiveSensor(12, 6);

void setup() {
  // Turn off auto calibrate.
  cs_12_3.set_CS_AutocaL_Millis(0xFFFFFFFF);
  cs_12_4.set_CS_AutocaL_Millis(0xFFFFFFFF);
  cs_12_5.set_CS_AutocaL_Millis(0xFFFFFFFF);
  cs_12_6.set_CS_AutocaL_Millis(0xFFFFFFFF);

}

void loop() {
  // Set the sensitivity of the sensors.
  long touch1 =  cs_12_3.capacitiveSensor(5000);
  long touch2 =  cs_12_4.capacitiveSensor(5000);
  long touch3 =  cs_12_5.capacitiveSensor(5000);
  long touch4 =  cs_12_6.capacitiveSensor(5000);
   // When we touched the sensor, the buzzer will produce a tone.
  if (touch1 > 1000){
    tone(buzzer,250);
    } 
  if (touch2 > 1000){
    tone(buzzer,550);
    } 
  if (touch3 > 1000){
    tone(buzzer,650);
  }
  if (touch4 > 1000){
    tone(buzzer, 800);
  }

  if (touch1<=5000  &  touch2<=5000  &  touch3<=5000   & touch4<=5000)
    noTone(buzzer);
  delay(10); 
}
