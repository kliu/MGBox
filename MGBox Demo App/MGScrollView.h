//
//  Created by matt on 21/03/12.
//
//

#import <Foundation/Foundation.h>

@interface MGScrollView : UIScrollView

@property (nonatomic, retain) NSMutableArray *boxes;

- (void)drawBoxesWithSpeed:(NSTimeInterval)speed;
- (void)updateContentSize;

@end