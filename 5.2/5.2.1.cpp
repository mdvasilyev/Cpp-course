#include <iostream>

struct Rational
{
    Rational(int numerator = 0, int denominator = 1) : numerator_(numerator), denominator_(denominator){};

    void add(Rational rational)
    {
        numerator_ = numerator_ * rational.denominator_ + rational.numerator_ * denominator_;
        denominator_ *= rational.denominator_;
    }

    void sub(Rational rational)
    {
        numerator_ = numerator_ * rational.denominator_ - rational.numerator_ * denominator_;
        denominator_ *= rational.denominator_;
    }

    void mul(Rational rational)
    {
        numerator_ *= rational.numerator_;
        denominator_ *= rational.denominator_;
    }

    void div(Rational rational)
    {
        numerator_ *= rational.denominator_;
        denominator_ *= rational.numerator_;
    }

    void neg()
    {
        numerator_ = -numerator_;
    }

    void inv() {}

    double to_double() const
    {
        return numerator_ / (double)denominator_;
    }

    Rational &operator+=(const Rational &rational)
    {
        this->add(rational);
        return *this;
    }
    Rational &operator+=(int d)
    {
        this->add(Rational(d));
        return *this;
    }

    Rational &operator-=(const Rational &rational)
    {
        this->sub(rational);
        return *this;
    }
    Rational &operator-=(int d)
    {
        this->sub(Rational(d));
        return *this;
    }

    Rational &operator*=(const Rational &rational)
    {
        this->mul(rational);
        return *this;
    }
    Rational &operator*=(int d)
    {
        this->mul(Rational(d));
        return *this;
    }

    Rational &operator/=(const Rational &rational)
    {
        this->div(rational);
        return *this;
    }
    Rational &operator/=(int d)
    {
        this->div(Rational(d));
        return *this;
    }

    Rational operator-() const
    {
        Rational r(this->numerator_, this->denominator_);
        r.neg();
        return r;
    }
    Rational operator+() const
    {
        Rational r(this->numerator_, this->denominator_);
        return r;
    }

private:
    int numerator_;
    unsigned denominator_;
};

int main()
{
    Rational r1(1, 2);
    Rational r2(1, 3);
    Rational r3(5);

    r1.add(r2);
    std::cout << r1.to_double() << std::endl;
    r1.sub(r2);
    std::cout << r1.to_double() << std::endl;
    r1.neg();
    std::cout << r1.to_double() << std::endl;
    r3.mul(r1);
    std::cout << r3.to_double() << std::endl;
    r3.div(r2);
    std::cout << r3.to_double() << std::endl;
}