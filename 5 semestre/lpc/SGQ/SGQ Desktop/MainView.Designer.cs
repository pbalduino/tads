namespace SGQ.View
{
    partial class MainView
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
            this.menuStrip = new System.Windows.Forms.MenuStrip();
            this.mnuSistema = new System.Windows.Forms.ToolStripMenuItem();
            this.mnuUsuario = new System.Windows.Forms.ToolStripMenuItem();
            this.mnuDepartamento = new System.Windows.Forms.ToolStripMenuItem();
            this.mnuMaterial = new System.Windows.Forms.ToolStripMenuItem();
            this.mnuSair = new System.Windows.Forms.ToolStripMenuItem();
            this.toolStripMenuItem1 = new System.Windows.Forms.ToolStripSeparator();
            this.menuStrip.SuspendLayout();
            this.SuspendLayout();
            // 
            // menuStrip
            // 
            this.menuStrip.Items.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.mnuSistema});
            this.menuStrip.Location = new System.Drawing.Point(0, 0);
            this.menuStrip.Name = "menuStrip";
            this.menuStrip.Size = new System.Drawing.Size(632, 24);
            this.menuStrip.TabIndex = 0;
            this.menuStrip.Text = "MenuStrip";
            // 
            // mnuSistema
            // 
            this.mnuSistema.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.mnuUsuario,
            this.mnuDepartamento,
            this.mnuMaterial,
            this.toolStripMenuItem1,
            this.mnuSair});
            this.mnuSistema.ImageTransparentColor = System.Drawing.SystemColors.ActiveBorder;
            this.mnuSistema.Name = "mnuSistema";
            this.mnuSistema.Size = new System.Drawing.Size(56, 20);
            this.mnuSistema.Text = "&Sistema";
            // 
            // mnuUsuario
            // 
            this.mnuUsuario.Name = "mnuUsuario";
            this.mnuUsuario.Size = new System.Drawing.Size(159, 22);
            this.mnuUsuario.Text = "&Usuários";
            this.mnuUsuario.Click += new System.EventHandler(this.usuáriosToolStripMenuItem_Click);
            // 
            // mnuDepartamento
            // 
            this.mnuDepartamento.Name = "mnuDepartamento";
            this.mnuDepartamento.Size = new System.Drawing.Size(159, 22);
            this.mnuDepartamento.Text = "&Departamentos";
            this.mnuDepartamento.Click += new System.EventHandler(this.mnuDepartamento_Click);
            // 
            // mnuMaterial
            // 
            this.mnuMaterial.Name = "mnuMaterial";
            this.mnuMaterial.Size = new System.Drawing.Size(159, 22);
            this.mnuMaterial.Text = "&Material";
            this.mnuMaterial.Click += new System.EventHandler(this.mnuMaterial_Click);
            // 
            // mnuSair
            // 
            this.mnuSair.Name = "mnuSair";
            this.mnuSair.Size = new System.Drawing.Size(159, 22);
            this.mnuSair.Text = "Sai&r";
            this.mnuSair.Click += new System.EventHandler(this.mnuSair_Click);
            // 
            // toolStripMenuItem1
            // 
            this.toolStripMenuItem1.Name = "toolStripMenuItem1";
            this.toolStripMenuItem1.Size = new System.Drawing.Size(156, 6);
            // 
            // MainView
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(632, 453);
            this.Controls.Add(this.menuStrip);
            this.IsMdiContainer = true;
            this.MainMenuStrip = this.menuStrip;
            this.Name = "MainView";
            this.Text = "Sistema Gerenciador de Qualidade";
            this.FormClosed += new System.Windows.Forms.FormClosedEventHandler(this.MainView_FormClosed);
            this.menuStrip.ResumeLayout(false);
            this.menuStrip.PerformLayout();
            this.ResumeLayout(false);
            this.PerformLayout();

        }
        #endregion


        private System.Windows.Forms.MenuStrip menuStrip;
        private System.Windows.Forms.ToolStripMenuItem mnuSistema;
        private System.Windows.Forms.ToolStripMenuItem mnuUsuario;
        private System.Windows.Forms.ToolStripMenuItem mnuDepartamento;
        private System.Windows.Forms.ToolStripMenuItem mnuMaterial;
        private System.Windows.Forms.ToolStripMenuItem mnuSair;
        private System.Windows.Forms.ToolStripSeparator toolStripMenuItem1;
    }
}



