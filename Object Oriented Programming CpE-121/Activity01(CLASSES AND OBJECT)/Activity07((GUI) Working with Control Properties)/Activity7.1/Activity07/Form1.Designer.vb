<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()>
Partial Class Form1
    Inherits System.Windows.Forms.Form

    'Form overrides dispose to clean up the component list.
    <System.Diagnostics.DebuggerNonUserCode()>
    Protected Overrides Sub Dispose(disposing As Boolean)
        Try
            If disposing AndAlso components IsNot Nothing Then
                components.Dispose()
            End If
        Finally
            MyBase.Dispose(disposing)
        End Try
    End Sub

    'Required by the Windows Form Designer
    Private components As System.ComponentModel.IContainer

    'NOTE: The following procedure is required by the Windows Form Designer
    'It can be modified using the Windows Form Designer.
    'Do not modify it using the code editor.
    <System.Diagnostics.DebuggerStepThrough()>
    Private Sub InitializeComponent()
        txtFirstNumber = New TextBox()
        txtSecondNumber = New TextBox()
        txtOutput = New TextBox()
        Label1 = New Label()
        Label2 = New Label()
        Label3 = New Label()
        btnAddition = New Button()
        btnSubtraction = New Button()
        btnMultiplication = New Button()
        btnDivision = New Button()
        SuspendLayout()
        ' 
        ' txtFirstNumber
        ' 
        txtFirstNumber.Location = New Point(12, 65)
        txtFirstNumber.Name = "txtFirstNumber"
        txtFirstNumber.Size = New Size(123, 23)
        txtFirstNumber.TabIndex = 0
        ' 
        ' txtSecondNumber
        ' 
        txtSecondNumber.Location = New Point(257, 65)
        txtSecondNumber.Name = "txtSecondNumber"
        txtSecondNumber.Size = New Size(123, 23)
        txtSecondNumber.TabIndex = 1
        ' 
        ' txtOutput
        ' 
        txtOutput.Location = New Point(133, 119)
        txtOutput.Name = "txtOutput"
        txtOutput.Size = New Size(124, 23)
        txtOutput.TabIndex = 2
        ' 
        ' Label1
        ' 
        Label1.AutoSize = True
        Label1.Location = New Point(45, 91)
        Label1.Name = "Label1"
        Label1.Size = New Size(76, 15)
        Label1.TabIndex = 3
        Label1.Text = "First Number"
        ' 
        ' Label2
        ' 
        Label2.AutoSize = True
        Label2.Location = New Point(275, 91)
        Label2.Name = "Label2"
        Label2.Size = New Size(93, 15)
        Label2.TabIndex = 4
        Label2.Text = "Second Number"
        ' 
        ' Label3
        ' 
        Label3.AutoSize = True
        Label3.Location = New Point(168, 145)
        Label3.Name = "Label3"
        Label3.Size = New Size(51, 15)
        Label3.TabIndex = 5
        Label3.Text = "OUTPUT"
        ' 
        ' btnAddition
        ' 
        btnAddition.Location = New Point(59, 202)
        btnAddition.Name = "btnAddition"
        btnAddition.Size = New Size(110, 46)
        btnAddition.TabIndex = 6
        btnAddition.Text = "ADDITION"
        btnAddition.UseVisualStyleBackColor = True
        ' 
        ' btnSubtraction
        ' 
        btnSubtraction.Location = New Point(227, 202)
        btnSubtraction.Name = "btnSubtraction"
        btnSubtraction.Size = New Size(110, 46)
        btnSubtraction.TabIndex = 7
        btnSubtraction.Text = "SUBTRACTION"
        btnSubtraction.UseVisualStyleBackColor = True
        ' 
        ' btnMultiplication
        ' 
        btnMultiplication.Location = New Point(59, 305)
        btnMultiplication.Name = "btnMultiplication"
        btnMultiplication.Size = New Size(110, 46)
        btnMultiplication.TabIndex = 8
        btnMultiplication.Text = "MULTIPLICATION"
        btnMultiplication.UseVisualStyleBackColor = True
        ' 
        ' btnDivision
        ' 
        btnDivision.Location = New Point(227, 305)
        btnDivision.Name = "btnDivision"
        btnDivision.Size = New Size(110, 46)
        btnDivision.TabIndex = 9
        btnDivision.Text = "DIVISION"
        btnDivision.UseVisualStyleBackColor = True
        ' 
        ' Form1
        ' 
        AutoScaleDimensions = New SizeF(7F, 15F)
        AutoScaleMode = AutoScaleMode.Font
        ClientSize = New Size(392, 391)
        Controls.Add(btnDivision)
        Controls.Add(btnMultiplication)
        Controls.Add(btnSubtraction)
        Controls.Add(btnAddition)
        Controls.Add(Label3)
        Controls.Add(Label2)
        Controls.Add(Label1)
        Controls.Add(txtOutput)
        Controls.Add(txtSecondNumber)
        Controls.Add(txtFirstNumber)
        Name = "Form1"
        Text = "Avtivity 7.1"
        ResumeLayout(False)
        PerformLayout()
    End Sub

    Friend WithEvents txtFirstNumber As TextBox
    Friend WithEvents txtSecondNumber As TextBox
    Friend WithEvents txtOutput As TextBox
    Friend WithEvents Label1 As Label
    Friend WithEvents Label2 As Label
    Friend WithEvents Label3 As Label
    Friend WithEvents btnAddition As Button
    Friend WithEvents btnSubtraction As Button
    Friend WithEvents btnMultiplication As Button
    Friend WithEvents btnDivision As Button

End Class
