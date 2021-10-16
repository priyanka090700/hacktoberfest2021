package com.company;

import java.util.*;
public class RoyandProfilePicture {
    public static void main(String args[] ) throws Exception {

        Scanner sc = new Scanner(System.in);
        int L=sc.nextInt();
        int N=sc.nextInt();
        int[][] arr=new int[N][N];
        int c=0;
        for(int i=0;i<N;i++){
            for(int j=0;j<2;j++){
                arr[i][j]=sc.nextInt();
            }
        }
        for(int x=0;x<N;x++){
            for(int y=0; y<2;y++){
                if(arr[x][y]<L || arr[x][y+1]<L){
                    System.out.println("UPLOAD ANOTHER");
                    break;
                }else{
                    if(arr[x][y]==arr[x][y+1]){
                        System.out.println("ACCEPTED");
                        break;
                    }else{
                        System.out.println("CROP IT");
                        break;
                    }
                }
            }
        }

    }
}
