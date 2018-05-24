//
//  OwlyPanel.h
//  OwlyPanel
//
//  Created by Serg Rudenko on 5/14/18.
//  Copyright © 2018 Owly Labs. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "OPUserProfile.h"

@interface OwlyPanel : NSObject

+(void)initWithKey:(NSString*)apiKey;

+(void)initWithKey:(NSString*)apiKey accessGroup:(NSString*)accessGroup;

+(void)sendEvent:(NSString*)titleEvent valueEvent:(id)value;

+(void)sendEvent:(NSString*)titleEvent;

+(void)sendPurchaseEventWithAmount:(float)amount currency:(NSString*)currency;

+(OPUserProfile*)getCurrentUser;

+(void)updateUserProfile:(OPUserProfile*)profile;

@end
