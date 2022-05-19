using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace vjezbaZavrsniRad
{
    ////kreiramo novu klasu Brod
    public class Brod
    {
        //kreiramo varijable tipa string
        string ime, zastava, vrsta;

        //kreiramo varijablu tipa integer
        int imo;

        //kreiramo varijable tipa float
        float duzina, sirina, gaz;

        public Brod()
        {
        }

        //definiramo konstruktore
        public Brod(string ime, string zastava, string vrsta, int imo, float duzina, float sirina, float gaz)
        {
            this.ime = ime;
            this.zastava = zastava;
            this.vrsta = vrsta;
            this.imo = imo;
            this.duzina = duzina;
            this.sirina = sirina;
            this.gaz = gaz;
        }

        //definiramo getere i setere
        public string Ime { get => ime; set => ime = value; }
        public string Zastava { get => zastava; set => zastava = value; }
        public string Vrsta { get => vrsta; set => vrsta = value; }
        public int Imo { get => imo; set => imo = value; }
        public float Duzina { get => duzina; set => duzina = value; }
        public float Sirina { get => sirina; set => sirina = value; }
        public float Gaz { get => gaz; set => gaz = value; }
    }
}
