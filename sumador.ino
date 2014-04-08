/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int s1 = 0;
int s2 = 1;
int s3 = 2;
int c = 3;

int a1 = 4;
int a2 = 5;
int a3 = 6;

int b1 = 7;
int b2 = 8;
int b3 = 9;


// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(s1, OUTPUT); 
  pinMode(s2, OUTPUT); 
  pinMode(s3, OUTPUT); 
  pinMode(c, OUTPUT); 

  pinMode(a1, INPUT); 
  pinMode(a2, INPUT); 
  pinMode(a3, INPUT);

  pinMode(b1, INPUT); 
  pinMode(b2, INPUT); 
  pinMode(b3, INPUT);   
}

// the loop routine runs over and over again forever:
void loop() {
  
  if(a1 == 0 && b1 == 0 && c == 0)
    {
      s1 = 0;
      c = 0;
    }
  else if ((a1 == 1 && b1 == 0 && c == 0)||(a1 == 0 && b1 == 1 && c == 0))
    {
      s1 = 1;
      c = 0;
    }
   else if (a1 == 1 && b1 == 1 && c == 0)
    {
      s1 = 0;
      c = 1;
    }
   else if(a1 == 0 && b1 == 0 && c == 1)
    {
      s1 = 1;
      c = 0;
    }
  else if ((a1 == 1 && b1 == 0 && c == 1)||(a1 == 0 && b1 == 1 && c == 1))
    {
      s1 = 0;
      c = 1;
    }
   else if (a1 == 1 && b1 == 1 && c == 1)
    {
      s1 = 1;
      c = 1;
    }
    
    
    if(a2 == 0 && b2 == 0 && c == 0)
    {
      s2 = 0;
      c = 0;
    }
  else if ((a2 == 1 && b2 == 0 && c == 0)||(a2 == 0 && b2 == 1 && c == 0))
    {
      s2 = 1;
      c = 0;
    }
   else if (a2 == 1 && b2 == 1 && c == 0)
    {
      s2 = 0;
      c = 1;
    }
   else if(a2 == 0 && b2 == 0 && c == 1)
    {
      s2 = 1;
      c = 0;
    }
  else if ((a2 == 1 && b2 == 0 && c == 1)||(a2 == 0 && b2 == 1 && c == 1))
    {
      s2 = 0;
      c = 1;
    }
   else if (a2 == 1 && b2 == 1 && c == 1)
    {
      s2 = 1;
      c = 1;
    }
    
   
   if(a3 == 0 && b3 == 0 && c == 0)
    {
      s3 = 0;
      c = 0;
    }
  else if ((a3 == 1 && b3 == 0 && c == 0)||(a3 == 0 && b3 == 1 && c == 0))
    {
      s3 = 1;
      c = 0;
    }
   else if (a3 == 1 && b3 == 1 && c == 0)
    {
      s3 = 0;
      c = 1;
    }
   else if(a3 == 0 && b3 == 0 && c == 1)
    {
      s3 = 1;
      c = 0;
    }
  else if ((a3 == 1 && b3 == 0 && c == 1)||(a3 == 0 && b3 == 1 && c == 1))
    {
      s3 = 0;
      c = 1;
    }
   else if (a3 == 1 && b3 == 1 && c == 1)
    {
      s3 = 1;
      c = 1;
    }
   
}

