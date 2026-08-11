Public Class Form1

    Dim a, b, c As Double


    Private Sub Form1_Load(sender As Object, e As EventArgs) Handles MyBase.Load

        lbl_a.Text = "a"
        lbl_b.Text = "b"
        lbl_c.Text = "c"

        txt_answer.ReadOnly = True

    End Sub


    Private Sub btn_calculate_Click(sender As Object, e As EventArgs) Handles btn_calculate.Click

        Dim firstValue As Double
        Dim secondValue As Double

        If Double.TryParse(txt_first.Text, firstValue) = False OrElse
           Double.TryParse(txt_second.Text, secondValue) = False Then

            MessageBox.Show("Please enter valid numbers.",
                            "Invalid Input",
                            MessageBoxButtons.OK,
                            MessageBoxIcon.Warning)

            Exit Sub

        End If


        If firstValue <= 0 OrElse secondValue <= 0 Then

            MessageBox.Show("Please enter numbers greater than zero.",
                            "Invalid Input",
                            MessageBoxButtons.OK,
                            MessageBoxIcon.Warning)

            Exit Sub

        End If


        If RB_adjacent.Checked = True Then

            ' Missing side = a
            ' Input 1 = b
            ' Input 2 = c

            b = firstValue
            c = secondValue

            If c <= b Then

                MessageBox.Show("Hypotenuse must be greater than Opposite.",
                                "Invalid Triangle",
                                MessageBoxButtons.OK,
                                MessageBoxIcon.Warning)

                Exit Sub

            End If

            a = Math.Sqrt((c ^ 2) - (b ^ 2))

            txt_answer.Text = Math.Round(a, 2).ToString()

            lbl_a.Text = Math.Round(a, 2).ToString()
            lbl_b.Text = b.ToString()
            lbl_c.Text = c.ToString()


        ElseIf RB_Opposite.Checked = True Then

            ' Missing side = b
            ' Input 1 = a
            ' Input 2 = c

            a = firstValue
            c = secondValue

            If c <= a Then

                MessageBox.Show("Hypotenuse must be greater than Adjacent.",
                                "Invalid Triangle",
                                MessageBoxButtons.OK,
                                MessageBoxIcon.Warning)

                Exit Sub

            End If

            b = Math.Sqrt((c ^ 2) - (a ^ 2))

            txt_answer.Text = Math.Round(b, 2).ToString()

            lbl_a.Text = a.ToString()
            lbl_b.Text = Math.Round(b, 2).ToString()
            lbl_c.Text = c.ToString()


        ElseIf RB_Hypotenuse.Checked = True Then

            ' Missing side = c
            ' Input 1 = a
            ' Input 2 = b

            a = firstValue
            b = secondValue

            c = Math.Sqrt((a ^ 2) + (b ^ 2))

            txt_answer.Text = Math.Round(c, 2).ToString()

            lbl_a.Text = a.ToString()
            lbl_b.Text = b.ToString()
            lbl_c.Text = Math.Round(c, 2).ToString()


        Else

            MessageBox.Show("Please select the missing side.",
                            "Select Side",
                            MessageBoxButtons.OK,
                            MessageBoxIcon.Information)

        End If

    End Sub


    Public Sub Update_Choice()

        txt_first.Clear()
        txt_second.Clear()
        txt_answer.Clear()

        lbl_a.Text = "a"
        lbl_b.Text = "b"
        lbl_c.Text = "c"


        If RB_adjacent.Checked = True Then

            lbl_a.ForeColor = Color.Red
            lbl_b.ForeColor = Color.Black
            lbl_c.ForeColor = Color.Black

            lbl_first.Text = "Opposite(b)"
            lbl_second.Text = "Hypotenuse(c)"


        ElseIf RB_Opposite.Checked = True Then

            lbl_a.ForeColor = Color.Black
            lbl_b.ForeColor = Color.Red
            lbl_c.ForeColor = Color.Black

            lbl_first.Text = "Adjacent(a)"
            lbl_second.Text = "Hypotenuse(c)"


        ElseIf RB_Hypotenuse.Checked = True Then

            lbl_a.ForeColor = Color.Black
            lbl_b.ForeColor = Color.Black
            lbl_c.ForeColor = Color.Red

            lbl_first.Text = "Adjacent(a)"
            lbl_second.Text = "Opposite(b)"


        Else

            lbl_a.ForeColor = Color.Black
            lbl_b.ForeColor = Color.Black
            lbl_c.ForeColor = Color.Black

        End If

        txt_first.Focus()

    End Sub


    Private Sub RB_adjacent_CheckedChanged(sender As Object, e As EventArgs) Handles RB_adjacent.CheckedChanged

        If RB_adjacent.Checked = True Then
            Update_Choice()
        End If

    End Sub


    Private Sub RB_Opposite_CheckedChanged(sender As Object, e As EventArgs) Handles RB_Opposite.CheckedChanged

        If RB_Opposite.Checked = True Then
            Update_Choice()
        End If

    End Sub


    Private Sub RB_Hypotenuse_CheckedChanged(sender As Object, e As EventArgs) Handles RB_Hypotenuse.CheckedChanged

        If RB_Hypotenuse.Checked = True Then
            Update_Choice()
        End If

    End Sub


    Private Sub txt_first_TextChanged(sender As Object, e As EventArgs) Handles txt_first.TextChanged

        If RB_adjacent.Checked = True Then

            If txt_first.Text = "" Then
                lbl_b.Text = "b"
            Else
                lbl_b.Text = txt_first.Text
            End If


        ElseIf RB_Opposite.Checked = True Then

            If txt_first.Text = "" Then
                lbl_a.Text = "a"
            Else
                lbl_a.Text = txt_first.Text
            End If


        ElseIf RB_Hypotenuse.Checked = True Then

            If txt_first.Text = "" Then
                lbl_a.Text = "a"
            Else
                lbl_a.Text = txt_first.Text
            End If

        End If

        txt_answer.Clear()

    End Sub


    Private Sub txt_second_TextChanged(sender As Object, e As EventArgs) Handles txt_second.TextChanged

        If RB_adjacent.Checked = True Then

            If txt_second.Text = "" Then
                lbl_c.Text = "c"
            Else
                lbl_c.Text = txt_second.Text
            End If


        ElseIf RB_Opposite.Checked = True Then

            If txt_second.Text = "" Then
                lbl_c.Text = "c"
            Else
                lbl_c.Text = txt_second.Text
            End If


        ElseIf RB_Hypotenuse.Checked = True Then

            If txt_second.Text = "" Then
                lbl_b.Text = "b"
            Else
                lbl_b.Text = txt_second.Text
            End If

        End If

        txt_answer.Clear()

    End Sub

End Class