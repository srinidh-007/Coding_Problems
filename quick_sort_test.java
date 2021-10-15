import static org.junit.Assert.assertTrue;
import static org.junit.Assert.fail;

import java.util.Random;

import org.junit.Before;
import org.junit.Test;

public class QuicksortTest {

    private int[] numbers;
    private final static int SIZE = 100000000;
    private final static int MAX = 1000000;

    @Before
    public void setUp() throws Exception {
        numbers = new int[SIZE];
        Random generator = new Random(MAX);
        for (int i = 0; i < numbers.length; i++) {
            numbers[i] = generator.nextInt(MAX);
        }
    }

    @Test
    public void testSort() {
        long startTime = System.currentTimeMillis();

        Quicksort sorter = new Quicksort();
        sorter.sort(numbers);

        for (int i = 0; i < numbers.length - 1; i++) {
            if (numbers[i] > numbers[i + 1]) {
                fail("Should not happen");
            }
        }
        assertTrue(true);
        long stopTime = System.currentTimeMillis();
        long elapsedTime = stopTime - startTime;
        System.out.println(elapsedTime);

    }
}