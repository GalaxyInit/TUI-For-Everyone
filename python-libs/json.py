"""Library that helps in finding values from json data/dict
To Install lib : pip install jmespath
"""
import jmespath

d = {"foo": {"bar": "baz"}}
print(jmespath.search('foo.bar', d))

# Using a wildcard to get all names
d = {"foo": {"bar": [{"name": "one"}, {"name": "two"}]}}
print(jmespath.search('foo.bar[*].name', d))
