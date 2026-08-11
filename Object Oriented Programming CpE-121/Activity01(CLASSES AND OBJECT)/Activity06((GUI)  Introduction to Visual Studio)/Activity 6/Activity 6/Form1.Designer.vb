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
        btnFirstName = New Button()
        btnLastName = New Button()
        btnFullName = New Button()
        SuspendLayout()
        ' 
        ' btnFirstName
        ' 
        btnFirstName.Location = New Point(96, 129)
        btnFirstName.Name = "btnFirstName"
        btnFirstName.Size = New Size(157, 46)
        btnFirstName.TabIndex = 0
        btnFirstName.Text = "First Name"
        btnFirstName.UseVisualStyleBackColor = True
        ' 
        ' btnLastName
        ' 
        btnLastName.Location = New Point(96, 181)
        btnLastName.Name = "btnLastName"
        btnLastName.Size = New Size(157, 46)
        btnLastName.TabIndex = 1
        btnLastName.Text = "Last Name"
        btnLastName.UseVisualStyleBackColor = True
        ' 
        ' btnFullName
        ' 
        btnFullName.Location = New Point(96, 233)
        btnFullName.Name = "btnFullName"
        btnFullName.Size = New Size(157, 46)
        btnFullName.TabIndex = 2
        btnFullName.Text = "Full Name"
        btnFullName.UseVisualStyleBackColor = True
        ' 
        ' Form1
        ' 
        AutoScaleDimensions = New SizeF(7F, 15F)
        AutoScaleMode = AutoScaleMode.Font
        ClientSize = New Size(352, 336)
        Controls.Add(btnFullName)
        Controls.Add(btnLastName)
        Controls.Add(btnFirstName)
        Name = "Form1"
        Text = "Activity 6"
        ResumeLayout(False)
    End Sub

    Friend WithEvents btnFirstName As Button
    Friend WithEvents btnLastName As Button
    Friend WithEvents btnFullName As Button

End Class
