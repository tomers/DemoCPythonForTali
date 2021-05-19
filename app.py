#!/usr/bin/env python3

from jinja2 import Template
import json

with open('defs.json') as f:
    template_args = json.load(f)
with open('generated.json.j2') as f:
    template_generated = f.read()

generated = Template(template_generated).render(**template_args)
with open('generated.json', 'w') as f:
    f.write(generated)
