
namespace vjezbaZavrsniRad
{
    partial class KalendarBrodova
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(KalendarBrodova));
            this.btnNatragKBP = new System.Windows.Forms.Button();
            this.groupBox2 = new System.Windows.Forms.GroupBox();
            this.dtKalendar = new System.Windows.Forms.DataGridView();
            this.Column1 = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.Column2 = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.Column3 = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.Column4 = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.Column5 = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.Column6 = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.btnKalendarUnosUKalendar = new System.Windows.Forms.Button();
            this.richTextBoxNaslov = new System.Windows.Forms.RichTextBox();
            this.pictureBox1 = new System.Windows.Forms.PictureBox();
            this.groupBox2.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.dtKalendar)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox1)).BeginInit();
            this.SuspendLayout();
            // 
            // btnNatragKBP
            // 
            this.btnNatragKBP.BackColor = System.Drawing.Color.Silver;
            this.btnNatragKBP.Location = new System.Drawing.Point(53, 42);
            this.btnNatragKBP.Margin = new System.Windows.Forms.Padding(3, 2, 3, 2);
            this.btnNatragKBP.Name = "btnNatragKBP";
            this.btnNatragKBP.Size = new System.Drawing.Size(187, 89);
            this.btnNatragKBP.TabIndex = 0;
            this.btnNatragKBP.Text = "NATRAG";
            this.btnNatragKBP.UseVisualStyleBackColor = false;
            this.btnNatragKBP.Click += new System.EventHandler(this.button1_Click);
            // 
            // groupBox2
            // 
            this.groupBox2.Anchor = System.Windows.Forms.AnchorStyles.None;
            this.groupBox2.Controls.Add(this.dtKalendar);
            this.groupBox2.Controls.Add(this.btnKalendarUnosUKalendar);
            this.groupBox2.Controls.Add(this.btnNatragKBP);
            this.groupBox2.Controls.Add(this.richTextBoxNaslov);
            this.groupBox2.Controls.Add(this.pictureBox1);
            this.groupBox2.Location = new System.Drawing.Point(405, 150);
            this.groupBox2.Margin = new System.Windows.Forms.Padding(3, 2, 3, 2);
            this.groupBox2.Name = "groupBox2";
            this.groupBox2.Padding = new System.Windows.Forms.Padding(3, 2, 3, 2);
            this.groupBox2.Size = new System.Drawing.Size(1107, 779);
            this.groupBox2.TabIndex = 6;
            this.groupBox2.TabStop = false;
            // 
            // dtKalendar
            // 
            this.dtKalendar.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            this.dtKalendar.Columns.AddRange(new System.Windows.Forms.DataGridViewColumn[] {
            this.Column1,
            this.Column2,
            this.Column3,
            this.Column4,
            this.Column5,
            this.Column6});
            this.dtKalendar.Location = new System.Drawing.Point(53, 382);
            this.dtKalendar.Margin = new System.Windows.Forms.Padding(3, 2, 3, 2);
            this.dtKalendar.Name = "dtKalendar";
            this.dtKalendar.RowHeadersVisible = false;
            this.dtKalendar.RowHeadersWidth = 51;
            this.dtKalendar.RowTemplate.Height = 24;
            this.dtKalendar.Size = new System.Drawing.Size(1004, 295);
            this.dtKalendar.TabIndex = 16;
            // 
            // Column1
            // 
            this.Column1.HeaderText = "DOLAZAK";
            this.Column1.MinimumWidth = 6;
            this.Column1.Name = "Column1";
            this.Column1.ReadOnly = true;
            this.Column1.Width = 125;
            // 
            // Column2
            // 
            this.Column2.HeaderText = "ODLAZAK";
            this.Column2.MinimumWidth = 6;
            this.Column2.Name = "Column2";
            this.Column2.ReadOnly = true;
            this.Column2.Width = 125;
            // 
            // Column3
            // 
            this.Column3.HeaderText = "BROD";
            this.Column3.MinimumWidth = 6;
            this.Column3.Name = "Column3";
            this.Column3.ReadOnly = true;
            this.Column3.Width = 125;
            // 
            // Column4
            // 
            this.Column4.HeaderText = "AGENCIJA";
            this.Column4.MinimumWidth = 6;
            this.Column4.Name = "Column4";
            this.Column4.ReadOnly = true;
            this.Column4.Width = 125;
            // 
            // Column5
            // 
            this.Column5.HeaderText = "VEZ";
            this.Column5.MinimumWidth = 6;
            this.Column5.Name = "Column5";
            this.Column5.ReadOnly = true;
            this.Column5.Width = 125;
            // 
            // Column6
            // 
            this.Column6.HeaderText = "STANJE";
            this.Column6.MinimumWidth = 6;
            this.Column6.Name = "Column6";
            this.Column6.ReadOnly = true;
            this.Column6.Width = 125;
            // 
            // btnKalendarUnosUKalendar
            // 
            this.btnKalendarUnosUKalendar.BackColor = System.Drawing.Color.Silver;
            this.btnKalendarUnosUKalendar.Location = new System.Drawing.Point(405, 683);
            this.btnKalendarUnosUKalendar.Margin = new System.Windows.Forms.Padding(3, 2, 3, 2);
            this.btnKalendarUnosUKalendar.Name = "btnKalendarUnosUKalendar";
            this.btnKalendarUnosUKalendar.Size = new System.Drawing.Size(312, 79);
            this.btnKalendarUnosUKalendar.TabIndex = 15;
            this.btnKalendarUnosUKalendar.Text = "UNOS U KALENDAR";
            this.btnKalendarUnosUKalendar.UseVisualStyleBackColor = false;
            this.btnKalendarUnosUKalendar.Click += new System.EventHandler(this.button2_Click);
            // 
            // richTextBoxNaslov
            // 
            this.richTextBoxNaslov.BackColor = System.Drawing.Color.Azure;
            this.richTextBoxNaslov.BorderStyle = System.Windows.Forms.BorderStyle.None;
            this.richTextBoxNaslov.Font = new System.Drawing.Font("Microsoft Sans Serif", 36F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(238)));
            this.richTextBoxNaslov.ForeColor = System.Drawing.Color.Navy;
            this.richTextBoxNaslov.Location = new System.Drawing.Point(333, 32);
            this.richTextBoxNaslov.Margin = new System.Windows.Forms.Padding(3, 2, 3, 2);
            this.richTextBoxNaslov.Name = "richTextBoxNaslov";
            this.richTextBoxNaslov.Size = new System.Drawing.Size(741, 78);
            this.richTextBoxNaslov.TabIndex = 7;
            this.richTextBoxNaslov.Text = "KALENDAR BRODOVA";
            // 
            // pictureBox1
            // 
            this.pictureBox1.BackgroundImageLayout = System.Windows.Forms.ImageLayout.None;
            this.pictureBox1.Image = global::vjezbaZavrsniRad.Properties.Resources.naslovna_removebg_preview;
            this.pictureBox1.Location = new System.Drawing.Point(355, 42);
            this.pictureBox1.Margin = new System.Windows.Forms.Padding(3, 2, 3, 2);
            this.pictureBox1.Name = "pictureBox1";
            this.pictureBox1.Size = new System.Drawing.Size(557, 246);
            this.pictureBox1.TabIndex = 6;
            this.pictureBox1.TabStop = false;
            this.pictureBox1.Click += new System.EventHandler(this.pictureBox1_Click);
            // 
            // KalendarBrodova
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 16F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.Color.Azure;
            this.ClientSize = new System.Drawing.Size(1924, 1055);
            this.Controls.Add(this.groupBox2);
            this.Icon = ((System.Drawing.Icon)(resources.GetObject("$this.Icon")));
            this.Margin = new System.Windows.Forms.Padding(3, 2, 3, 2);
            this.Name = "KalendarBrodova";
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "Kalendar brodova";
            this.WindowState = System.Windows.Forms.FormWindowState.Maximized;
            this.Load += new System.EventHandler(this.KalendarBrodova_Load);
            this.groupBox2.ResumeLayout(false);
            ((System.ComponentModel.ISupportInitialize)(this.dtKalendar)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox1)).EndInit();
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.Button btnNatragKBP;
        private System.Windows.Forms.GroupBox groupBox2;
        private System.Windows.Forms.RichTextBox richTextBoxNaslov;
        private System.Windows.Forms.PictureBox pictureBox1;
        private System.Windows.Forms.Button btnKalendarUnosUKalendar;
        private System.Windows.Forms.DataGridView dtKalendar;
        private System.Windows.Forms.DataGridViewTextBoxColumn Column1;
        private System.Windows.Forms.DataGridViewTextBoxColumn Column2;
        private System.Windows.Forms.DataGridViewTextBoxColumn Column3;
        private System.Windows.Forms.DataGridViewTextBoxColumn Column4;
        private System.Windows.Forms.DataGridViewTextBoxColumn Column5;
        private System.Windows.Forms.DataGridViewTextBoxColumn Column6;
    }
}