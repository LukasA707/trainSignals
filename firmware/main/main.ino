#include<signals.ino>

String inData;

// class SignalList {
//   private:
//     int i = 0;
//     int length = 8;
//     Signal array[8];
//   public:
//     void addSignal(Signal signal) {
//       i += 1;
//       if (i == length) {
//         Signal temp[length] = this.array;
//         this.array = Signal array[length * 2];
//       }
//       this.array[i] = signal;
//     }

//     void removeSignal(Signal signal) {

//     }

//     void contains(Signal signal) {

//     }
// };

Signal2LED KBH_AM_1(10, 11);

void setup() {
  Serial.begin(9600);
  Serial.println("<Arduino is ready>");
}

void loop() {
  
  while (Serial.available())
  {
    char recieved = Serial.read(); 

    // Process message when new line character is recieved
    if (recieved == '\n') 
    {              
      if (inData == "green") {
        KBH_AM_1.go();
      }
      else if (inData == "red") {
        KBH_AM_1.stop();
      }
      else if (inData == "off") {
        KBH_AM_1.off();
      }
      Serial.println("Success: " + inData);
    } else {
      inData += recieved;
    }
  }
  inData = "";
  delay(25);
}