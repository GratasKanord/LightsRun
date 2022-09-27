const int led1=23; 
const int led2=22; 
const int led3=21; 
const int led4=4; 
const int buttonRun=35; 
const int buttonStop=34; 
int buttonRunState = 0; 
int buttonStopState = 0; 
long currentTime;
 
void setup() { 
  pinMode(led1, OUTPUT); 
  pinMode(led2, OUTPUT); 
  pinMode(led3, OUTPUT); 
  pinMode(led4, OUTPUT); 
  pinMode(buttonRun, INPUT); 
  pinMode(buttonStop, INPUT); 
  Serial.begin(115200);
 
} 
 
void loop() {  
  buttonRunState = digitalRead(buttonRun); 
  buttonStopState = digitalRead(buttonStop);   
   
  if (buttonRunState == 1) { 
    while(buttonStopState == 0){
      startLights:
      digitalWrite(led1, HIGH); 
      currentTime = millis();
      while (millis() < (currentTime + 100)){
        if(digitalRead(buttonStop) == 1){
          lightsOff();  
          goto startLights;  
        }
      }
      
      digitalWrite(led2, HIGH); 
      currentTime = millis();
      while (millis() < (currentTime + 100)){
        if(digitalRead(buttonStop) == 1){
          lightsOff();  
          goto startLights;          
        }
      }

      digitalWrite(led3, HIGH); 
      currentTime = millis();
      while (millis() < (currentTime + 100)){
        if(digitalRead(buttonStop) == 1){
          lightsOff();    
          goto startLights;        
        }
      }
      
      digitalWrite(led4, HIGH); 
      currentTime = millis();
      while (millis() < (currentTime + 100)){
        if(digitalRead(buttonStop) == 1){
          lightsOff();     
          goto startLights;       
        }
      }
 
      digitalWrite(led1, LOW); 
      currentTime = millis();
      while (millis() < (currentTime + 100)){
        if(digitalRead(buttonStop) == 1){
          lightsOff(); 
          goto startLights;           
        }
      }

      digitalWrite(led2, LOW); 
      currentTime = millis();
      while (millis() < (currentTime + 100)){
        if(digitalRead(buttonStop) == 1){
          lightsOff();  
          goto startLights;          
        }
      }
      
      digitalWrite(led3, LOW); 
      currentTime = millis();
      while (millis() < (currentTime + 100)){
        if(digitalRead(buttonStop) == 1){
          lightsOff();  
          goto startLights;          
        }
      }
      
      digitalWrite(led4, LOW); 
      currentTime = millis();
      while (millis() < (currentTime + 100)){
        if(digitalRead(buttonStop) == 1){
          lightsOff();  
          goto startLights;          
        }
      }
    }
  }
}

void lightsOff(){
  digitalWrite(led4, LOW); 
  digitalWrite(led3, LOW); 
  digitalWrite(led2, LOW); 
  digitalWrite(led1, LOW); 
  while(digitalRead(buttonRun) == 0){
  }  
}