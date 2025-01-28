import java.applet.Applet;
import java.awt.Graphics;
import java.awt.Color;

/*
<applet code="06AppletHelloWorld" width=300 height=200></applet>
*/

public class AppletHelloWorld extends Applet {
    public void init() {
        setBackground(Color.RED);
    }

    public void paint(Graphics g) {
        g.drawString("Hello, World!", 100, 100);
    }
}
