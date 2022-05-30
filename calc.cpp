#include "calc.cpp"

int calc::calculate(char op, int num1, int num2){
    if(op=='+'){
        return num1+num2;
    }else if(op=='-'){
        return num1-num2;
    }else if(op=='*'){
        return num1*num2;
    }else if(op=='/'){
        return num1/num2;
    }else{
        return '0';
    }
}