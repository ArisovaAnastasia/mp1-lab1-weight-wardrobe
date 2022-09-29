#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Russian");
    int h, w, d;
    float p_DSP = 0.00065, p_DVP = 0.00085, p_wood = 0.0015; // кг/см^3
    float m_wall, m_casing, m_doors, m_shelfs, mass;

    printf("Введите высоту, ширину, глубину в см: ");
    scanf("%i%i%i", &h, &w, &d);

    if((180<=h)&&(h<= 220)&&(80<=w)&&(w<=120)&&(50<=d)&&(d<=90)){
        m_wall = h*w*0.5*p_DVP; // масса стенки
        m_casing = 2*d*(w+h)*1.5*p_DSP; // масса боковин и верхних и нижних крышек
        m_doors = h*w*p_wood; // масса дверей
        m_shelfs = d*w*(h/40)*1.5*p_DSP; // масса полок
        mass = m_wall+m_doors+m_casing+m_shelfs; // общая масса
        printf("%.2f", mass);
    } else
        printf("Введены некоректные данные");
}