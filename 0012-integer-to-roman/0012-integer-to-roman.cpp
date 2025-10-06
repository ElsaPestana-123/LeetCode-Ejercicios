class Solution {
public:
    string intToRoman(int num) {
        string numRoman = "";

       
        if(num >= 3000){
            numRoman = "MMM";
            num -= 3000;
        } else if (num >= 2000){
            numRoman = "MM";
            num -= 2000;
        } else if (num >= 1000){
            numRoman = "M";
            num -= 1000;
        }

        
        if(num >= 900){
            numRoman += "CM";
            num -= 900;
        } else if(num >= 500){
            numRoman += "D";
            num -= 500;

            while (num >= 100){
                numRoman += "C";
                num -= 100;
            }

        } else if(num >= 400){
            numRoman += "CD";
            num -= 400;
        } else if(num >= 100){
            
            while(num >= 100){
                numRoman += "C";
                num -= 100;
            }
        }

       
        if(num >= 90){
            numRoman += "XC";
            num -= 90;
        } else if(num >= 50){
            numRoman += "L";
            num -= 50;
            while(num >= 10){
                numRoman += "X";
                num -= 10;
            }
        } else if(num >= 40){
            numRoman += "XL";
            num -= 40;
        } else if(num >= 10){
            
            while(num >= 10){
                numRoman += "X";
                num -= 10;
            }
        }

        
        if(num >= 9){
            
            numRoman += "IX";
            num -= 9;

        } else if(num >= 5){
            numRoman += "V";
            num -= 5;
            while(num >= 1){
                numRoman += "I";
                num -= 1;
            }
        } else if(num >= 4){
            numRoman += "IV";
            num -= 4;
        } else if(num >= 1){
            
            while(num >= 1){
                numRoman += "I";
                num -= 1;
            }
        }

        return numRoman;
    }
};