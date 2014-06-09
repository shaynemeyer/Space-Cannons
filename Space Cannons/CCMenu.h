//
//  CCMenu.h
//  Space Cannons
//
//  Created by Shayne Meyer on 6/3/14.
//  Copyright (c) 2014 Maynesoft LLC. All rights reserved.
//

#import <SpriteKit/SpriteKit.h>

@interface CCMenu : SKNode

@property (nonatomic) int score;
@property (nonatomic) int topScore;
@property (nonatomic) BOOL touchable;
@property (nonatomic) BOOL musicPlaying;

-(void)hide;
-(void)show;

@end
