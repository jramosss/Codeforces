using System;
using System.Collections.Generic;

namespace Codeforces {
    public class BeautifulMatrix {
        /*
        public int[][] Matrix_init () {
            var rand = new Random();
            var matrix = new int[5][5];
            for (uint i = 0; i < matrix.Length; i++){
                for(uint j = 0; j < matrix.LongLength; j++){
                    matrix[i][j] = 0;
                }
            }
            matrix[rand.Next(1,5)][rand.Next(1,5)] = 1;
            return matrix;
        }
        */
        public Tuple<int,int> Find_one_pos (int[][] matrix){
            var tuple = new Tuple<int,int>();
            for (uint i = 0; i < matrix.Length; i++){
                for(uint j = 0; j < matrix.LongLength; j++){
                    if(matrix[i][j] == 0){
                        continue;
                    }
                    else{
                        tuple = (i,j);
                    }
                }
            }
            return tuple;
        }
        /*
        public void Swap(int a,int b){
            int aux = a;
            a = b;
            b = aux;
        }
        public void Swap_neighbour_column(int[][] matrix,int column){
            for(uint i = 0; i < matrix.Length; i++){
                Swap(matrix[i][column],matrix[i][column+1]); 
            }
        }
        public void Swap_neighbour_row(int[][] matrix,int column){
            for(uint i = 0; i < matrix.Length; i++){
                Swap(matrix[row][i],matrix[row+1][i]); 
            }
        }
        public void Print_Matrix (int[][] matrix) {
            Console.WriteLine("[");
            foreach (int i in matrix){
                Console.WriteLine(i + ",");
            }
            Console.WriteLine("]");
        }
        */
        public static void Main () {
            var help = new BeautifulMatrix();
            //var matrix = help.Matrix_init();
            var one_pos = help.Find_one_pos(matrix);
            int one_pos_ROW = one_pos.Item1;
            int one_pos_COLUMN = one_pos.Item2;
            uint moves = 0;
            moves = Math.Abs(one_pos_ROW - 3) + Math.Abs(one_pos_COLUMN - 3);
            Console.WriteLine("Moves necessary to beautify the matrix: " + moves);
        }
    }
}