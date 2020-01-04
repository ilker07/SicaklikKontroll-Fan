float sicaklik; 
float deger; 
int lm35pin=A0;  
int motor=3;


void setup () {
  Serial.begin(9600); 
  pinMode(motor,OUTPUT);
}

void loop () {
 deger = analogRead(lm35pin); //A0 dan analog veri okundu.
 deger = (deger/1023)*5000; //mv a çevirme işlemi.
 sicaklik = deger/10;  // celcius.


 if (sicaklik>=24 && sicaklik<=26)
 {
  analogWrite(motor,50);
 }

  if (sicaklik>26 && sicaklik<=29)
 {
  analogWrite(motor,90);
 }
  else if (sicaklik>29 && sicaklik<=32)
 {
  analogWrite(motor,150);
 }
 else if (sicaklik>32 )
 {
  
   
   analogWrite(motor,255);
 }
 else  
 {
  analogWrite(motor,0);
 }
delay(1500);
}
