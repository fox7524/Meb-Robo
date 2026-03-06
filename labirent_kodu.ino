//Labirent kodu
//BY fox

#include <SPI.h>
#include <Servo.h>
#include <Wire.h>

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
#const int FR_IN1 = 15;
#const int FR_IN2 = 16;
#const int FR_PWM = 17;
 //sol ön motor pin-isim atamaları
#const int FL_IN1 = 18;
#const int FL_IN2 = 19;
#const int FL_PWM = 20;
//sağ arka motor pin-isim atamaları
#const int RR_IN1 = 21;
#const int RR_IN2 = 22;
#const int RR_PWM = 23;
//sol arka motor pin-isim atamaları
#const int RL_IN1 = 24;
#const int RL_IN2 = 25;
#const int RL_PWM = 26;



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
//sağ ön motor kontrol pinleri
pinMode(FR_IN1);
pinMode(FR_IN2);
pinMode(FR_PWM);
//sol ön motor kontrol pinleri
pinMode(FL_IN1);
pinMode(FL_IN2);
pinMode(FL_PWM);
//Sağ arka motor kontrol pinleri
pinMode(RR_IN1);
pinMode(RR_IN2);
pinMode(RR_PWM);
//sol arka kontrol pinleri
pinMode(RL_IN1);
pinMode(RL_IN2);
pinMode(RL_PWM);
}

void loop() {

    
}


void searcher(){


}

void ileri(){
digitalWrite(FR_IN1, HIGH);
digitalWrite(FL_IN1, HIGH);
digitalWrite(RR_IN1, HIGH);
digitalWrite(RL_IN1, HIGH);

digitalWrite(FR_IN1, LOW);
digitalWrite(FL_IN1, LOW);
digitalWrite(RR_IN1, LOW);
digitalWrite(RL_IN1, LOW);

analogWrite(FR_PWM, 255);
analogWrite(FR_PWM, 255);
analogWrite(FR_PWM, 255);
analogWrite(FR_PWM, 255);

}

void geri(){
digitalWrite(FR_IN1, LOW);
digitalWrite(FL_IN1, LOW);
digitalWrite(RR_IN1, LOW);
digitalWrite(RL_IN1, LOW);

digitalWrite(FR_IN1, HIGH);
digitalWrite(FL_IN1, HIGH);
digitalWrite(RR_IN1, HIGH);
digitalWrite(RL_IN1, HIGH);

analogWrite(FR_PWM, 255);
analogWrite(FR_PWM, 255);
analogWrite(FR_PWM, 255);
analogWrite(FR_PWM, 255);

}
void sol(){


    
}
void sag(){

    
}
void sag360(){

    
}
void sol360(){

    
}

void sagon(){
digitalWrite(FR_IN1, HIGH);
digitalWrite(FR_IN1, HIGH);

analogWrite(FR_PWM, 255);
    
}
void solon(){
digitalWrite(FR_IN1, HIGH);
digitalWrite(FR_IN1, HIGH);

analogWrite(FR_PWM, 255);
    
}
void sagarka(){
digitalWrite(FR_IN1, HIGH);
digitalWrite(FR_IN1, HIGH);

analogWrite(FR_PWM, 255);

}
void solarka(){
digitalWrite(FR_IN1, HIGH);
digitalWrite(FR_IN1, HIGH);

analogWrite(FR_PWM, 255);

}

