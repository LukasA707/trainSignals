class SignalPU {
  private:
    int yellow1;
    int yellow2;
    int yellow3;
    int yellow4;
  public:
    SignalPU(
      int yellow1, 
      int yellow2,
      int yellow3,
      int yellow4,
    ) {
      yellow1 = yellow1;
      yellow2 = yellow2;
      yellow3 = yellow3;
      yellow4 = yellow4;
      pinMode(yellow1, OUTPUT);
      pinMode(yellow2, OUTPUT);
      pinMode(yellow3, OUTPUT);
      pinMode(yellow4, OUTPUT);
    }

    void passing_prohibited() {
      digitalWrite(yellow1, 0)
      digitalWrite(yellow2, 0)
      digitalWrite(yellow3, 1)
      digitalWrite(yellow4, 1)

    }

    void cautious_passing_allowed() {
      digitalWrite(yellow1, 0)
      digitalWrite(yellow2, 1)
      digitalWrite(yellow3, 1)
      digitalWrite(yellow4, 0)
    }

    void passing_allowed() {
      digitalWrite(yellow1, 1)
      digitalWrite(yellow2, 0)
      digitalWrite(yellow3, 1)
      digitalWrite(yellow4, 0)
    }

    void signal_canceled() {
      digitalWrite(yellow1, 1)
      digitalWrite(yellow2, 0)
      digitalWrite(yellow3, 0)
      digitalWrite(yellow4, 1)
    }

    void off() {
      digitalWrite(yellow1, 0);
      digitalWrite(yellow2, 0);
      digitalWrite(yellow3, 0);
      digitalWrite(yellow4, 0);
    }
};