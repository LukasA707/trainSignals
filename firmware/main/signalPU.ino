
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

    void proceed() {
      digitalWrite(yellow1, 0)
      digitalWrite(yellow2, 0)
      digitalWrite(yellow3, 0)
      digitalWrite(yellow4, 0)
      digitalWrite(red, 0);
      digitalWrite(green, 1);
    }

    void proceed_through() {
      // blink green led;
    }

    void stop() {
      digitalWrite(yellow1, 0)
      digitalWrite(yellow2, 0)
      digitalWrite(yellow3, 0)
      digitalWrite(yellow4, 0)
      digitalWrite(red, 1);
      digitalWrite(green, 0);
    }

    void stop_and_proceed() {
      // blink red led;
    }

    void passing_prohibited() {
      digitalWrite(yellow1, 0)
      digitalWrite(yellow2, 0)
      digitalWrite(yellow3, 1)
      digitalWrite(yellow4, 1)
      digitalWrite(red, 0);
      digitalWrite(green, 0);
    }

    void cautious_passing_allowed() {
      digitalWrite(yellow1, 0)
      digitalWrite(yellow2, 1)
      digitalWrite(yellow3, 1)
      digitalWrite(yellow4, 0)
      digitalWrite(red, 0);
      digitalWrite(green, 0);
    }

    void passing_allowed() {
      digitalWrite(yellow1, 1)
      digitalWrite(yellow2, 0)
      digitalWrite(yellow3, 1)
      digitalWrite(yellow4, 0)
      digitalWrite(red, 0);
      digitalWrite(green, 0);
    }

    void signal_canceled() {
      digitalWrite(yellow1, 1)
      digitalWrite(yellow2, 0)
      digitalWrite(yellow3, 0)
      digitalWrite(yellow4, 1)
      digitalWrite(red, 0);
      digitalWrite(green, 0);
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