using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using TweetBank;

namespace TweetBankWPF
{
    public partial class application : Form
    {
        private TweetBankCLR mTBCLR = null;
        public application()
        {
            InitializeComponent();
            mTBCLR = new TweetBankCLR();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            
            int retVal = mTBCLR.tweet();
            label1.Text = retVal.ToString();
        }
    }
}
