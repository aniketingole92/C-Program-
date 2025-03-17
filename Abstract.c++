import java.util.AbstractMap.SimpleEntry;
public class Main {
    public static void main(String[] args) {

        SimpleEntry<Integer, String> entry = new SimpleEntry<>(1, "One");

        // Accessing the values
        Integer key = entry.getKey();
        String value = entry.getValue();

        // Printing the values
        System.out.println("Key: " + key + ", Value: " + value); // key -> 1 and value -> "One"

        // Equality Check
        SimpleEntry<Integer, String> entry2 = new SimpleEntry<>(1, "One");
        System.out.println("Is entry equal to entry2? " + entry.equals(entry2)); // Two entries are equals -> true

        // String Representation
        System.out.println("String representation: " + entry.toString()); // String -> "1=One"

        // Hash Code
        System.out.println("Hash code: " + entry.hashCode()); // Hash Code of entry is 79431
    }
}
