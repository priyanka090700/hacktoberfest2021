package com.company;
import java.util.*;
public class ToggleString {
    public static void main(String args[] ) throws Exception {

        Scanner sc = new Scanner(System.in);
        String s = new String();
        s = sc.nextLine();
        StringBuffer sb = new StringBuffer(s);
        for (int i = 0; i < s.length(); i++) {
            if (Character.isLowerCase(s.charAt(i))) {
                sb.setCharAt(i, Character.toUpperCase(s.charAt(i)));
            } else if (Character.isUpperCase(s.charAt(i))) {
                sb.setCharAt(i, Character.toLowerCase(s.charAt(i)));
            }
        }
        System.out.println(sb);
    }
    }
