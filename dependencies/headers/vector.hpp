#pragma once

#include <vector>

class Vector2
{
    public:
        float X = 0;
        float Y = 0;

        // Constructors
        Vector2(); // Default constructor
        Vector2(float X, float Y); // Parameterized constructor

        // Operator Overloads
        Vector2 operator+(const Vector2& other) const;
        Vector2 operator-(const Vector2& other) const;
        Vector2 operator*(const Vector2& other) const;
        Vector2 operator/(const Vector2& other) const;

        // Member Functions
        float magnitude() const;
        void normalize();
        float dot(const Vector2& other) const;
};

class int2
{
    public:
        int X;
        int Y;

        int2();
        int2(int newX, int newY);

        // Operator Overloads
        int2 operator+(const int2& other) const;
        int2 operator-(const int2& other) const;
        int2 operator*(const int2& other) const;
        int2 operator/(const int2& other) const;
};

class Vector3
{
    public:
        float X = 0;
        float Y = 0;
        float Z = 0;

        // Constructors
        Vector3(); // Default constructor
        Vector3(float X, float Y, float Z); // Parameterized constructor

        // Operator Overloads
        Vector3 operator+(const Vector3& other) const;
        Vector3 operator-(const Vector3& other) const;
        Vector3 operator*(const Vector3& other) const;
        Vector3 operator/(const Vector3& other) const;

        // Member Functions
        float magnitude() const;
        void normalize();
        float dot(const Vector3& other) const;
};

// slightly more general version of Vector3
class float3
{
    public:
        float X = 0;
        float Y = 0;
        float Z = 0;

        // Constructors
        float3(); // Default constructor
        float3(float X, float Y, float Z); // Parameterized constructor

        // Operator Overloads
        float3 operator+(const float3& other) const;
        float3 operator-(const float3& other) const;
        float3 operator*(const float3& other) const;
        float3 operator/(const float3& other) const;

        // Member Functions
        float magnitude() const;
        void normalize();
        float dot(const float3& other) const;
};

class int3
{
    public:
        int X = 0;
        int Y = 0;
        int Z = 0;

        // Constructors
        int3(); // Default constructor
        int3(int X, int Y, int Z); // Parameterized constructor

        // Operator Overloads
        int3 operator+(const int3& other) const;
        int3 operator-(const int3& other) const;
        int3 operator*(const int3& other) const;
        int3 operator/(const int3& other) const;

        // Member Functions
        float magnitude() const;
        void normalize();
        float dot(const int3& other) const;
};

class Vector4
{
    public:
        float X = 0;
        float Y = 0;
        float Z = 0;
        float W = 0;

        // Constructors
        Vector4(); // Default constructor
        Vector4(float X, float Y, float Z, float W); // Parameterized constructor

        // Operator Overloads
        Vector4 operator+(const Vector4& other) const;
        Vector4 operator-(const Vector4& other) const;
        Vector4 operator*(const Vector4& other) const;
        Vector4 operator/(const Vector4& other) const;

        // Member Functions
        float magnitude() const;
        void normalize();
        float dot(const Vector4& other) const;
};

// slightly more general version of Vector4
class float4
{
    public:
        float X = 0;
        float Y = 0;
        float Z = 0;
        float W = 0;

        // Constructors
        float4(); // Default constructor
        float4(float X, float Y, float Z, float W); // Parameterized constructor

        // Operator Overloads
        float4 operator+(const float4& other) const;
        float4 operator-(const float4& other) const;
        float4 operator*(const float4& other) const;
        float4 operator/(const float4& other) const;

        // Member Functions
        float magnitude() const;
        void normalize();
        float dot(const float4& other) const;
};

class int4
{
    public:
        int X = 0;
        int Y = 0;
        int Z = 0;
        int W = 0;

        // Constructors
        int4(); // Default constructor
        int4(int X, int Y, int Z, int W); // Parameterized constructor

        // Operator Overloads
        int4 operator+(const int4& other) const;
        int4 operator-(const int4& other) const;
        int4 operator*(const int4& other) const;
        int4 operator/(const int4& other) const;

        // Member Functions
        float magnitude() const;
        void normalize();
        float dot(const int4& other) const;
};