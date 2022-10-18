declare
r number:=2;
pi constant number:=3.14126;
C number;
A number;
procedure findCA(r in number,pi in number,C out number,A out number) is
begin
A:=(pi*r*r);
C:=(2*pi*r);
end;
begin
findCA(r,pi,C,A);
dbms_output.put_line('Area is '||A);
dbms_output.put_line('circumference is '||C);
end;
