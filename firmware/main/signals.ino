int blinkRate = 500;

class Signal2LED {
  private:
    int red;
    int green;
    String state;
  public:
    Signal2LED(int red_, int green_)
    {
      Serial.println("constructor");
      Serial.println(green_);
      red = red_;
      green = green_;
      Serial.println(green_);
      pinMode(red, OUTPUT);
      pinMode(green, OUTPUT);
    }

    void go() {
      digitalWrite(red, 0);
      digitalWrite(green, 1);
    }

    void go_through() {
      
    }

    void stop() {
      digitalWrite(green, 0);
      digitalWrite(red, 1);
    }

    void stop_and_move_forward() {

    }

    void off() {
      digitalWrite(green, 0);
      digitalWrite(red, 0);
    }
};

class SignalPU {
  private:
    int yellow1;
    int yellow2;
    int yellow3;
    int yellow4;
    int red;
    int green;
  public:
    SignalPU(
      int yellow1, 
      int yellow2,
      int yellow3,
      int yellow4,
      int red,
      int green
    ) {
      yellow1 = yellow1;
      yellow2 = yellow2;
      yellow3 = yellow3;
      yellow4 = yellow4;
      red = red;
      green = green;
      pinMode(yellow1, OUTPUT);
      pinMode(yellow2, OUTPUT);
      pinMode(yellow3, OUTPUT);
      pinMode(yellow4, OUTPUT);
      pinMode(red, OUTPUT);
      pinMode(green, OUTPUT);
    }

    void go() {

    }

    void go_through() {

    }

    void stop() {

    }

    void stop_and_move_forward() {

    }

    void passing_prohibited() {

    }

    void cautious_passing_allowed() {

    }

    void passing_allowed() {

    }

    void signal_canceled() {

    }

    void off() {
      digitalWrite(yellow1, 0);
      digitalWrite(yellow2, 0);
      digitalWrite(yellow3, 0);
      digitalWrite(yellow4, 0);
      digitalWrite(red, 0);
      digitalWrite(green, 0);
    }
};