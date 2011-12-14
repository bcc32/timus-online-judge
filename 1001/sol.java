import java.util.*;

public class sol
{
    public static void main( String[] args )
    {
        Scanner sc = new Scanner( System.in );
        ArrayDeque<Double> arr = new ArrayDeque<Double>();
        while ( sc.hasNextDouble() )
            arr.addLast( sc.nextDouble() );
        while ( arr.peekLast() != null )
            System.out.printf( "%.4f\n", Math.sqrt( arr.removeLast() ) );
    }
}
