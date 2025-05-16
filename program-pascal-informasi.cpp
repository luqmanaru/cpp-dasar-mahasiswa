program Data_Mahasiswa;
uses crt;

type 
  mhs = record
    NPM : String[15];
    Nama : String[20];
  end;

var 
  data : mhs;

begin
  clrscr; // Membersihkan layar
  Write('NPM : '); Readln(data.NPM);
  Write('Nama : '); Readln(data.Nama);
  Writeln;
  Writeln('Data Mahasiswa:');
  Writeln('NPM : ', data.NPM);
  Writeln('Nama : ', data.Nama);
  Readln; // Menahan tampilan di layar
end.
