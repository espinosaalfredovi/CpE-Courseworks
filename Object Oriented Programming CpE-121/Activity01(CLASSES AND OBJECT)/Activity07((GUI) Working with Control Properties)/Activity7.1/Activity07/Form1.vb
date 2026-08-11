Public Class Form1
    Private Sub btnAddition_Click(sender As Object, e As EventArgs) Handles btnAddition.Click
        Dim num1 As Double
        Dim num2 As Double
        Dim answer As Double

        num1 = Val(txtFirstNumber.Text)
        num2 = Val(txtSecondNumber.Text)

        answer = num1 + num2

        txtOutput.Text = answer.ToString()
    End Sub


    Private Sub btnSubtraction_Click(sender As Object, e As EventArgs) Handles btnSubtraction.Click
        Dim num1 As Double
        Dim num2 As Double
        Dim answer As Double

        num1 = Val(txtFirstNumber.Text)
        num2 = Val(txtSecondNumber.Text)

        answer = num1 - num2

        txtOutput.Text = answer.ToString()
    End Sub


    Private Sub btnMultiplication_Click(sender As Object, e As EventArgs) Handles btnMultiplication.Click
        Dim num1 As Double
        Dim num2 As Double
        Dim answer As Double

        num1 = Val(txtFirstNumber.Text)
        num2 = Val(txtSecondNumber.Text)

        answer = num1 * num2

        txtOutput.Text = answer.ToString()
    End Sub


    Private Sub btnDivision_Click(sender As Object, e As EventArgs) Handles btnDivision.Click
        Dim num1 As Double
        Dim num2 As Double
        Dim answer As Double

        num1 = Val(txtFirstNumber.Text)
        num2 = Val(txtSecondNumber.Text)

        If num2 <> 0 Then
            answer = num1 / num2
            txtOutput.Text = answer.ToString()
        Else
            MessageBox.Show("Cannot divide by zero.")
        End If
    End Sub
End Class
