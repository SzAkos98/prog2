
class KutyaFele {
public:
	     virtual void emberbarat() {};
};


class Program {
public:
     void fgv ( KutyaFele &kutya ) {
	kutya.emberbarat();
     }
};


class Tacsko : public KutyaFele
{};

class Farkas : public KutyaFele 
{};

int main ( int argc, char **argv )
{
     Program program;
     KutyaFele kutya;
     program.fgv ( kutya );

     Tacsko tacsko;
     program.fgv ( tacsko );

     Farkas farkas;
     program.fgv ( farkas );

}
