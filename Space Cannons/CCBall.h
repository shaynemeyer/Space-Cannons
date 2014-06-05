//
//  CCBall.h
//  Space Cannons
//
//  Created by Shayne Meyer on 6/5/14.
//  Copyright (c) 2014 Maynesoft LLC. All rights reserved.
//

#import <SpriteKit/SpriteKit.h>

@interface CCBall : SKSpriteNode

@property (nonatomic) SKEmitterNode *trail;
-(void)updateTrail;

@end
