//
//  NSString+NumberWithShortcut.h
//  AFNetworking
//
//  Created by Michael Liptuga on 11/2/18.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSString (NumberWithShortcut)

+(NSString*)numberStrWithShortcut: (nullable NSString*) numberStr
            needToReturnZeroValue: (BOOL) isNeeded;

+(NSString*)numberWithShortcut: (nullable NSNumber*) number
         needToReturnZeroValue: (BOOL) isNeeded;

@end

NS_ASSUME_NONNULL_END
