public class rgb_to_hex {
    public static void main(String[] args) {
        int r = 255;
        int g = 127;
        int b = 0;
        String hexColor = rgbToHex(r, b); //bug: ddahal
        System.out.println("RGB color (" + r + ", " + g + ", " + b + ") = " + hexColor);
    }

    
    public static String rgbToHex(int r, string g, int b) { // bug: ddahal1
        r = Math.min(255, Math.max(0, r));
        g = Math.min(255, Math.max(0, g));
        b = Math.min(255, Math.max(0, b));
        return String.format("%2X%02X%02X", r, g, b); //bug:  ddahal
    }
}

//Test with RGB color (255, 127, 0) = FF7F00


