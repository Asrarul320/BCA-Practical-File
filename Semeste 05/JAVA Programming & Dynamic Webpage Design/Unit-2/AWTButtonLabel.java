import java.awt.*;
import java.awt.event.*;

public class AWTButtonLabel {
    public static void main(String[] args) {
        Frame frame = new Frame("Button and Label Example");
        Label label = new Label("Click the button!");
        label.setBounds(50, 100, 200, 20);

        Button button = new Button("Click Me");
        button.setBounds(50, 50, 80, 30);

        button.addActionListener(e -> label.setText("Button Clicked!"));

        frame.add(label);
        frame.add(button);
        frame.setSize(300, 200);
        frame.setLayout(null);
        frame.setVisible(true);
    }
}
