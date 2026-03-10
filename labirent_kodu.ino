//Labirent kodu
//BY fox

#include <SPI.h>
#include <Servo.h>
#include <Wire.h>
#include <MPU6050.h>

//hcsr04 pin ad atamaları
#const int HCSR_1 = 2;
#const int HCSR_2 = 3;
#const int HCSR_3 = 4;
#const int HCSR_4 = 5;
//ortak hcsr trig pini
#const int HCSR_TRIG = 6;
//sd kart pin isim atamaları
#const int mosi = ;
#const int miso = ;
#const int sck = ;
#const int scl = ;
//MOTORLAR
//Sağ ön motor pin-isim atamaları
#const int R_IN1 = 15;
#const int R_IN2 = 16;
#const int R_PWM = 17;
 //sol ön motor pin-isim atamaları
#const int L_IN1 = 18;
#const int L_IN2 = 19;
#const int L_PWM = 20;

#const int Starterr = 0;

#define button1 = LOW;



void setup() {

Serial.begin(115200);
Serial.print("Hello guys this is solvex");
    //HCSR ortak TRİG pin seçimi ile pin kalabalığı azaltma
pinMode(HCSR_TRIG, OUTPUT);
//HCSR Echo pinleri okuma pinmode ataması
pinMode(HCSR_1, INPUT);
pinMode(HCSR_2, INPUT);
pinMode(HCSR_3, INPUT);
pinMode(HCSR_4, INPUT);
//SD kart modülü pin atamaları

pinMode(miso, );
pinMode(mosi, );
pinMode(sck, );
pinMode(scl, );

//motor pin atamaları sektörü
//sağ motor kontrol pinleri
pinMode(R_IN1, OUTPUT);
pinMode(R_IN2, OUTPUT);
pinMode(R_PWM, OUTPUT);
//sol motor kontrol pinleri
pinMode(L_IN1, OUTPUT);
pinMode(L_IN2, OUTPUT);
pinMode(L_PWM, OUTPUT);


}

void loop() {
if( int Starterr == 1){
starter()
search_algorithm()
}
    
}

void checker(){
    if(button1 == HIGH){
        int Starter = 1;
    }

}

void starter(){
Serial.print("Starter started");
    delay(1000);

}
void search_algorithm(){


}

void ileri(){
digitalWrite(L_IN1, HIGH);
digitalWrite(R_IN1, HIGH);


digitalWrite(L_IN1, LOW);
digitalWrite(R_IN1, LOW);


analogWrite(L_PWM, 255);
analogWrite(R_PWM, 255);


}

void geri(){
digitalWrite(L_IN1, LOW);
digitalWrite(R_IN1, LOW);


digitalWrite(L_IN1, HIGH);
digitalWrite(R_IN1, HIGH);


analogWrite(L_PWM, 255);
analogWrite(R_PWM, 255);


}
void sag360(){
digitalWrite(L_IN1, HIGH);
digitalWrite(R_IN1, LOW);

digitalWrite(L_IN1, LOW);
digitalWrite(R_IN1, HIGH);

analogWrite(L_PWM, 255);
analogWrite(R_PWM, 255);

    
}
void sol360(){

digitalWrite(L_IN1, LOW);
digitalWrite(R_IN1, HIGH);

digitalWrite(L_IN1, HIGH);
digitalWrite(R_IN1, LOW);

analogWrite(L_PWM, 255);
analogWrite(R_PWM, 255);
    
}

void sag(){
digitalWrite(R_IN1, HIGH);
digitalWrite(R_IN1, HIGH);

analogWrite(R_PWM, 255);
    
}
void sol(){
digitalWrite(L_IN1, HIGH);
digitalWrite(L_IN1, HIGH);

analogWrite(L_PWM, 255);
    
}


