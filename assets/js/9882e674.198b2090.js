"use strict";(self.webpackChunkdocs=self.webpackChunkdocs||[]).push([[5614],{5883:(e,n,t)=>{t.r(n),t.d(n,{assets:()=>l,contentTitle:()=>c,default:()=>u,frontMatter:()=>a,metadata:()=>o,toc:()=>d});const o=JSON.parse('{"id":"advanced/logs","title":"Logs","description":"While logs are normally sent over MQTT, any logs that are created before WiFi-connection are sent out on Serial.","source":"@site/docs/advanced/logs.md","sourceDirName":"advanced","slug":"/advanced/logs","permalink":"/docs/advanced/logs","draft":false,"unlisted":false,"editUrl":"https://github.com/NSPManager/NSPanelManager/docs/edit/beta/docs/advanced/logs.md","tags":[],"version":"current","sidebarPosition":5,"frontMatter":{"title":"Logs","sidebar_position":5},"sidebar":"mainSidebar","previous":{"title":"Panel functions","permalink":"/docs/panel-functions"},"next":{"title":"Architecture","permalink":"/docs/advanced/architecture"}}');var s=t(4848),i=t(8453),r=t(3228);const a={title:"Logs",sidebar_position:5},c="Logs",l={},d=[];function h(e){const n={admonition:"admonition",code:"code",h1:"h1",header:"header",p:"p",...(0,i.R)(),...e.components};return(0,s.jsxs)(s.Fragment,{children:[(0,s.jsx)(n.header,{children:(0,s.jsx)(n.h1,{id:"logs",children:"Logs"})}),"\n",(0,s.jsxs)(n.p,{children:["While logs are normally sent over MQTT, any logs that are created before WiFi-connection are sent out on Serial.\nIf you wish to see the logs going over MQTT, you can look at the topic ",(0,s.jsx)(n.code,{children:"nspanel/<panel name>/log"}),"."]}),"\n",(0,s.jsx)(n.p,{children:"If you wish to look at the logs going over serial, you can use programs like Putty."}),"\n",(0,s.jsxs)(n.p,{children:["Connect to the NSPanel with the serial programmer as usual but don\u2019t connect ",(0,s.jsx)(n.code,{children:"IO0"})," to ",(0,s.jsx)(n.code,{children:"GND"}),"."]}),"\n",(0,s.jsxs)(n.p,{children:['In Putty enter your serial port in the "Serial line" box and choose baud ',(0,s.jsx)(n.code,{children:"115200"}),"."]}),"\n",(0,s.jsx)(n.p,{children:'You should then be able to connect by pressing the "Open"-button.'}),"\n",(0,s.jsx)(n.admonition,{type:"info",children:(0,s.jsxs)(n.p,{children:["On Windows ",(0,s.jsx)(n.code,{children:"/dev/ttyUSB0"})," will have to be replaced by something like ",(0,s.jsx)(n.code,{children:"COM4"}),". If using MacOS or Linux the port\nwill be something similar to ",(0,s.jsx)(n.code,{children:"/dev/ttyUSB0"}),"."]})}),"\n",(0,s.jsx)(n.p,{children:"Example:"}),"\n",(0,s.jsx)(r.A,{src:"/images/doc/putty_serial.png",alt:"Connecting to Serial with Putty",figureNumber:10})]})}function u(e={}){const{wrapper:n}={...(0,i.R)(),...e.components};return n?(0,s.jsx)(n,{...e,children:(0,s.jsx)(h,{...e})}):h(e)}},3228:(e,n,t)=>{t.d(n,{A:()=>r});t(6540);const o="centeredImageContainer_LZL8",s="caption_TNGg";var i=t(4848);const r=e=>{let{src:n,alt:t,width:r="auto",height:a="auto",figureNumber:c}=e;return(0,i.jsxs)("figure",{className:o,children:[(0,i.jsx)("img",{src:n,alt:t,style:{width:r,height:a}}),c&&(0,i.jsxs)("figcaption",{className:s,children:["Figure ",c,": ",t]})]})}}}]);