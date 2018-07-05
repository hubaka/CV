using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace TweetBankWPF
{
    public partial class displayoutimage : Form
    {
        public displayoutimage()
        {
            InitializeComponent();
            this.Width = Screen.PrimaryScreen.WorkingArea.Size.Width;
            this.Height = Screen.PrimaryScreen.WorkingArea.Size.Height;
        }

        public void displayoutput()
        {
            // open file dialog   
            OpenFileDialog open = new OpenFileDialog();
            // image filters  
            open.Filter = "Image Files(*.jpg; *.jpeg; *.gif; *.bmp)|*.jpg; *.jpeg; *.gif; *.bmp";
            if (open.ShowDialog() == DialogResult.OK)
            {
                Bitmap outImage = new Bitmap(open.FileName);
                pictureBox1.Image = outImage;
            }
        }

    }
}
