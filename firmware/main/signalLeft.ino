
class SignalLeft {
  private:
    int yellow;
    int red;
    int green;
  public:
    SignalLeft(
      int yellow1, 
      int yellow2,
      int yellow3,
      int red,
      int green
    ) {
      yellow1 = yellow1;
      yellow2 = yellow2;
      yellow3 = yellow3;
      red = red;
      green = green;
      pinMode(yellow1, OUTPUT);
      pinMode(yellow2, OUTPUT);
      pinMode(yellow3, OUTPUT);
      pinMode(red, OUTPUT);
      pinMode(green, OUTPUT);
    }

    void proceed() {
      digitalWrite(yellow2, 0);
      digitalWrite(yellow3, 0);
      digitalWrite(red, 0);
      digitalWrite(green, 1);
      digitalWrite(yellow1, 1);
    }

    void stop() {
      digitalWrite(yellow2, 0);
      digitalWrite(yellow3, 0);
      digitalWrite(green, 0);
      digitalWrite(red, 1);
      digitalWrite(yellow1, 1);
    }

    void passing_prohibited() {
      digitalWrite(green, 0);
      digitalWrite(red, 0);
      digitalWrite(yellow1, 0);
      digitalWrite(yellow2, 1);
      digitalWrite(yellow3, 1);
    }

    void off() {
      digitalWrite(yellow1, 0);
      digitalWrite(yellow2, 0);
      digitalWrite(yellow3, 0);
      digitalWrite(red, 0);
      digitalWrite(green, 0);
    }
};