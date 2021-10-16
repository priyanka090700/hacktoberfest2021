package com.company;

public class Pattern {
    public static void main(String[] args) {

        int line=0;
        int z=0;

        for(int i=0; i<5; i++ ){

            if(line==0 || line==4){
                for(int j=0;j<line+1;j++) {
                    System.out.print("*");
                }

            }

            else{
                System.out.print("*");
                for(int j=0;j<z;j++){
                    System.out.print(" ");
                }
                z++;


                System.out.print("*");
            }


            System.out.println();
            line++;
        }
    }
}
