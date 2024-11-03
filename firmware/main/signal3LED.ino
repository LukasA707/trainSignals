int blinkRate = 500;

class Signal3LED {
  private:
    int red;
    int green1;
    int green2;
  public:
    Signal3LED(int red_, int green1_, int green2_)
    {
      red = red_;
      green1 = green1_;
      green2 = green2_;
      pinMode(red, OUTPUT);
      pinMode(green1, OUTPUT);
      pinMode(green2, OUTPUT);
    }

    void proceed() {
      digitalWrite(red, 0);
      digitalWrite(green1, 1);
      digitalWrite(green2, 0);
    }

    void proceed_through() {
      digitalWrite(red, 0);
      digitalWrite(green1, 1);
      digitalWrite(green2, 1);
    }

    void stop() {
      digitalWrite(green1, 0);
      digitalWrite(green2, 0)
      digitalWrite(red, 1);
    }

    void stop_and_proceed() {
        // blink red led
    }

    void off() {
      digitalWrite(green1, 0);
      digitalWrite(green2, 0);
      digitalWrite(red, 0);
    }
};