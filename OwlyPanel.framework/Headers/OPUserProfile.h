//
//  OPUserProfile.h
//  OwlyPanel
//
//  Created by Serg Rudenko on 5/14/18.
//  Copyright © 2018 Owly Labs. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum {
    uUndefined = 0,
    uMale = 1,
    uFemale = 2
} userGender;


@interface OPUserProfile : NSObject

-(void)setFirstName:(NSString*)f_name;

-(NSString*)getFirstName;

-(void)setLastName:(NSString*)l_name;

-(NSString*)getLastName;

-(void)setEmail:(NSString*)e_mail;

-(NSString*)getEmail;

-(void)setUserGender:(userGender)user_gender;

-(userGender)getUserGender;

-(void)setUserAge:(int)user_age;

-(int)getUserAge;

-(void)setUserHeight:(float)user_height;

-(int)getUserHeight;

-(void)setUserWeight:(float)user_weight;

-(int)getUserWeight;

-(void)setPhoneNumber:(NSString*)user_phone;

-(NSString*)getPhoneNumber;

-(void)setCustomParams:(NSDictionary*)customParams;

-(NSString*)getCustomParams;

-(NSDictionary*)getFullData;


-(BOOL)isValidCustomField:(NSString*)field;
@end
