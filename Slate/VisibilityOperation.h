//
//  VisibilityOperation.h
//  Slate
//
//  Created by Jigish Patel on 10/7/12.
//  Copyright 2012 Jigish Patel. All rights reserved.
//
//  This program is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program.  If not, see http://www.gnu.org/licenses

#import "Operation.h"

typedef enum {
  VisibilityOperationTypeUnknown,
  VisibilityOperationTypeShow,
  VisibilityOperationTypeHide,
  VisibilityOperationTypeToggle
} VisibilityOperationType;

@interface VisibilityOperation : Operation {
@private
  VisibilityOperationType type;
  NSArray *apps;
}

@property (assign) VisibilityOperationType type;
@property NSArray *apps;

- (id)initWithType:(VisibilityOperationType)theType apps:(NSArray *)theApps;
- (void)applyVisibilityToApp:(NSRunningApplication *)app;

+ (id)visibilityOperation;
+ (id)visibilityOperationFromString:(NSString *)visibilityOperation;

@end
