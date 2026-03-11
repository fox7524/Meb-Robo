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

#const int button1 = LOW;
// Maze dimensions
#const int MAZE_SIZE = 16;

// Array to store the "water" distances to the center
int distances[MAZE_SIZE][MAZE_SIZE];

// Array to store wall data (using binary: 1=North, 2=East, 4=South, 8=West)
int walls[MAZE_SIZE][MAZE_SIZE];
int walls2[MAZE_SIZE_2][MAZE_SIZE_2]
// The robot's current position and heading
int currentX = 0; // Starting X coordinate
int currentY = 0; // Starting Y coordinate
int currentHeading = 0; // 0=North, 1=East, 2=South, 3=West


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
// Step 1: Read the Environment
    // Trigger HC-SR04 sensors one by one (Front, Left, Right)
    bool wallFront = checkFrontSensor(); 
    bool wallLeft = checkLeftSensor();
    bool wallRight = checkRightSensor();

    // Step 2: Update the Internal Map
    // Convert relative walls (Front/Left/Right) to absolute walls (North/South/East/West)
    // based on currentHeading, then save to the walls[][] array.
    updateWallsMap(currentX, currentY, wallFront, wallLeft, wallRight);

    // Step 3: Recalculate the Distances (The actual "Flood Fill")
    // If we found new walls, the old shortest path might be blocked. 
    // We must recalculate the "water flow" from the center to our current position.
    updateDistances(); 

    // Step 4: Determine the Best Next Move
    // Look at the accessible neighboring cells (North, South, East, West)
    // and find the one with the LOWEST distance value.
    int nextDirection = findLowestNeighbor(currentX, currentY);

    // Step 5: Execute the Move
    // Turn the chassis to face the nextDirection, then drive forward one cell.
    executeMove(nextDirection);

    // Step 6: Update Position
    // Update currentX and currentY based on the move we just made.
    updatePositionTracker(nextDirection);

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


