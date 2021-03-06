//
//  UIImage+iHAddition.h
//  iHakula
//
//  Created by Wayde Sun on 2/21/13.
//  Copyright (c) 2013 iHakula. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (iHAddition)

- (UIImage*)imageByScalingAndCroppingForSize:(CGSize)targetSize;
- (UIImage *)scaleAndRotateToMaxResolution:(int)maxResolution;
+ (UIImage*)textImageWithString:(NSString*)text font:(UIFont*)font;
- (UIImage*)imageRotatedByDegrees:(CGFloat)degrees;

+ (UIImage *)imageCompressForSize:(UIImage *)sourceImage targetSize:(CGSize)size;
+ (UIImage *)imageCompressForWidth:(UIImage *)sourceImage targetWidth:(CGFloat)defineWidth;
@end
