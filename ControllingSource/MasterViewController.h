//
//  MasterViewController.h
//  ControllingSource
//
//  Created by Mark Kirkbride on 2/15/14.
//  Copyright (c) 2014 Mark Kirkbride. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
