clear
clc

syms f(x)
syms x

f(x) = 3*exp((2.5*x)+2);

dfdt = diff(f,x,1)