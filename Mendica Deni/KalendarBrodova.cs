using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace vjezbaZavrsniRad
{
    public partial class KalendarBrodova : Form
    {
        //kreirali smo varijablu tipa string - path koja na njeno pozivanje kreira datoteku Kalendari.xml na Desktopu lokalnog računala
        string path = System.IO.Path.Combine(Environment.GetFolderPath(Environment.SpecialFolder.Desktop), "Kalendari.xml");

        public KalendarBrodova()
        {
            InitializeComponent();
        }

        private void KalendarBrodova_Load(object sender, EventArgs e)
        {
            //try catch zbog mogućnosti da nepostoji xml od kuda se učitavaju podatci
            try
            {
                //kreiranje objekta ds klase DataSet
                DataSet ds = new DataSet();

                //čitanje xml datoteke
                ds.ReadXml(path);

                //
                foreach (DataRow item in ds.Tables["Kalendar"].Rows)
                {
                    int n = dtKalendar.Rows.Add();

                    dtKalendar.Rows[n].Cells[0].Value = item[1];
                    dtKalendar.Rows[n].Cells[1].Value = item[2];
                    dtKalendar.Rows[n].Cells[2].Value = item[0];
                    dtKalendar.Rows[n].Cells[3].Value = item[3];
                    dtKalendar.Rows[n].Cells[4].Value = item[5];
                    dtKalendar.Rows[n].Cells[5].Value = item[4];


                }

            }
            catch(Exception ex)
            {

            }

           
        }

        private void button1_Click(object sender, EventArgs e)
        {
            this.Hide();
            Pocetna fm = new Pocetna();
            fm.Show();
        }

        private void label6_Click(object sender, EventArgs e)
        {

        }

        private void label4_Click(object sender, EventArgs e)
        {

        }

        private void button2_Click(object sender, EventArgs e)
        {
            this.Hide();
            UpisUKalendar fm = new UpisUKalendar();
            fm.Show();
        }

        private void pictureBox1_Click(object sender, EventArgs e)
        {

        }
    }
}
