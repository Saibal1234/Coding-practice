import java.util.*;
public class A1 {
    public static void main(String[] args){
         Scanner sc= new Scanner(System.in);
         int button=sc.nextInt();
         switch(button){
            case 1:System.out.println("HELLO");
                 break;
            case 2:System.out.println("NAMASTE");
                 break;
            default :System.out.println("INVALID");
         }
    }
}