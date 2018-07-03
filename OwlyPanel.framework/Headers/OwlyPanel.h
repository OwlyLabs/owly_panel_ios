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

+(void)sendExternalPurchaseEventWithAmount:(float)amount
                          currency:(NSString*)currency
                            title:(NSString*)title
                            locale:(NSString*)locale
                          order_id:(NSString*)order_id
                    transaction_id:(NSString*)transaction_id
                  transaction_date:(NSDate*)transaction_date;

+(OPUserProfile*)getCurrentUser;
+(void)updateUserProfile:(OPUserProfile*)profile;

@end
