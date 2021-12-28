<html>

<head>
    <meta http-equiv="Content-Type" content="text/html; charset=ISO-8859-1">
    <title>Student details </title>
</head>

<body>

</body>
<form method="post">
    <table border="2">
        <tr>
            <td>ROLL NUMBER</td>
            <td>NAME</td>
            <td>EMAIL</td>
            <td>MARKS</td>
        </tr>

        <% try { Class.forName("com.mysql.jdbc.Driver"); String url="jdbc:mysql://localhost/test" ; String
            username="root" ; String password="root" ; String query="select * from jsp1" ; Connection
            conn=DriverManager.getConnection(url,username,password); Statement stmt=conn.createStatement(); ResultSet
            rs=stmt.executeQuery(query); while(rs.next()) { %>
            <tr>
                <td>
                    <%=rs.getInt("ROLL NUMBER ") %></td>
<td><%=rs.getString(" NAME") %>
                </td>
                <td>
                    <%=rs.getString("EMAIL") %>
                </td>
                <td>
                    <%=rs.getString("MARKS") %>
                </td>

            </tr>
            <% } %>
    </table>
    <% rs.close(); stmt.close(); conn.close(); } catch(Exception e) { e.printStackTrace(); } %>

</form>

</html>