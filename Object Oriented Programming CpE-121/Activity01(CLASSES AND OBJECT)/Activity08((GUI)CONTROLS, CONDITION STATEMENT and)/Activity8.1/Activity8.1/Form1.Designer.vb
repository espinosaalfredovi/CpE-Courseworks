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
        Dim resources As System.ComponentModel.ComponentResourceManager = New System.ComponentModel.ComponentResourceManager(GetType(Form1))
        RB_adjacent = New RadioButton()
        RB_Opposite = New RadioButton()
        RB_Hypotenuse = New RadioButton()
        txt_first = New TextBox()
        txt_second = New TextBox()
        txt_answer = New TextBox()
        lbl_a = New Label()
        lbl_b = New Label()
        lbl_second = New Label()
        lbl_first = New Label()
        lbl_c = New Label()
        btn_calculate = New Button()
        PictureBox2 = New PictureBox()
        lblpyth = New Label()
        lbla = New Label()
        lblb = New Label()
        lblc = New Label()
        CType(PictureBox2, ComponentModel.ISupportInitialize).BeginInit()
        SuspendLayout()
        ' 
        ' RB_adjacent
        ' 
        RB_adjacent.AutoSize = True
        RB_adjacent.Font = New Font("Segoe UI", 15F)
        RB_adjacent.Location = New Point(59, 303)
        RB_adjacent.Name = "RB_adjacent"
        RB_adjacent.Size = New Size(129, 32)
        RB_adjacent.TabIndex = 0
        RB_adjacent.TabStop = True
        RB_adjacent.Text = "Adjacent(a)"
        RB_adjacent.UseVisualStyleBackColor = True
        ' 
        ' RB_Opposite
        ' 
        RB_Opposite.AutoSize = True
        RB_Opposite.Font = New Font("Segoe UI", 15F)
        RB_Opposite.Location = New Point(59, 341)
        RB_Opposite.Name = "RB_Opposite"
        RB_Opposite.Size = New Size(135, 32)
        RB_Opposite.TabIndex = 1
        RB_Opposite.TabStop = True
        RB_Opposite.Text = "Opposite(b)"
        RB_Opposite.UseVisualStyleBackColor = True
        ' 
        ' RB_Hypotenuse
        ' 
        RB_Hypotenuse.AutoSize = True
        RB_Hypotenuse.Font = New Font("Segoe UI", 15F)
        RB_Hypotenuse.Location = New Point(59, 379)
        RB_Hypotenuse.Name = "RB_Hypotenuse"
        RB_Hypotenuse.Size = New Size(156, 32)
        RB_Hypotenuse.TabIndex = 2
        RB_Hypotenuse.TabStop = True
        RB_Hypotenuse.Text = "Hypotenuse(c)"
        RB_Hypotenuse.UseVisualStyleBackColor = True
        ' 
        ' txt_first
        ' 
        txt_first.Location = New Point(387, 238)
        txt_first.Name = "txt_first"
        txt_first.Size = New Size(122, 23)
        txt_first.TabIndex = 3
        ' 
        ' txt_second
        ' 
        txt_second.Location = New Point(528, 238)
        txt_second.Name = "txt_second"
        txt_second.Size = New Size(122, 23)
        txt_second.TabIndex = 4
        ' 
        ' txt_answer
        ' 
        txt_answer.Location = New Point(666, 238)
        txt_answer.Name = "txt_answer"
        txt_answer.Size = New Size(122, 23)
        txt_answer.TabIndex = 5
        ' 
        ' lbl_a
        ' 
        lbl_a.AutoSize = True
        lbl_a.BackColor = Color.Transparent
        lbl_a.Font = New Font("Segoe UI", 12F)
        lbl_a.Location = New Point(301, 119)
        lbl_a.Name = "lbl_a"
        lbl_a.Size = New Size(18, 21)
        lbl_a.TabIndex = 6
        lbl_a.Text = "a"
        ' 
        ' lbl_b
        ' 
        lbl_b.AutoSize = True
        lbl_b.BackColor = Color.Transparent
        lbl_b.Font = New Font("Segoe UI", 12F)
        lbl_b.Location = New Point(169, 225)
        lbl_b.Name = "lbl_b"
        lbl_b.Size = New Size(19, 21)
        lbl_b.TabIndex = 7
        lbl_b.Text = "b"
        ' 
        ' lbl_second
        ' 
        lbl_second.AutoSize = True
        lbl_second.Location = New Point(551, 264)
        lbl_second.Name = "lbl_second"
        lbl_second.Size = New Size(0, 15)
        lbl_second.TabIndex = 8
        ' 
        ' lbl_first
        ' 
        lbl_first.AutoSize = True
        lbl_first.Location = New Point(407, 264)
        lbl_first.Name = "lbl_first"
        lbl_first.Size = New Size(0, 15)
        lbl_first.TabIndex = 8
        ' 
        ' lbl_c
        ' 
        lbl_c.AutoSize = True
        lbl_c.BackColor = Color.Transparent
        lbl_c.Font = New Font("Segoe UI", 12F)
        lbl_c.Location = New Point(139, 92)
        lbl_c.Name = "lbl_c"
        lbl_c.Size = New Size(17, 21)
        lbl_c.TabIndex = 9
        lbl_c.Text = "c"
        ' 
        ' btn_calculate
        ' 
        btn_calculate.Location = New Point(521, 341)
        btn_calculate.Name = "btn_calculate"
        btn_calculate.Size = New Size(147, 42)
        btn_calculate.TabIndex = 10
        btn_calculate.Text = "Calculate"
        btn_calculate.UseVisualStyleBackColor = True
        ' 
        ' PictureBox2
        ' 
        PictureBox2.BackColor = SystemColors.Control
        PictureBox2.BackgroundImageLayout = ImageLayout.None
        PictureBox2.ErrorImage = CType(resources.GetObject("PictureBox2.ErrorImage"), Image)
        PictureBox2.Image = CType(resources.GetObject("PictureBox2.Image"), Image)
        PictureBox2.InitialImage = CType(resources.GetObject("PictureBox2.InitialImage"), Image)
        PictureBox2.Location = New Point(59, 12)
        PictureBox2.Name = "PictureBox2"
        PictureBox2.Size = New Size(248, 246)
        PictureBox2.SizeMode = PictureBoxSizeMode.Zoom
        PictureBox2.TabIndex = 12
        PictureBox2.TabStop = False
        ' 
        ' lblpyth
        ' 
        lblpyth.AutoSize = True
        lblpyth.Font = New Font("Segoe UI Symbol", 18F, FontStyle.Bold, GraphicsUnit.Point, CByte(0))
        lblpyth.Location = New Point(440, 12)
        lblpyth.Name = "lblpyth"
        lblpyth.Size = New Size(312, 32)
        lblpyth.TabIndex = 14
        lblpyth.Text = "PYTHAGOREAN THEOREM"
        ' 
        ' lbla
        ' 
        lbla.AutoSize = True
        lbla.Font = New Font("Segoe UI", 18F, FontStyle.Bold, GraphicsUnit.Point, CByte(0))
        lbla.Location = New Point(522, 62)
        lbla.Name = "lbla"
        lbla.Size = New Size(139, 32)
        lbla.TabIndex = 15
        lbla.Text = "a² = c² - b²"
        ' 
        ' lblb
        ' 
        lblb.AutoSize = True
        lblb.Font = New Font("Segoe UI", 18F, FontStyle.Bold, GraphicsUnit.Point, CByte(0))
        lblb.Location = New Point(522, 108)
        lblb.Name = "lblb"
        lblb.Size = New Size(139, 32)
        lblb.TabIndex = 16
        lblb.Text = "b² = c² - a²"
        ' 
        ' lblc
        ' 
        lblc.AutoSize = True
        lblc.Font = New Font("Segoe UI", 18F, FontStyle.Bold, GraphicsUnit.Point, CByte(0))
        lblc.Location = New Point(522, 159)
        lblc.Name = "lblc"
        lblc.Size = New Size(146, 32)
        lblc.TabIndex = 17
        lblc.Text = "c² = a² + b²"
        ' 
        ' Form1
        ' 
        AutoScaleDimensions = New SizeF(7F, 15F)
        AutoScaleMode = AutoScaleMode.Font
        ClientSize = New Size(800, 450)
        Controls.Add(lblc)
        Controls.Add(lblb)
        Controls.Add(lbla)
        Controls.Add(lblpyth)
        Controls.Add(btn_calculate)
        Controls.Add(lbl_c)
        Controls.Add(lbl_first)
        Controls.Add(lbl_second)
        Controls.Add(lbl_b)
        Controls.Add(lbl_a)
        Controls.Add(txt_answer)
        Controls.Add(txt_second)
        Controls.Add(txt_first)
        Controls.Add(RB_Hypotenuse)
        Controls.Add(RB_Opposite)
        Controls.Add(RB_adjacent)
        Controls.Add(PictureBox2)
        Name = "Form1"
        Text = "Pythagorean Calculator"
        CType(PictureBox2, ComponentModel.ISupportInitialize).EndInit()
        ResumeLayout(False)
        PerformLayout()
    End Sub

    Friend WithEvents RB_adjacent As RadioButton
    Friend WithEvents RB_Opposite As RadioButton
    Friend WithEvents RB_Hypotenuse As RadioButton
    Friend WithEvents txt_first As TextBox
    Friend WithEvents txt_second As TextBox
    Friend WithEvents txt_answer As TextBox
    Friend WithEvents lbl_a As Label
    Friend WithEvents lbl_b As Label
    Friend WithEvents lbl_second As Label
    Friend WithEvents lbl_first As Label
    Friend WithEvents lbl_c As Label
    Friend WithEvents btn_calculate As Button
    Friend WithEvents PictureBox2 As PictureBox
    Friend WithEvents lblpyth As Label
    Friend WithEvents lbla As Label
    Friend WithEvents lblb As Label
    Friend WithEvents lblc As Label

End Class
