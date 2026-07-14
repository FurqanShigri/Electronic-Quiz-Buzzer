// ==========================================
// Electronic Quiz Buzzer System
// Arduino Uno
// ==========================================

// Player Button Pins
const int player1Btn = 2;
const int player2Btn = 3;
const int player3Btn = 4;
const int player4Btn = 5;

// Reset Button
const int resetBtn = 6;

// LED Pins
const int player1LED = 8;
const int player2LED = 9;
const int player3LED = 10;
const int player4LED = 11;

// Buzzer
const int buzzer = 12;

// Variable to lock the system
bool locked = false;

void setup()
{
  // Buttons
  pinMode(player1Btn, INPUT_PULLUP);
  pinMode(player2Btn, INPUT_PULLUP);
  pinMode(player3Btn, INPUT_PULLUP);
  pinMode(player4Btn, INPUT_PULLUP);
  pinMode(resetBtn, INPUT_PULLUP);

  // LEDs
  pinMode(player1LED, OUTPUT);
  pinMode(player2LED, OUTPUT);
  pinMode(player3LED, OUTPUT);
  pinMode(player4LED, OUTPUT);

  // Buzzer
  pinMode(buzzer, OUTPUT);

  // Turn everything OFF
  resetSystem();
}

void loop()
{
  // --------------------------
  // Reset Button
  // --------------------------
  if (digitalRead(resetBtn) == LOW)
  {
    delay(30); // Debounce

    if (digitalRead(resetBtn) == LOW)
    {
      resetSystem();

      while (digitalRead(resetBtn) == LOW);
      delay(50);
    }
  }

  // --------------------------
  // Check Player Buttons
  // --------------------------
  if (!locked)
  {
    if (digitalRead(player1Btn) == LOW)
    {
      winner(player1LED, 1);
    }
    else if (digitalRead(player2Btn) == LOW)
    {
      winner(player2LED, 2);
    }
    else if (digitalRead(player3Btn) == LOW)
    {
      winner(player3LED, 3);
    }
    else if (digitalRead(player4Btn) == LOW)
    {
      winner(player4LED, 4);
    }
  }
}

// ==========================================
// Winner Function
// ==========================================
void winner(int ledPin, int player)
{
  locked = true;

  digitalWrite(ledPin, HIGH);

  // Buzzer Beep
  tone(buzzer, 1000);
  delay(300);
  noTone(buzzer);

  Serial.begin(9600);
  Serial.print("Player ");
  Serial.print(player);
  Serial.println(" Wins!");
}

// ==========================================
// Reset Function
// ==========================================
void resetSystem()
{
  locked = false;

  digitalWrite(player1LED, LOW);
  digitalWrite(player2LED, LOW);
  digitalWrite(player3LED, LOW);
  digitalWrite(player4LED, LOW);

  noTone(buzzer);
}