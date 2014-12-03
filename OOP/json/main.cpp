//
//  main.cpp
//  JSON Parser
//
//  Created by Bryan Johnson on 11/15/14.
//  Copyright (c) 2014 Bryan Johnson. All rights reserved.
//

#include <iostream>
#include <string>
#include <iterator>
#include "json.h"

int main(int argc, const char * argv[]) {
    
//    std::string s = "{\"kind\": \"Listing\", \"data\": {\"modhash\": \"\", \"children\": [{\"kind\": \"t3\", \"data\": {\"domain\": \"self.hpstream\", \"banned_by\": null, \"media_embed\": {}, \"subreddit\": \"hpstream\", \"selftext_html\": \"I know with the new line of low cost tablets and laptop devices in the HP Stream line that there would be a demand for some support and tweaking help from the Reddit community.\", \"selftext\": \"I know with the new line of low cost tablets and laptop devices in the HP Stream line that there would be a demand for some support and tweaking help from the Reddit community. If you have any questions let me know. I did a lot of research before I purchased one and should have the answers to many of your questions. What I don't know I'm sure the other members will have an answer for!\", \"likes\": null, \"user_reports\": [], \"secure_media\": null, \"link_flair_text\": null, \"id\": \"2nuxc2\", \"gilded\": 0, \"secure_media_embed\": {}, \"clicked\": false, \"report_reasons\": null, \"author\": \"disrobedranger\", \"media\": null, \"score\": 1, \"approved_by\": null, \"over_18\": false, \"hidden\": false, \"thumbnail\": \"self\", \"subreddit_id\": \"t5_356gs\", \"edited\": false, \"link_flair_css_class\": null, \"author_flair_css_class\": \"\", \"downs\": 0, \"mod_reports\": [], \"saved\": false, \"is_self\": true, \"name\": \"t3_2nuxc2\", \"permalink\": \"/r/hpstream/comments/2nuxc2/welcome_to_rhpstream/\", \"stickied\": false, \"created\": 1417398949.0, \"url\": \"http://www.reddit.com/r/hpstream/comments/2nuxc2/welcome_to_rhpstream/\", \"author_flair_text\": \"Stream 8\", \"title\": \"Welcome to /r/hpstream\", \"created_utc\": 1417370149.0, \"ups\": 1, \"num_comments\": 0, \"visited\": false, \"num_reports\": null, \"distinguished\": null}}], \"after\": null, \"before\": \"\"}}";

    
    using iter = std::istreambuf_iterator<char>;
    std::string s(iter(std::cin), iter());
    
    json::Value *v = json::parse(s);


    //std::cout << v->toString() << std::endl;

    if(argc > 1) {
    	std::cout << dynamic_cast<json::Object*>(v)->find("data")->second->toString();
    }
    
    return 0;
}
