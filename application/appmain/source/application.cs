using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using cppclrwrapper;

namespace mainApplication
{
    public partial class application : Form
    {
        const int MAXPATH = 1000;
        private ClrWrapper m_cvApp = null;
        public application()
        {
            InitializeComponent();
            m_cvApp = new ClrWrapper();
        }

        private void btn_SobelFilter_Click(object sender, EventArgs e)
        {
            string inputfilepath = null;
            string outputfilepath = null;
            // open file dialog   
            OpenFileDialog open = new OpenFileDialog();
            // input image types  
            open.Filter = "Image Files(*.jpg; *.jpeg; *.gif; *.bmp)|*.jpg; *.jpeg; *.gif; *.bmp";
            if (open.ShowDialog() == DialogResult.OK)
            {
                inputfilepath = open.FileName;
                int pos = inputfilepath.LastIndexOf("\\");
                outputfilepath = inputfilepath.Insert(pos+1,"out_");
                int retVal = m_cvApp.executeSobelFilter(inputfilepath, outputfilepath);
                displayoutimage outImage = new displayoutimage("Sobel Filter");
                outImage.displayoutput(outputfilepath);
                outImage.ShowDialog();
            }
        }

    }
}
