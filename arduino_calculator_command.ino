void setup() {
  Serial.begin(9600);
  Serial.println("Select One operation please:");
  Serial.println("1)Square Root");
  Serial.println("2)Power of Integer");
  Serial.println("3)Addition");
  Serial.println("4)Subtraction");
  Serial.println("5)Multiplication");
  Serial.println("6)Division");
  Serial.println("7)Sine");
  Serial.println("8)Cosine");
  Serial.println("9)Tangent");
  Serial.println("10)10 base Log");
  Serial.println("11)Natural Log");
  Serial.println("12)Factorial");
  Serial.println("------------------------");

}

void allfunctionlist(){
  Serial.println("Select One operation please:");
  Serial.println("1)Square Root");
  Serial.println("2)Power of Integer");
  Serial.println("3)Addition");
  Serial.println("4)Subtraction");
  Serial.println("5)Multiplication");
  Serial.println("6)Division");
  Serial.println("7)Sine");
  Serial.println("8)Cosine");
  Serial.println("9)Tangent");
  Serial.println("10)10 base Log");
  Serial.println("11)Natural Log");
  Serial.println("12)Factorial");
  Serial.println("------------------------");
  
  }


int readFromPCswitch()
{
  while (Serial.available() == 0);
  return Serial.parseInt();
}

float readFromPC() {
  while (Serial.available() == 0);
  return Serial.parseFloat();
}

void loop() {

  switch (readFromPCswitch()) {

    case 12:
      {
        Serial.println("Enter  number:");
        float one = readFromPC();
        int n = 1;
        int m = one;

        unsigned fact = 1;
        for(int x = n; x <= m; x++){       
                fact = fact * x;
              }
              
        Serial.println("Factorial result:");
        Serial.println(fact);
        Serial.print("\n");
        Serial.println("-------------");
        allfunctionlist();
        break;
      }
      
    case 11:
      {
        Serial.println("Enter  number:");
        float one = readFromPC();
        one = log(one);
        Serial.println("Naatural logarithm result:");
        Serial.println(one);
        Serial.print("\n");
        Serial.println("-------------");
        allfunctionlist();
        break;
      }

    case 10:
      {
        Serial.println("Enter  number:");
        float one = readFromPC();
        one = log10(one);
        Serial.println("10 base logarithm result:");
        Serial.println(one);
        Serial.print("\n");
        Serial.println("-------------");
        allfunctionlist();
        break;
      }

    case 9:
      {
        Serial.println("Enter  number:");
        float one = readFromPC();
        one = one * 3.1416 / 180 ;
        one = tan(one);
        Serial.println("tangent Result:");
        Serial.println(one);
        Serial.print("\n");
        Serial.println("-------------");
        allfunctionlist();
        break;
      }

    case 8:
      {
        Serial.println("Enter  number:");
        float one = readFromPC();
        one = one * 3.1416 / 180 ;
        one = cos(one);
        Serial.println("cosine Result:");
        Serial.println(one);
        Serial.print("\n");
        Serial.println("-------------");
        allfunctionlist();
        break;
      }

    case 7:
      {
        Serial.println("Enter  number:");
        float one = readFromPC();
        one = one * 3.1416 / 180 ;
        one = sin(one);
        Serial.println("sin Result:");
        Serial.println(one);
        Serial.print("\n");
        Serial.println("-------------");
        allfunctionlist();
        break;
      }

    case 6:
      {
        Serial.println("Enter first number:");
        float one = readFromPC();
        Serial.println(one);
        Serial.println("Enter second number:");
        float two = readFromPC();
        Serial.println(two);
        Serial.println("Result:");
        float result = one / two;
        Serial.println(result);
        Serial.print("\n");
        Serial.println("-------------");
        allfunctionlist();
        break;
      }

    case 5:
      {
        Serial.println("Enter first number:");
        float one = readFromPC();
        Serial.println(one);
        Serial.println("Enter second number:");
        float two = readFromPC();
        Serial.println(two);
        Serial.println("Result:");
        float result = one * two;
        Serial.println(result);
        Serial.print("\n");
        Serial.println("-------------");
        allfunctionlist();
        break;
      }

    case 4:
      {
        Serial.println("Enter first number:");
        float one = readFromPC();
        Serial.println(one);
        Serial.println("Enter second number:");
        float two = readFromPC();
        Serial.println(two);
        Serial.println("Result:");
        float result = one - two;
        Serial.println(result);
        Serial.print("\n");
        Serial.println("-------------");
        allfunctionlist();
        break;
      }

    case 3:
      {
        Serial.println("Enter first number:");
        float one = readFromPC();
        Serial.println(one);
        Serial.println("Enter second number:");
        float two = readFromPC();
        Serial.println(two);
        Serial.println("Result:");
        float result = one + two;
        Serial.println(result);
        Serial.print("\n");
        Serial.println("-------------");
        allfunctionlist();
        break;
      }


    case 2:
      {
        Serial.print("2)Enter base value:");
        float base = readFromPC();
        Serial.println(base);
        Serial.println( " Enter power value  ");
        float power = readFromPC();
        Serial.println(power);
        Serial.println("Result:");
        float result = pow(base, power);
        Serial.println(result);
        Serial.print("\n");
        Serial.println("-------------");
        allfunctionlist();
        break ;
      }



    case 1:
      {
        Serial.print("1)Enter value for square root:");
        float one = readFromPC();       
        one = sqrt(one);
        Serial.println("Result:");
        Serial.print(one);
        Serial.print("\n");
        Serial.println("-------------");
        allfunctionlist();
        break;

      }









  }
}


































