---
layout: default
author_profile: true
permalink: /about/
title: "About"
date: 2017-12-06
categories:
  - General
tags:
  - test
---

<html lang="{{ site.locale | slice: 0,2 | default: "en" }}" class="no-js">
  <head>
    {% include head.html %}
    {% include head/custom.html %}
  </head>
    
  <body class="layout--{{ page.layout | default: layout.layout }}{% if page.classes or layout.classes %}{{ page.classes | default: layout.classes | join: ' ' | prepend: ' ' }}{% endif %}">

    {% include browser-upgrade.html %}
    {% include masthead.html %}

    <div id="main" role="main">
      <embed src="https://jjrwalker.github.io/assets/pdf/CV.pdf" width="700px" hight="1500px" />
    </div>
  </body>
</html>

