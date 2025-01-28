import java.awt.*;
import java.awt.event.*;

public class AWTGridLayoutCalculator {
    public static void main(String[] args) {
        Frame frame = new Frame("GridLayout Calculator");
        frame.setLayout(new GridLayout(4, 4));

        String[] buttons = {"7", "8", "9", "/", "4", "5", "6", "*", "1", "2", "3", "-", "C", "0", "=", "+"};
        for (String text : buttons) {
            Button button = new Button(text);
            frame.add(button);
        }

        frame.setSize(400, 400);
        frame.setVisible(true);
    }
}
