//
//  BNRStockHolding.h
//  Stocks
//
//  Created by kody on 4/10/14.
//  Copyright (c) 2014 kody.wf. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BNRStockHolding : NSObject
{
    // instance variables
    
    float _purchaseSharePrice;
    float _currentSharePrice;
    
    int _numberOfShares;

}

// methods

- (float)purchaseSharePrice;
- (void)setPurchaseSharePrice:(float)p;
- (float)currentSharePrice;
- (void)setCurrentSharePrice:(float)c;




- (float)costInDollars;// purchaseSharePrice * numberOfShares
- (float)valueInDollars; // currentSharePrice * numberOfShares




@end
