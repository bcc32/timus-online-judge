import java.util.*;

public class sol
{
    public static void main( String[] args )
    {
        Scanner sc = new Scanner( System.in );
        HashSet<String> subs = new HashSet<String>();
        String line = sc.nextLine();
        for ( int i = 0; i < line.length() - 1; i++ )
            for ( int j = i + 1; j <= line.length(); j++ )
            {
                String s = line.substring( i, j );
                if ( !subs.contains( s ) )
                    subs.add( s );
            }
        System.out.println( subs.size() );
    }
}
