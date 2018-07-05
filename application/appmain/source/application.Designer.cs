namespace mainApplication
{
    partial class application
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
            this.btn_SobelFilter = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // btn_SobelFilter
            // 
            this.btn_SobelFilter.Location = new System.Drawing.Point(11, 22);
            this.btn_SobelFilter.Margin = new System.Windows.Forms.Padding(2, 2, 2, 2);
            this.btn_SobelFilter.Name = "btn_SobelFilter";
            this.btn_SobelFilter.Size = new System.Drawing.Size(66, 26);
            this.btn_SobelFilter.TabIndex = 0;
            this.btn_SobelFilter.Text = "S-F";
            this.btn_SobelFilter.UseVisualStyleBackColor = true;
            this.btn_SobelFilter.Click += new System.EventHandler(this.btn_SobelFilter_Click);
            // 
            // application
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(212, 206);
            this.Controls.Add(this.btn_SobelFilter);
            this.Margin = new System.Windows.Forms.Padding(2, 2, 2, 2);
            this.Name = "application";
            this.Text = "Application";
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.Button btn_SobelFilter;
    }
}

