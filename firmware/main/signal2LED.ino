int blinkRate = 500;

class Signal2LED {
  private:
    int red;
    int green;
  public:
    Signal2LED(int red_, int green_)
    {
      red = red_;
      green = green_;
      pinMode(red, OUTPUT);
      pinMode(green, OUTPUT);
    }

    void proceed() {
      digitalWrite(red, 0);
      digitalWrite(green, 1);
    }

    void proceed_through() {
      // blink green led
    }

    void stop() {
      digitalWrite(green, 0);
      digitalWrite(red, 1);
    }

    void stop_and_proceed() {
      // blink red led
    }

    void off() {
      digitalWrite(green, 0);
      digitalWrite(red, 0);
    }
};