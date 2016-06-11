import __main__
import parser


DEFAULT_IMPLEMENTATION = (
    lambda string:
    eval(parser.compilest(parser.suite(string)), G, L)
)


IMPLEMENTATION = DEFAULT_IMPLEMENTATION
G = L = __main__.__dict__


def main_entry(string):
    global IMPLEMENTATION
    if string.strip() == 'reset':
        IMPLEMENTATION = DEFAULT_IMPLEMENTATION
    IMPLEMENTATION(string)
