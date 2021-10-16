package com.company;
import java.util.*;
public class PallindromicString {
    public static void main(String args[] ) throws Exception {

        Scanner sc= new Scanner(System.in);
        String s=sc.nextLine();
        boolean flag=true;
        for(int i=0;i<s.length()/2;i++){
            if(s.charAt(i)!=(s.charAt(s.length()-i-1))){
                flag =false;
                break;
            }
        }
        if(flag){
            System.out.println("YES");
        }else{
            System.out.println("NO");
        }
    }
}
