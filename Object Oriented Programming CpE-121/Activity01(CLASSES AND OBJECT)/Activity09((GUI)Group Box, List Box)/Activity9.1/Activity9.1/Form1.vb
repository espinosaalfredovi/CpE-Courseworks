Public Class Form1

    Private Sub btnAdd_Click(sender As Object, e As EventArgs) Handles btnAdd.Click

        Dim firstName As String
        Dim lastName As String
        Dim fullName As String

        firstName = txtFirstName.Text.Trim()
        lastName = txtLastName.Text.Trim()

        If firstName = "" OrElse lastName = "" Then

            MessageBox.Show("Please enter both first name and last name.",
                            "Missing Information",
                            MessageBoxButtons.OK,
                            MessageBoxIcon.Warning)

            Exit Sub

        End If

        fullName = firstName & " " & lastName

        lstStudents.Items.Add(fullName)

        txtFirstName.Clear()
        txtLastName.Clear()

        txtFirstName.Focus()

    End Sub


    Private Sub btnClear_Click(sender As Object, e As EventArgs) Handles btnClear.Click

        txtFirstName.Clear()
        txtLastName.Clear()

        lstStudents.Items.Clear()

        txtFirstName.Focus()

    End Sub

End Class