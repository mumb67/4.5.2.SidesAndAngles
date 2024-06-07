#pragma once
class Quadraangle {
protected:
    unsigned int a = 0, b = 0, c = 0, d = 0, A = 0, B = 0, C = 0, D = 0;
    void print_infoQ() {
        std::cout << "�������:" << "\t" << "a = " << a << ", b = " << b << ", c = " << c << ", d = " << d << std::endl;
        std::cout << "����:" << "\t\t" << "A = " << A << ", B = " << B << ", C = " << C << ", D = " << D << "\n\n";
    };
    
public:
    Quadraangle() {};
    Quadraangle(unsigned int Q_a, unsigned int Q_b, unsigned int Q_c, unsigned int Q_d, unsigned int Q_A, unsigned int Q_B, unsigned int Q_C, unsigned int Q_D) {
        a = Q_a; b = Q_b, c = Q_c, d = Q_d, A = Q_A, B = Q_B, C = Q_C, D = Q_D;
    };
    
    void print_Q() {
        std::cout << "���������������: " << std::endl;
        print_infoQ();
    };
};

//�������������
class Rectangle : public Quadraangle {
public:
    Rectangle(unsigned int RQ_a, unsigned int RQ_b, unsigned int RQ_c, unsigned int RQ_d, unsigned int RQ_A, unsigned int RQ_B, unsigned int RQ_C, unsigned int RQ_D) : Quadraangle() {
        if ((RQ_a == RQ_c) && (RQ_b == RQ_d)) {
            a = RQ_a, b = RQ_b, c = RQ_c, d = RQ_d, A = RQ_A, B = RQ_B, C = RQ_C, D = RQ_D;
        }
        else {
            std::cout << "������������ ��������� ��� ��������������!" << std::endl;
        }
    };

    void print_RQ() {
        std::cout << "������������� : " << std::endl;
        print_infoQ();
    }
};

//�������
class Square : public Quadraangle {
public:
    Square(unsigned int RQ_a, unsigned int RQ_b, unsigned int RQ_c, unsigned int RQ_d, unsigned int RQ_A, unsigned int RQ_B, unsigned int RQ_C, unsigned int RQ_D) : Quadraangle() {
        if ((RQ_a == RQ_b && RQ_b == RQ_c && RQ_c == RQ_d) && (RQ_A == 90 && RQ_B == 90 && RQ_C == 90 && RQ_D == 90)) {
            a = RQ_a, b = RQ_b, c = RQ_c, d = RQ_d, A = RQ_A, B = RQ_B, C = RQ_C, D = RQ_D;
        }
        else {
            std::cout << "������������ ��������� ��� ��������!" << std::endl;
        };
    };
    void print_SQ() {
        std::cout << "������� : " << std::endl;
        print_infoQ();
    }
};

//��������������
class Parallelogramm : public Quadraangle {
public:
    Parallelogramm(unsigned int RQ_a, unsigned int RQ_b, unsigned int RQ_c, unsigned int RQ_d, unsigned int RQ_A, unsigned int RQ_B, unsigned int RQ_C, unsigned int RQ_D) : Quadraangle() {
        if (((RQ_a == RQ_c) && (RQ_b == RQ_d)) && ((RQ_A == RQ_C) && (RQ_B == RQ_D))) {
            a = RQ_a, b = RQ_b, c = RQ_c, d = RQ_d, A = RQ_A, B = RQ_B, C = RQ_C, D = RQ_D;
        }
        else {
            std::cout << "������������ ��������� ��� ���������������!" << std::endl;
        }
    };

    void print_PQ() {
        std::cout << "�������������� : " << std::endl;
        print_infoQ();
    }
};


//����
class Rhomb : public Quadraangle {
public:
    Rhomb(unsigned int RQ_a, unsigned int RQ_b, unsigned int RQ_c, unsigned int RQ_d, unsigned int RQ_A, unsigned int RQ_B, unsigned int RQ_C, unsigned int RQ_D) : Quadraangle() {
        if ((RQ_a == RQ_b && RQ_b == RQ_c && RQ_c == RQ_d) && ((RQ_A == RQ_C) && (RQ_B == RQ_D))) {
            a = RQ_a, b = RQ_b, c = RQ_c, d = RQ_d, A = RQ_A, B = RQ_B, C = RQ_C, D = RQ_D;
        }
        else {
            std::cout << "������������ ��������� ��� �����!" << std::endl;
        };
    };
    void print_RhQ() {
        std::cout << "P��� : " << std::endl;
        print_infoQ();
    }
};