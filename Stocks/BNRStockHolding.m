//
//  BNRStockHolding.m
//  Stocks
//
//  Created by kody on 4/10/14.
//  Copyright (c) 2014 kody.wf. All rights reserved.
//

#import "BNRStockHolding.h"

@implementation BNRStockHolding

- (float)purchaseSharePrice
{
    return _purchaseSharePrice;
}

-(void)setPurchaseSharePrice:(float)p
{
    _purchaseSharePrice = p;
}

-(int)numberOfShares{
    return _numberOfShares;
}



-(float) currentSharePrice
{
    return _currentSharePrice;
}

-(void)setCurrentSharePrice:(float)c
{
    _currentSharePrice = c;
}

- (float)costInDollars// purchaseSharePrice * numberOfShares
{
    float p = [self purchaseSharePrice];
    return [self numberOfShares] * p;
}
- (float)valueInDollars // currentSharePrice * numberOfShares
{
    float c = [self currentSharePrice];
    return [self numberOfShares] * c;
}


@end
