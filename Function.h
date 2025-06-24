#pragma once
#include "Vector3.h"
#include <math.h>
#include <time.h>
#define _USE_MATH_DEFINE
#include "Matrix4x4.h"
#include <assert.h>
#include <cmath>
#include <stdio.h>
#include <stdlib.h>

class Function {
public:
	// ���Z
	Vector3 Add(const Vector3& v1, const Vector3& v2);

	// ���Z
	Vector3 Subtract(const Vector3& v1, const Vector3& v2);

	// �X�J���[�{
	Vector3 Multiply(float scalar, const Vector3& v1);

	// ����
	float Dot(const Vector3& v1, const Vector3& v2);

	// ����(�m����)
	float Length(const Vector3& v1);

	// ���K��
	Vector3 Normalize(const Vector3& v);

	// 1.�s��̉��@
	Matrix4x4 Add(const Matrix4x4& m1, const Matrix4x4& m2);

	// 2.�s��̌��@
	Matrix4x4 Subtract(const Matrix4x4& m1, const Matrix4x4& m2);

	// 3.�s��̐�
	Matrix4x4 Multiply(const Matrix4x4& m1, const Matrix4x4& m2);

	// 4.�t�s��
	Matrix4x4 Inverse(const Matrix4x4& m);

	// 5.�]�u�s��
	Matrix4x4 Transpose(const Matrix4x4& m);

	// 6.�P�ʍs��̍쐬
	Matrix4x4 MakeIdentity4x4();

	// 1.���s�ړ��s��
	Matrix4x4 MakeTranslateMatrix(const Vector3& translate);

	// 2.�g��k���s��
	Matrix4x4 MakeScaleMatrix(const Vector3& scale);

	// 3.���W�ϊ�
	Vector3 Transform(const Vector3& vector, const Matrix4x4& matrix);

	// X����]�s��
	Matrix4x4 MakeRotateXMatrix(float radian);

	// Y����]�s��
	Matrix4x4 MakeRotateYMatrix(float radian);

	// Z����]�s��
	Matrix4x4 MakeRotateZMatrix(float radian);

	// 3�����A�t�B���ϊ��s��
	Matrix4x4 MakeAffineMatrix(const Vector3& scale, const Vector3& rotate, const Vector3& translate);

	// �������e�s��
	static Matrix4x4 MakePerspectiveFovMatrix(float fovY, float aspectRatio, float nearClip, float farClip);

	// ���ˉe�s��
	static Matrix4x4 MakeOrthographicMatrix(float left, float top, float right, float bottom, float nearClip, float farClip);

	// �r���[�|�[�g�ϊ��s��
	static Matrix4x4 MakeViewportMatrix(float left, float top, float width, float height, float minDepth, float maxDepth);

	//�N���X��
	Vector3 Cross(const Vector3& v1, const Vector3& v2);

	

private:
	// ���ʂ̕\��
	static const int kRowHeight = 20;
	static const int kColumnWidth = 60;
};