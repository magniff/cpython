import __main__
import parser


G = L = __main__.__dict__


def main_entry(string):
    eval(parser.compilest(parser.suite(string)), G, L)
