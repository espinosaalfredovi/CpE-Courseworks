Public Class Form1
    Private Sub btnFirstName_Click(sender As Object, e As EventArgs) Handles btnFirstName.Click
        MessageBox.Show("Alfredo", "My First Name")
    End Sub

    Private Sub btnLastName_Click(sender As Object, e As EventArgs) Handles btnLastName.Click
        MessageBox.Show("Espinosa", "My Last Name")
    End Sub

    Private Sub btnFullName_Click(sender As Object, e As EventArgs) Handles btnFullName.Click
        MessageBox.Show("Alfredo Espinosa VI", "My Full Name")
    End Sub
End Class
