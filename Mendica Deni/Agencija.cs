using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace vjezbaZavrsniRad
{
    public class Agencija
    {
        string email, naziv;
        long oib, brojRacuna;

        public Agencija(string email, string naziv, long oib, long brojRacuna)
        {
            this.Email = email;
            this.Naziv = naziv;
            this.Oib = oib;
            this.BrojRacuna = brojRacuna;
        }

        public string Email { get => email; set => email = value; }
        public string Naziv { get => naziv; set => naziv = value; }
        public long Oib { get => oib; set => oib = value; }
        public long BrojRacuna { get => brojRacuna; set => brojRacuna = value; }
    }
}
