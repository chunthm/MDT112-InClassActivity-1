int myNum[5] = {10,20,30,40,50};
int *myPiont = myNum;

void setup(){
    Serial.begin(9600);

    for (int i=0; i<5 ;i++ ) {
    Serial.println("Address " + String(i) + " = " + int(myPiont) + "Value : " + int(myPiont));
    myPiont++;
    }
    Serial.println("-----------------------------------------------------------------------------");
    for (int i=0; i<5 ;i++ ) {
    Serial.println("Address " + String(i) + " = " + int(&myNum[i]) + "Value : " + int(&myNum[i]));
}
}
void loop(){};