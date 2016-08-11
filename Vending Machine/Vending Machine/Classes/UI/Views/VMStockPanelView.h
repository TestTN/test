//
//  VMStockPanelView.h
//  Vending Machine
//
//  Created by Nurov Timur Dauletovich on 11/08/16.
//  Copyright © 2016 123. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "VMViewProtocols.h"

@protocol VMVendingMachinePresenterProtocol;

@interface VMStockPanelView : UIView <VMStockPanelViewProtocol>

@property (nonatomic, weak) id <VMVendingMachinePresenterProtocol> presenter;

@end


