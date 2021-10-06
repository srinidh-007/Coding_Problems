# -*- coding: utf-8 -*-
import tweepy
import json
from tweepy import api

access_token="" #Add your token
access_token_secret="" #Add your access_token_secret token

api_key="" #Add your api
api_key_secret="" #Add your api_key_secret token

auth = tweepy.OAuthHandler(consumer_key=api_key,consumer_secret=api_key_secret)
auth.set_access_token(access_token,access_token_secret)

api = tweepy.API(auth)
print(api)

def write_Json(data, filename="hashtag.json"):
    with open(filename,"w") as f:
        json.dump(data,f,indent=4)

india_woeid=23424848 # Where On Earth IDentifier

trend_result=api.trends_place(india_woeid)

try:
    for trend in trend_result[0]["trends"]:
        #print(trend["name"]+ " : "+str(trend["tweet_volume"])) #prints all the hashtags with tweet volume
        with open ("hashtag.json") as json_data:
             data = json.load(json_data)
             temp = data["Hashtags"]
             y = {"Name":trend["name"]},"volume":str(trend["tweet_volume"]) #Updates to JSON file
             temp.append(y)
         write_Json(data)
except:
    print("Something went wrong")
