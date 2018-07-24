//I HAVE COMMENTED OUT MOST OF THE CODE SIMPLY BECAUSE I WANT TO BE ABLE TO RUN THE SIMPLE PYTHON PROGRAM TO 
//GIVE THE USER THE ABILITY TO CLICK A BUTTON AND TURN AN LED ON, AND CLICK ANOTHER BUTTON TO TURN IT OFF


//#include <SD.h>
//#include <arm_math.h>
int pin = 13;
char serialData;

void setup() {
  // put your setup code here, to run once:
  pinMode(pin, OUTPUT);
  Serial.begin(9600);
}

//int detect(int ADC_val)
//{
//  int classif_num = classify(ADC_val);
//  contactGUI(classif_num);
//  return classif_num;
//}

//int classifySignal(int ADC_val)
//{
//  /*Series of if statements here*/
//  return 0;
//}
//
//
//void contactGUI(int classif_num)
//{
//  /*Establish connection with the website or the server?*/
//  Serial.println(String(classif_num));
//  delay(1000);
//  Serial.flush();
//  sdWrite(classif_num);
//}
//
//void sdWrite(int classif_num)
//{
//  Serial.print("Initializing SD card...");
//
//  if (!SD.begin(4)) {
//    Serial.println("initialization failed!");
//    while (1);
//  }
//  Serial.println("initialization done.");
//
//  // open the file. note that only one file can be open at a time,
//  // so you have to close this one before opening another.
//  myFile = SD.open("test.txt", FILE_WRITE);
//
//  // if the file opened okay, write to it:
//  if (myFile) {
//    Serial.print("Writing to test.txt...");
//    /*Must convert classif_num to string*/
//    itoa(classif_num, classif_str, 10);
//    myFile.println(classif_num);
//    // close the file:
//    myFile.close();
//    Serial.println("done.");
//  } else {
//    // if the file didn't open, print an error:
//    Serial.println("error opening test.txt");
//  }
//
//}

void loop() {
  // put your main code here, to run repeatedly:
   
   //Will we get info from the GUI like this?
   if (Serial.available() > 0)
   {
    serialData = Serial.read();
   }
  
  if (serialData == '1') {
    digitalWrite(pin, HIGH);
//    int retVal = classifySignal(ADC_val);
//    //Send retVal to GUI
//    contactGUI(retVal);
  } else if (serialData == '2') {
    digitalWrite(pin, LOW);
//    int readDataResult = readData();
  }

}
