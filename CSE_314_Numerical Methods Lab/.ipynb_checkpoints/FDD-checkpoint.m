function output = FDD(f,x,delta_x)


x2 = x + delta_x;


y2 = f(x2);
y1 = f(x);

FDD = (y2-y1)/delta_x;
  
       
ExactValue = (15*exp((5*2.12)/2))/2; % got this from FDD.m


output = fprintf('The Exact value is: %g\n', ExactValue);

output = fprintf('The value of FDD is: %g\n', FDD);

Error=abs(((ExactValue-FDD)/ExactValue)*100);

output = disp(['The absolute error is: ', num2str(Error)]);

%output = ExactValue

