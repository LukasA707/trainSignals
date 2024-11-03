int blinkRate = 500;

class Signal4LED {
  private:
    int red;
    int green1;
    int green2;
    int yellow;
  public:
    Signal4LED(int red_, int green1_, int green2_, int yellow)
    {
      red = red_;
      green1 = green1_;
      green2 = green2_;
      yellow = yellow_;
      pinMode(red, OUTPUT);
      pinMode(green1, OUTPUT);
      pinMode(green2, OUTPUT);
      pinMode(yellow, OUTPUT);
    }

    void proceed() {
      digitalWrite(red, 0);
      digitalWrite(green1, 1);
      digitalWrite(green2, 0);
      digitalWrite(yellow, 0);
    }

    void proceed_at_reduced_speed() {
      digitalWrite(red, 0);
      digitalWrite(green2, 0);
      digitalWrite(green1, 1);
      digitalWrite(yellow, 1);
    }

    void proceed_through() {
      digitalWrite(red, 0);
      digitalWrite(green1, 1);
      digitalWrite(green2, 1);
      digitalWirte(yellow, 0);
    }

    void stop() {
      digitalWrite(green1, 0);
      digitalWrite(green2, 0)
      digitalWrite(red, 1);
      digitalWrite(yellow, 1);
    }

    void stop_and_proceed() {
        // light yellow led
        // blink red led
    }

    void off() {
      digitalWrite(green1, 0);
      digitalWrite(green2, 0);
      digitalWrite(red, 0);
      digitalWrite(yellow, 0);
    }
};