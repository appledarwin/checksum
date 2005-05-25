/* AppController */

#import <Cocoa/Cocoa.h>

@interface AppController : NSObject {
    IBOutlet NSTextField *checksumField;
    IBOutlet NSTextField *filenameField;
    IBOutlet NSPopUpButton *popup;
    IBOutlet NSWindow *window;
	NSArray *algorithmTags;
	NSString *filename;
	int chosenAlgorithm;
}


- (void)processFile;
- (void)updateUI;
- (IBAction)chooseAlgorithm:(id)sender;
- (IBAction)openFile:(id)sender;
- (BOOL)dragIsFile:(id <NSDraggingInfo>)sender;
- (NSString *)getFileForDrag:(id <NSDraggingInfo>)sender;
@end
