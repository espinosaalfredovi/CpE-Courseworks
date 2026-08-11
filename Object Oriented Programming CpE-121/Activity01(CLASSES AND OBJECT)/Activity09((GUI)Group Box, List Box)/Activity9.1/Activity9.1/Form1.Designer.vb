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
        lbltitle = New Label()
        lblFirstName = New Label()
        txtFirstName = New TextBox()
        lblLastName = New Label()
        txtLastName = New TextBox()
        btnAdd = New Button()
        btnClear = New Button()
        lstStudents = New ListBox()
        SuspendLayout()
        ' 
        ' lbltitle
        ' 
        lbltitle.AutoSize = True
        lbltitle.Font = New Font("Segoe UI Emoji", 15.75F, FontStyle.Bold, GraphicsUnit.Point, CByte(0))
        lbltitle.Location = New Point(68, 9)
        lbltitle.Name = "lbltitle"
        lbltitle.Size = New Size(200, 28)
        lbltitle.TabIndex = 0
        lbltitle.Text = "Student Name List"
        ' 
        ' lblFirstName
        ' 
        lblFirstName.AutoSize = True
        lblFirstName.Location = New Point(23, 82)
        lblFirstName.Name = "lblFirstName"
        lblFirstName.Size = New Size(64, 15)
        lblFirstName.TabIndex = 1
        lblFirstName.Text = "First Name"
        ' 
        ' txtFirstName
        ' 
        txtFirstName.Location = New Point(93, 82)
        txtFirstName.Name = "txtFirstName"
        txtFirstName.Size = New Size(100, 23)
        txtFirstName.TabIndex = 2
        ' 
        ' lblLastName
        ' 
        lblLastName.AutoSize = True
        lblLastName.Location = New Point(24, 136)
        lblLastName.Name = "lblLastName"
        lblLastName.Size = New Size(63, 15)
        lblLastName.TabIndex = 3
        lblLastName.Text = "Last Name"
        ' 
        ' txtLastName
        ' 
        txtLastName.Location = New Point(93, 133)
        txtLastName.Name = "txtLastName"
        txtLastName.Size = New Size(100, 23)
        txtLastName.TabIndex = 4
        ' 
        ' btnAdd
        ' 
        btnAdd.Location = New Point(44, 188)
        btnAdd.Name = "btnAdd"
        btnAdd.Size = New Size(75, 23)
        btnAdd.TabIndex = 6
        btnAdd.Text = "ADD"
        btnAdd.UseVisualStyleBackColor = True
        ' 
        ' btnClear
        ' 
        btnClear.Location = New Point(193, 188)
        btnClear.Name = "btnClear"
        btnClear.Size = New Size(75, 23)
        btnClear.TabIndex = 7
        btnClear.Text = "CLEAR"
        btnClear.UseVisualStyleBackColor = True
        ' 
        ' lstStudents
        ' 
        lstStudents.FormattingEnabled = True
        lstStudents.Location = New Point(12, 241)
        lstStudents.Name = "lstStudents"
        lstStudents.Size = New Size(316, 184)
        lstStudents.TabIndex = 8
        ' 
        ' Form1
        ' 
        AutoScaleDimensions = New SizeF(7F, 15F)
        AutoScaleMode = AutoScaleMode.Font
        ClientSize = New Size(358, 450)
        Controls.Add(lstStudents)
        Controls.Add(btnClear)
        Controls.Add(btnAdd)
        Controls.Add(txtLastName)
        Controls.Add(lblLastName)
        Controls.Add(txtFirstName)
        Controls.Add(lblFirstName)
        Controls.Add(lbltitle)
        Name = "Form1"
        Text = "Form1"
        ResumeLayout(False)
        PerformLayout()
    End Sub

    Friend WithEvents lbltitle As Label
    Friend WithEvents lblFirstName As Label
    Friend WithEvents txtFirstName As TextBox
    Friend WithEvents lblLastName As Label
    Friend WithEvents txtLastName As TextBox
    Friend WithEvents btnAdd As Button
    Friend WithEvents btnClear As Button
    Friend WithEvents lstStudents As ListBox

End Class
