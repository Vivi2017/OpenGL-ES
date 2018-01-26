//
// Created by weiersyuan on 2016/11/24.
//

#ifndef NATIVEGLESVIEW_SHAPE_H
#define NATIVEGLESVIEW_SHAPE_H
#include <GLES2/gl2.h>

#define PI 3.1415926
class Shape {
public:
    GLint mProgram;
    GLint mUMVPMatrixHandle;
    GLint mAPositionHandle;
    GLint mAColorHandle;
    GLfloat* mVertexArray;
    GLfloat* mColorArray;
    GLint mLoadedTextureId;
    GLfloat* mTextureArray;
    Shape();
    void initVertex();
    void initGL(const char * vertexShaderCode, const char* fragmentShaderCode);
    void draw(float mvpMatrix[]);
    void initTexture(int res);
    virtual ~Shape();
    unsigned char * loadBMPRaw(const char * imagepath, unsigned int& outWidth, unsigned int& outHeight, bool flipY);

    };


#endif //NATIVEGLESVIEW_SHAPE_H
