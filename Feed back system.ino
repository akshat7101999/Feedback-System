int pushButton2 = 2;
int pushButton3 = 3;
int pushButton4 = 4;
int pushButton5 = 5;
int pushButton6 = 6;

int arr[100] = {};
int arr1[100] = {};
int arr2[100] = {};
int count = 0;
int i=0;
int j=0;
int k=0;
int sum=0;
int sum1=0;
int sum2=0;
int x=0;
int y=0;
float percent=0;
int z=0;
//int summ=0;
//int boundary, percent, boundary2=0;


// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(115200);
  // make the pushbutton's pin an input:
  pinMode(pushButton2, INPUT);
  pinMode(pushButton3, INPUT);
  pinMode(pushButton4, INPUT);
  pinMode(pushButton5, INPUT);
  pinMode(pushButton6, INPUT);
  
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input pin:
  int buttonState2 = digitalRead(pushButton2);
  int buttonState3 = digitalRead(pushButton3);
  int buttonState4 = digitalRead(pushButton4);
  int buttonState5 = digitalRead(pushButton5);
  int buttonState6 = digitalRead(pushButton6);
  delay(2000);
  // print out the state of the button:
  Serial.println(buttonState2);
  delay(1000);        // delay in between reads for stability
  Serial.println(buttonState3);
  delay(1000);        // delay in between reads for stability
  Serial.println(buttonState4);
  delay(1000);        // delay in between reads for stability
  Serial.println(buttonState5);
  delay(1000);        // delay in between reads for stability

  while (digitalRead(pushButton5)== HIGH) {
    if (digitalRead(pushButton2)== HIGH){
      
      
 
        arr[i] = -1;
        i=i+1;
        count = count + 1;
        x=i;
        Serial.println("B2 wait 2 seconds");
        delay(8000);
        Serial.println("now press");
        
 }
    else if (digitalRead(pushButton3)== HIGH){
        arr1[j] = 0;
        j=j+1;
        count = count + 1;
        y=j;
        Serial.println("B3 wait 2 seconds");
        delay(8000);
        Serial.println("now press");
      
      
      }
    else if (digitalRead(pushButton4)== HIGH){
        arr2[k] = 1;
        k=k+1;
        count = count + 1;
        z=k;
        Serial.println("B4 wait 2 seconds");
        delay(8000);
        Serial.println("now press");
      
      
      }
     
    
  }
  
  while(digitalRead(pushButton6)== HIGH){
  int i=0;
  int j=0;
  int k=0;
  
  
  while (i<x){
      sum = sum + arr[i];
      i=i+1;}
  while(j<y){
    

      sum1=sum1 +arr1[j];
      j=j+1;}

  while(k<z){

      sum2=sum2 +arr2[k];
      k=k+1;}

  float summ = (float)(sum+sum1+sum2);
  Serial.println(summ);
  percent = (float)((summ/count)*100);
  Serial.println(percent);
  float boundary = (float)(66.6);
  float boundary2 = (float)(-33.4);
  Serial.println(count);

  if(percent < -33.4){
    Serial.println("The average of service is bad");
    }
  else if(-33.4 <percent< 33.2){
    Serial.println("The average of service is satisfactory");
    }
  else if(percent>33.2){
    Serial.println("The average of service is excellent");
    }delay(100000000);
  }   
  
}
