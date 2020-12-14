using System;
//DOESNT WORK
namespace Codeforces {
    public class Boyorgirl {
        public bool Contains (char[] arr,char elem){
            foreach(char c in arr){
                if (c == elem){
                    return true;
                }
            }
            return false;
        }
        public static void Main () {
            //Console.WriteLine("Username: ");
            //string name = Console.ReadLine();
            string name = "xiaodao";
            char[] arr;
            var help = new Boyorgirl();
            int j = 0;
            for(int i = 0; i < name.Length; i++){
                if(!help.Contains(arr,name[i])){
                    arr[j] = name[i];
                    j++;
                }
            }
            if (arr.Length % 2 == 0){
                Console.WriteLine("CHAT WITH HER!");
            }
            else{
                Console.WriteLine("IGNORE HIM!");
            }
        }
    }
}