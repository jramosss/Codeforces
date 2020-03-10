using System;
using System.Collections.Generic;

namespace Codeforces {
    public class Petyastrings {
        public List<Tuple<char,int>> create_dict (){
            List<Tuple<char,int>> dict = new List<Tuple<char, int>>();
            dict.Add(new Tuple<char, int>('a',1));
            dict.Add(new Tuple<char, int>('b',2));
            dict.Add(new Tuple<char, int>('c',3));
            dict.Add(new Tuple<char, int>('d',4));
            dict.Add(new Tuple<char, int>('e',5));
            dict.Add(new Tuple<char, int>('f',6));
            dict.Add(new Tuple<char, int>('g',7));
            dict.Add(new Tuple<char, int>('h',8));
            dict.Add(new Tuple<char, int>('i',9));
            dict.Add(new Tuple<char, int>('j',10));
            dict.Add(new Tuple<char, int>('k',11));
            dict.Add(new Tuple<char, int>('l',12));
            dict.Add(new Tuple<char, int>('m',13));
            dict.Add(new Tuple<char, int>('n',14));
            dict.Add(new Tuple<char, int>('o',15));
            dict.Add(new Tuple<char, int>('p',16));
            dict.Add(new Tuple<char, int>('q',17));
            dict.Add(new Tuple<char, int>('r',18));
            dict.Add(new Tuple<char, int>('s',19));
            dict.Add(new Tuple<char, int>('t',20));
            dict.Add(new Tuple<char, int>('u',21));
            dict.Add(new Tuple<char, int>('v',22));
            dict.Add(new Tuple<char, int>('w',23));
            dict.Add(new Tuple<char, int>('x',24));
            dict.Add(new Tuple<char, int>('y',25));
            dict.Add(new Tuple<char, int>('z',26));
            return dict;
        }
        public int Find (char c,List<Tuple<char,int>> dict){
            foreach(Tuple<char,int> tuple in dict){
                if(tuple.Item1 == c){
                    return tuple.Item2;
                }
            }
            return 7; //Just because the previous if is always true
        }
        public static void Main (){
            var Petya = new Petyastrings();
            var dict = Petya.create_dict();
            Console.WriteLine("Word 1: ");
            string word1 = Console.ReadLine();
            Console.WriteLine("Word 2: ");
            string word2 = Console.ReadLine();
            word1 = word1.ToLower();
            word2 = word2.ToLower();
            int w1 = 0;
            int w2 = 0;
            for(int i = 0; i < word1.Length; i++){
                w1 += Petya.Find(word1[i],dict);
                w2 += Petya.Find(word2[i],dict);
            }
            if (w1 == w2){
                Console.WriteLine("Words are lexicografically equal");
            }
            else if (w1 > w2) {
                Console.WriteLine(word1 + " Is lexicografically greater than " + word2);
            }
            else {
                Console.WriteLine(word2 + " Is lexicografically greater than " + word1);
            }
        }
    }
}