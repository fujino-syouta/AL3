#include"GameScene.h"
Matrix4x4 MakeAffineMatrix(const Vector3& scale, const Vector3& rotate, const Vector3& translate) ;
Matrix4x4 MakeRotateXMatrix(float radian) ;
Matrix4x4 MakeRotateYMatrix(float radian) ;
Matrix4x4 MakeRotateZMatrix(float radian) ;
Matrix4x4 Multiply(const Matrix4x4& m1, const Matrix4x4& m2) ;
// �P�����Z�q�I�[�o�[���[�h
Vector3 operator+(const Vector3& v);
Vector3 operator-(const Vector3& v);
// ������Z�q�I�[�o�[���[�h
Vector3& operator+=(Vector3& lhs, const Vector3& rhv);
Vector3& operator-=(Vector3& lhs, const Vector3& rhv);
Vector3& operator*=(Vector3& v, float s);
Vector3& operator/=(Vector3& v, float s);
// 2�����Z�q�I�[�o�[���[�h
const Vector3 operator+(const Vector3& v1, const Vector3& v2);
const Vector3 operator-(const Vector3& v1, const Vector3& v2);
const Vector3 operator*(const Vector3& v, float s);
const Vector3 operator*(float s, const Vector3& v);
const Vector3 operator/(const Vector3& v, float s);
