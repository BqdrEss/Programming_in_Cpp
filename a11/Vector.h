class Vector{
private:
  int n;
  double *v;
public:
  Vector();//empty constructor
  Vector(int,double*);
  Vector(const Vector &p){n=p.n;v=p.v;}//copy constructor
  void setN(int newn);//setters
  void setV(double *newv);
  int getN();//getters
  double *getV();
  ~Vector();//destructors
  double Norm()const;//methods
  Vector add(const Vector &a)const;
  Vector diff(const Vector &a)const;
  double scal_prod(const Vector &a)const;
  void print ();
};