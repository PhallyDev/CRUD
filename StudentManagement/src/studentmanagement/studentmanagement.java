package studentmanagement;
import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
import java.sql.*;

public class studentmanagement extends JFrame {
    // GUI components
    JTextField idField, nameField, phoneField, finalField, midField;
    JTextArea outputArea;
    String url = "jdbc:ucanaccess://D:\\database\\database_access\\student.accdb";
    public studentmanagement() 
    {
        setTitle("Student Form " );
        setSize(500, 450);
        setLayout(new GridLayout(8,2,10,10));
         setLocationRelativeTo(null); 
        JButton insertBtn = new JButton("Insert");
        JButton deleteBtn = new JButton("Delete");
        JButton updateBtn = new JButton("Update");
        JButton showBtn = new JButton("Show All");
        add(new JLabel("ID:"));
        idField = new JTextField(10); add(idField);
        add(new JLabel("Name:"));
        nameField = new JTextField(15);add(nameField);
        add(new JLabel("Phone Number:")); 
        phoneField = new JTextField(15);add(phoneField);
        add(new JLabel("Score Final:")); 
        finalField = new JTextField(15); add(finalField);
        add(new JLabel("Score Midterm:")); 
        midField = new JTextField(15); add(midField);
        outputArea = new JTextArea(12, 40);
        outputArea.setEditable(false);
        add(new JScrollPane(outputArea));
        add(new JLabel(""));
        add(insertBtn);
        add(deleteBtn);
        add(updateBtn);
        add(showBtn);
        insertBtn.addActionListener(new ActionListener(){
            public void actionPerformed(ActionEvent e){
                try {
                    Connection conn = DriverManager.getConnection(url);
                    Statement st = conn.createStatement();
                    int id = Integer.parseInt(idField.getText());
                    String name = nameField.getText();
                    String phone = phoneField.getText();
                    double scoreFinal = Double.parseDouble(finalField.getText());
                    double scoreMid = Double.parseDouble(midField.getText());

                    String sql = "INSERT INTO student (ID, Name, Phone, ScoreFinal, ScoreMidterm) VALUES (" +
                                 id + ", '" + name + "', '" + phone + "', " + scoreFinal + ", " + scoreMid + ")";
                    st.executeUpdate(sql);
                    outputArea.setText("Inserted successfully!");
                } catch (Exception ex){
                    outputArea.setText("Insert failed: " + ex.getMessage());
                }
            }
        });
        deleteBtn.addActionListener(new ActionListener(){
            public void actionPerformed(ActionEvent e){
                try { 
                    int id = Integer.parseInt(idField.getText());
                    Connection conn = DriverManager.getConnection(url);
                    Statement st = conn.createStatement();
                    String sql = "DELETE FROM student WHERE id=" + id;
                    int rows = st.executeUpdate(sql);
                    outputArea.setText(rows > 0 ? "Deleted successfully!" : "ID not found.");
                } catch (Exception ex) {
                    outputArea.setText("Delete failed: " + ex.getMessage());
                }
            }
        });
        updateBtn.addActionListener(new ActionListener(){
            public void actionPerformed(ActionEvent e){
                try { 
                    int id = Integer.parseInt(idField.getText());
                    String name = nameField.getText();
                    String phone = phoneField.getText();
                    double scoreFinal = Double.parseDouble(finalField.getText());
                    double scoreMid = Double.parseDouble(midField.getText());

                    Connection conn = DriverManager.getConnection(url);
                    String sql = "UPDATE student SET Name = '" + name + "', Phone = '" + phone +
                                 "', ScoreFinal = " + scoreFinal + ", ScoreMidterm = " + scoreMid +
                                 " WHERE ID = " + id;
                    Statement st = conn.createStatement();
                    int rows = st.executeUpdate(sql);
                    outputArea.setText(rows > 0 ? "Updated successfully!" : "ID not found.");
                } catch (Exception ex) {
                    outputArea.setText("Update failed: " + ex.getMessage());
                }
            }
        });
        showBtn.addActionListener(new ActionListener(){
            public void actionPerformed(ActionEvent e){
                try { 
                    Connection conn = DriverManager.getConnection(url);
                    String sql = "SELECT * FROM student";
                    Statement stmt = conn.createStatement();
                    ResultSet rs = stmt.executeQuery(sql);
                    String show = "";
                    while (rs.next()) {
                        show += "\nID: " + rs.getInt("ID") +
                                "  Name: " + rs.getString("Name") +
                                "  Phone: " + rs.getString("Phone") +
                                "  Final: " + rs.getDouble("ScoreFinal") +
                                "  Mid: " + rs.getDouble("ScoreMidterm");
                    }
                    outputArea.setText(show);
                } catch (Exception ex) {
                    outputArea.setText("Show failed: " + ex.getMessage());
                }
            }
        });
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setVisible(true);
    }
  
}
