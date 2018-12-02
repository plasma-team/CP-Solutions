import java.io.*;
import java.util.*;

public class Solution {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    long n = sc.nextInt(), a = sc.nextInt(), b = sc.nextInt();
    if(n%a == 0 && n%b == 0) System.out.print("double discount");
    else {
        if(n%a == 0) System.out.print("drinks only");
        else if(n%b == 0) System.out.print("foods only");
        else System.out.print("no discount");
    }
  }
}