package studentmanagement;

import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class login extends JFrame {

    private JLabel lName, lPassword, lText,lTextt;
    private JTextField tName;
    private JPasswordField tPassword;
    private JButton btnLogin, btnExit;

    public void Login() {
        setTitle("Student Login Form");
        setSize(500, 450);
        setLayout(null); 
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLocationRelativeTo(null); 
        lText = new JLabel("Login to your account");
        lText.setBounds(150, 20, 200, 30);
        
        add(lText);
        
        lName = new JLabel("Username:");
        lName.setBounds(50, 80, 100, 30);
        add(lName);

        lPassword = new JLabel("Password:");
        lPassword.setBounds(50, 130, 100, 30);
        add(lPassword);

        tName = new JTextField();
        tName.setBounds(150, 80, 200, 30);
        add(tName);

        tPassword = new JPasswordField();
        tPassword.setBounds(150, 130, 200, 30);
        add(tPassword);

        
        btnLogin = new JButton("Log In");
        btnLogin.setBounds(100, 200, 100, 30);
        add(btnLogin);

        btnExit = new JButton("Exit");
        btnExit.setBounds(250, 200, 100, 30);
        add(btnExit);
        btnExit.addActionListener(new ActionListener(){
            public void actionPerformed(ActionEvent e){
                System.exit(0);
            }
        });
        btnLogin.addActionListener(new ActionListener() {
    public void actionPerformed(ActionEvent e) {
        String username = tName.getText();
        String password = new String(tPassword.getPassword());

        if(username.equals("admin") && password.equals("adminResearch")) {
            lTextt = new JLabel("Login successfully!");
            lTextt.setBounds(150, 170, 200, 30);
            lTextt.setForeground(Color.BLUE);
            add(lTextt);
            
            new studentmanagement(); // your next form
            login.this.dispose();
        } else {
            lTextt = new JLabel("Incorrect username or password");
            lTextt.setBounds(140, 170, 250, 30);
            lTextt.setForeground(Color.RED);
            add(lTextt);
        }
        repaint();
    }
});

        
        setVisible(true);
    }

    
}
