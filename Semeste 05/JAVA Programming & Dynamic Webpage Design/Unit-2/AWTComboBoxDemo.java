import java.awt.*;
import java.awt.event.*;

public class AWTComboBoxDemo {
    public static void main(String[] args) {
        Frame frame = new Frame("ComboBox Example");
        Label label = new Label("Select a course:");
        label.setBounds(50, 100, 200, 20);

        Choice courses = new Choice();
        courses.add("Java");
        courses.add("C++");
        courses.add("Python");
        courses.add("JavaScript");
        courses.setBounds(50, 50, 150, 30);

        courses.addItemListener(e -> label.setText("Selected Course: " + courses.getSelectedItem()));

        frame.add(courses);
        frame.add(label);
        frame.setSize(300, 200);
        frame.setLayout(null);
        frame.setVisible(true);
    }
}
