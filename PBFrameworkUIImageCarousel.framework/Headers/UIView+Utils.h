//
//  UIView+Utils.h
//  AFNetworking
//
//  Created by Michael Liptuga on 12.09.2018.
//

#import <UIKit/UIKit.h>

@interface UIView (Utils)

-(void) roundView;

-(void) roundViewWithRadius : (CGFloat) radius;

-(void) applyShadow : (UIColor*) shadowColor
   showRoundCorners : (BOOL) showRoundCorners
             radius : (CGFloat) radius
       shadowRadius : (CGFloat) shadowRadius;

-(void) applyShadow : (UIColor*) shadowColor
      shadowOpacity : (float) opacity
   showRoundCorners : (BOOL) showRoundCorners
             radius : (CGFloat) radius
       shadowRadius : (CGFloat) shadowRadius
       shadowOffset : (CGSize) shadowOffset;

-(void) addBorderWithColor : (UIColor*) color
               borderWidth : (CGFloat) borderWidth;

-(void) addGradientMask : (NSArray*) colors
             startPoint : (CGPoint) startPoint
               endPoint : (CGPoint) endPoint;

@end
