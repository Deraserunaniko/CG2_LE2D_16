#pragma once
struct Matrix4x4 {

	float m[4][4];
};
struct Vector3 {
	float x, y, z;
};

namespace MatrixMath {
	// �s��̉��@
	Matrix4x4 Add(const Matrix4x4& m1, const Matrix4x4& m2);
	// �s��̌��@
	Matrix4x4 Subtract(const Matrix4x4& m1, const Matrix4x4& m2);
	// �s��̐�
	Matrix4x4 Multipty(const Matrix4x4& m1, const Matrix4x4& m2);
	// �t�s��
	Matrix4x4 Inverse(const Matrix4x4& m);
	// �]�u�s��
	Matrix4x4 Transpoce(const Matrix4x4& m);
	// �P�ʍs��̍쐬
	Matrix4x4 MakeIdentity4x4();
	// ���s�ړ��s��
	Matrix4x4 MakeTranslate(const Vector3& translate);
	// �g��k���s��
	Matrix4x4 MakeScale(const Vector3& scale);

	// X���̉�]�s��
	Matrix4x4 MakeRotateX(float radian);
	// Y���̉�]�s��
	Matrix4x4 MakeRotateY(float radian);
	// Z���̉�]�s��
	Matrix4x4 MakeRotateZ(float radian);

	// 3�����A�t�B���ϊ��s��
	Matrix4x4 MakeAffine(const Vector3& scale, const Vector3& rotate, const Vector3& translate);

	// ���ˉe�s��
	Matrix4x4 Orthographic(float left, float top, float right, float bottom, float nearClip, float farClip);
	// �������e�s��
	Matrix4x4 PerspectiveFov(float fovY, float aspectRatio, float nearClip, float farClip);
	// �r���[�|�[�g�ϊ��s��
	Matrix4x4 Viewport(float left, float top, float width, float height, float minDepth, float maxDepth);
	// �N���X��
	Vector3 Cross(const Vector3& v1, const Vector3& v2);

}