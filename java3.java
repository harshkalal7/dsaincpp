import java.util.*;
public class java3 {
 public static void main (String[] args){
    // for (int i = 1; i<=10; i++){
    //     System.out.println(i);
    // }

    
    Scanner sc = new Scanner (System.in);
    int n = sc.nextInt();
    int sum = 0;
    for (int i = 1; i <= n ; i++ ){
        sum = sum + i;
    }
    System.out.println(sum);
 }    
}
