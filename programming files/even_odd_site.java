

import java.io.*;

public class even_odd_site {
    public static void main(String[] args) throws IOException {
        // write to file
        BufferedWriter file = new BufferedWriter(new FileWriter("numbers.html"));
        // Write to file
        file.write("<html>\n<head>\n<title>List of Numbers</title>\n</head>\n<body>\n");
        file.write("<table>\n<tr><th>Even Numbers</th><th>Odd Numbers</th></tr>\n");
        // Iterate through 50 integers
        for (int i = 1; i <= 50; i++) {
            // Even integers
            if (i % 2 == 0) {
                file.write("<tr><td>" + i + "</td><td></td></tr>\n");
            }
                // Odd numbers
            else {
                file.write("<tr><td></td><td>" + i + "</td></tr>\n");
            }
        }
        // Write to file
        file.write("</table>\n</body>\n</html>");
        file.close();
        // Read from file
        BufferedReader reader = new BufferedReader(new FileReader("numbers.html"));
        String line;
        while ((line = reader.readLine()) != null) {
            System.out.println(line);
        }
        reader.close();
    }
}
