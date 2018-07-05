using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace mainApplication
{
    public partial class displayoutimage : Form
    {
        public displayoutimage(string formHeaderText)
        {
            InitializeComponent();
            this.Width = Screen.PrimaryScreen.WorkingArea.Size.Width;
            this.Height = Screen.PrimaryScreen.WorkingArea.Size.Height;
            this.Text = formHeaderText;
        }

        public void displayoutput(string outputImage)
        {
             pictureBox1.Image = new Bitmap(outputImage);
        }

    }
}
