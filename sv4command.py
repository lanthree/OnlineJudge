import commands

import tornado.gen
import tornado.httpserver
import tornado.ioloop
import tornado.options
import tornado.web
import tornado.websocket

from tornado.options import define, options
define("port", default=8001, help="run on the given port", type=int)

class CommandHandler(tornado.web.RequestHandler):
	def get(self):
		command = self.get_argument("command", "")
		print command

		(status, output) = commands.getstatusoutput(command)
		print "11111111  ", status
		print "22222222  ", output
		self.write({"status":status, "output":output})

class Application(tornado.web.Application):
	def __init__(self):
		handlers = [(r'/', CommandHandler)]

		settings = dict(
			debug=True
		)

		tornado.web.Application.__init__(self, handlers, **settings)

if __name__ == '__main__':
	tornado.options.parse_command_line()
	http_server = tornado.httpserver.HTTPServer(Application())
	http_server.listen(options.port)
	tornado.ioloop.IOLoop.instance().start()
