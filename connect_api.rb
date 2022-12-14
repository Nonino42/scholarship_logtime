require "oauth2"
require 'scanf'

UID = ENV['UID_42']
SECRET = ENV['SECRET_42']
# Create the client with your credentials
client = OAuth2::Client.new(UID, SECRET, site: "https://api.intra.42.fr")
# Get an access token
token = client.client_credentials.get_token
login = scanf("%s")
File.open("texts/text_file.txt", "w") { |file| file.write token.get("/v2/users/%s/locations_stats" % login).parsed()}
