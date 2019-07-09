//
//  IRGLFish2PerspShaderParams.h
//  IRPlayer
//
//  Created by Phil on 2019/7/5.
//  Copyright © 2019 Phil. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "IRGLShaderParams.h"
#import <OpenGLES/ES2/gl.h>
#import <GLKit/GLKMatrix4.h>

NS_ASSUME_NONNULL_BEGIN

@interface IRGLFish2PerspShaderParams : IRGLShaderParams {
    enum
    {
        UNIFORM_ROTATION_ANGLE,
        UNIFORM_TEXTURE_WIDTH,
        UNIFORM_TEXTURE_HEIGHT,
        UNIFORM_FISH_APERTURE,
        UNIFORM_FISH_CENTERX,
        UNIFORM_FISH_CENTERY,
        UNIFORM_FISH_RADIUS_H,
        UNIFORM_FISH_RADIUS_V,
        UNIFORM_OUTPUT_WIDTH,
        UNIFORM_OUTPUT_HEIGHT,
        UNIFORM_ANTIALIAS,
        UNIFORM_FISHFOV,
        UNIFORM_PERSPFOV,
        UNIFORM_ENABLE_TRANSFORM_X,
        UNIFORM_ENABLE_TRANSFORM_Y,
        UNIFORM_ENABLE_TRANSFORM_Z,
        UNIFORM_TRANSFORM_X,
        UNIFORM_TRANSFORM_Y,
        UNIFORM_TRANSFORM_Z,
        NUM_UNIFORMS
    };
}

@property GLfloat preferredRotation;
@property (nonatomic) GLfloat fishaperture;
@property (nonatomic) GLint fishcenterx;
@property (nonatomic) GLint fishcentery;
@property (nonatomic) GLint fishradiush;
@property (nonatomic) GLint fishradiusv;
@property (nonatomic) GLint antialias;
@property (nonatomic) GLint enableTransformX;
@property (nonatomic) GLint enableTransformY;
@property (nonatomic) GLint enableTransformZ;
@property (nonatomic) GLfloat transformX;
@property (nonatomic) GLfloat transformY;
@property (nonatomic) GLfloat transformZ;
@property (nonatomic) GLfloat fishfov;
@property (nonatomic) GLfloat perspfov;

@end

NS_ASSUME_NONNULL_END
