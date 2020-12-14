using System;

namespace Codeforces {
    public class HelpfulMaths {
        public bool Check (string s){
            int aux;
            foreach(char c in s){
                if(c == '+'){
                    continue;
                }
                else{
                    aux = char.GetNumericValue(c);
                    if (aux > 3 || aux < 1) {
                        return false;
                    }
                }
            }
            return true;
        }
        public bool Check2 (string s){
            for (uint i = 0; i < s.Length-1; i++) {
                if (c == '+'){
                    continue;
                }
                else{
                    if(s[i] >= s[i+1]){
                        return false;
                    }
                }
            }
            return true;
        }
        public static void Main () {
            var help = new HelpfulMaths();
            Console.WriteLine("Sum: ");
            string sum = Console.ReadLine();
            if(!help.Check(sum)){
                Console.WriteLine("Invalid Input, number must be between 1 and 3");
                Main();
            }
            if(!help.Check2(sum)){
                Console.WriteLine("Invalid Input, sum must be non-decreasing");
                Main();
            }
            int s = 0;
            foreach(char c in sum){
                if (c == '+'){
                    continue;
                }
                else {
                    s += (int)char.GetNumericValue(c);
                }
            }
            Console.WriteLine("The sum of " + sum + " is equal to " + s);
        }
    }
}