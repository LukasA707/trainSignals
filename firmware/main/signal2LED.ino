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