#pragma once
//�����������
class Triangle {
protected:
    unsigned int a = 0, b = 0, c = 0, A = 0, B = 0, C = 0;
    void print_infoT() {
        std::cout << "�������:" << "\t" << "a = " << a << ", b = " << b << ", c = " << c << std::endl;
        std::cout << "����:" << "\t\t" << "A = " << A << ", B = " << B << ", C = " << C << "\n\n";
    };
public:
    Triangle() {};
    Triangle(unsigned int T_a, unsigned int T_b, unsigned int T_c, unsigned int T_A, unsigned int T_B, unsigned int T_C) {
        a = T_a; b = T_b; c = T_c;
        A = T_A; B = T_B; C = T_C;
    };
    void print_T() {
        std::cout << "�����������: " << std::endl;
        print_infoT();
    };
    
};

//������������� �����������
class RightTriangle : public Triangle {
public:
    RightTriangle(unsigned int RT_a, unsigned int RT_b, unsigned int RT_c, unsigned int RT_A, unsigned int RT_B, unsigned int RT_C) : Triangle() {
        if (RT_C == 90) {
            a = RT_a; b = RT_b; c = RT_c;
            A = RT_A; B = RT_B; C = RT_C;
        }
        else {
            std::cout << "������������ ��������� ��� �������������� ������������!" << std::endl;
        }
    }
    void print_RT() {
        std::cout << "������������� �����������: " << std::endl;
        print_infoT();
    }
};

//��������������
class IsoscelesTriangle : public Triangle {
public:
    IsoscelesTriangle(unsigned int IT_a, unsigned int IT_b, unsigned int IT_c, unsigned int IT_A, unsigned int IT_B, unsigned int IT_C) : Triangle() {
        if (IT_a == IT_c && IT_A == IT_C) {
            a = IT_a; b = IT_b; c = IT_c;
            A = IT_A; B = IT_B; C = IT_C;
        }
        else {
            std::cout << "������������ ��������� ��� ��������������� ������������!" << std::endl;
        }
    }
    void print_IT() {
        std::cout << "�������������� �����������: " << std::endl;
        print_infoT();
    }
};

//�������������� ����������
class EquilateralTriangle : public Triangle {
public:
    EquilateralTriangle(unsigned int ET_a, unsigned int ET_b, unsigned int ET_c, unsigned int ET_A, unsigned int ET_B, unsigned int ET_C) : Triangle() {
        if (ET_a == ET_b && ET_b == ET_c) {
            a = ET_a; b = ET_b; c = ET_c;
            A = ET_A; B = ET_B; C = ET_C;
        }
        else {
            std::cout << "������������ ��������� ��� ��������������� ������������!" << std::endl;
        }
    }
    void print_ET() {
        std::cout << "�������������� �����������: " << std::endl;
        print_infoT();
    }
};