double num1;
   double num2;
   double num3;
   double num4;
   double product;
   int avg;
// hint example of asking for first input. 
cout << "Enter first number ";
    cin >> num1;
cout << "Enter second number ";
    cin >> num2;
cout << "Enter third number ";
    cin >> num3;
cout << "Enter fourth number \n";
    cin >> num4;
    product = num1*num2*num3*num4;
    avg = (num1+num2+num3+num4) / 4;
    cout << fixed << setprecision(0) <<  "Part one Product = " << product << "\n"
    << "Part one Average = " << avg << endl;
    
    cout << fixed << setprecision(3) << "Part two Product = " << product << "\n"
    << "Part two Average = " << static_cast<double>(avg);