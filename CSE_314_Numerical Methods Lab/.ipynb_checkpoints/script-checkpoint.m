function output = script(n)

fact = 1;
for i=1:n
   fact=fact*i;
endfor

output=prod(1:n);
%output = fact;