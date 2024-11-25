"use strict";(self.webpackChunkdocs=self.webpackChunkdocs||[]).push([[3374],{8559:(e,t,n)=>{n.r(t),n.d(t,{assets:()=>l,contentTitle:()=>i,default:()=>o,frontMatter:()=>a,metadata:()=>s,toc:()=>c});const s=JSON.parse('{"id":"advanced/mqtt-topics","title":"MQTT Topics","description":"Below table is a description of all MQTT topics that might be of use by a user. Replace `` with the friendly","source":"@site/docs/advanced/mqtt-topics.md","sourceDirName":"advanced","slug":"/advanced/mqtt-topics","permalink":"/docs/advanced/mqtt-topics","draft":false,"unlisted":false,"editUrl":"https://github.com/NSPManager/NSPanelManager/docs/edit/beta/docs/advanced/mqtt-topics.md","tags":[],"version":"current","sidebarPosition":10,"frontMatter":{"title":"MQTT Topics","sidebar_position":10},"sidebar":"mainSidebar","previous":{"title":"Architecture","permalink":"/docs/advanced/architecture"}}');var r=n(4848),d=n(8453);n(143);const a={title:"MQTT Topics",sidebar_position:10},i="MQTT Topics",l={},c=[];function h(e){const t={code:"code",h1:"h1",header:"header",p:"p",table:"table",tbody:"tbody",td:"td",th:"th",thead:"thead",tr:"tr",...(0,d.R)(),...e.components};return(0,r.jsxs)(r.Fragment,{children:[(0,r.jsx)(t.header,{children:(0,r.jsx)(t.h1,{id:"mqtt-topics",children:"MQTT Topics"})}),"\n",(0,r.jsxs)(t.p,{children:["Below table is a description of all MQTT topics that might be of use by a user. Replace ",(0,r.jsx)(t.code,{children:"<panel_name>"})," with the friendly\nname of your NSPanel:"]}),"\n",(0,r.jsxs)(t.table,{children:[(0,r.jsx)(t.thead,{children:(0,r.jsxs)(t.tr,{children:[(0,r.jsx)(t.th,{children:"Topic"}),(0,r.jsx)(t.th,{children:"Payload"}),(0,r.jsx)(t.th,{children:"Description"})]})}),(0,r.jsxs)(t.tbody,{children:[(0,r.jsxs)(t.tr,{children:[(0,r.jsx)(t.td,{children:"nspanel/<panel_name>/screen_cmd"}),(0,r.jsx)(t.td,{children:"1 or 0"}),(0,r.jsx)(t.td,{children:"Send a 1 or 0 to turn on/off the display."})]}),(0,r.jsxs)(t.tr,{children:[(0,r.jsx)(t.td,{children:"nspanel/<panel_name>/screen_state"}),(0,r.jsx)(t.td,{children:"1 or 0"}),(0,r.jsx)(t.td,{children:"Current state of the screen."})]}),(0,r.jsxs)(t.tr,{children:[(0,r.jsx)(t.td,{children:"nspanel/<panel_name>/brightness"}),(0,r.jsx)(t.td,{children:"1 to 100"}),(0,r.jsx)(t.td,{children:"Control the brightness of the screen."})]}),(0,r.jsxs)(t.tr,{children:[(0,r.jsx)(t.td,{children:"nspanel/<panel_name>/brightness_screensaver"}),(0,r.jsx)(t.td,{children:"0 to 100"}),(0,r.jsx)(t.td,{children:"Control the brightness of the screensaver."})]}),(0,r.jsxs)(t.tr,{children:[(0,r.jsx)(t.td,{children:"nspanel/<panel_name>/r1_cmd"}),(0,r.jsx)(t.td,{children:"1 or 0"}),(0,r.jsx)(t.td,{children:"Send a 1 or 0 to turn on/off relay 1."})]}),(0,r.jsxs)(t.tr,{children:[(0,r.jsx)(t.td,{children:"nspanel/<panel_name>/r1_state"}),(0,r.jsx)(t.td,{children:"1 or 0"}),(0,r.jsx)(t.td,{children:"The current state of relay 1."})]}),(0,r.jsxs)(t.tr,{children:[(0,r.jsx)(t.td,{children:"nspanel/<panel_name>/r2_cmd"}),(0,r.jsx)(t.td,{children:"1 or 0"}),(0,r.jsx)(t.td,{children:"Send a 1 or 0 to turn on/off relay 2."})]}),(0,r.jsxs)(t.tr,{children:[(0,r.jsx)(t.td,{children:"nspanel/<panel_name>/r2_state"}),(0,r.jsx)(t.td,{children:"1 or 0"}),(0,r.jsx)(t.td,{children:"The current state of relay 2."})]}),(0,r.jsxs)(t.tr,{children:[(0,r.jsx)(t.td,{children:"nspanel/<panel_name>/temperature_state"}),(0,r.jsx)(t.td,{children:"Current temperature"}),(0,r.jsx)(t.td,{children:"The current temperature reading."})]}),(0,r.jsxs)(t.tr,{children:[(0,r.jsx)(t.td,{children:"nspanel/<panel_name>/screensaver_mode"}),(0,r.jsx)(t.td,{children:"screensaver mode"}),(0,r.jsxs)(t.td,{children:["Select what screensaver to display ",(0,r.jsx)("br",{})," Choose from the following: ",(0,r.jsx)("br",{}),"- with_background",(0,r.jsx)("br",{}),"-without_background",(0,r.jsx)("br",{}),"-datetime_with_background",(0,r.jsx)("br",{}),"-datetime_without_background",(0,r.jsx)("br",{}),"or no_screensaver"]})]}),(0,r.jsxs)(t.tr,{children:[(0,r.jsx)(t.td,{children:"nspanel/<panel_name>/log"}),(0,r.jsx)(t.td,{children:"Log message"}),(0,r.jsx)(t.td,{children:"The panel will send live logs on this topic."})]})]})]}),"\n",(0,r.jsx)(t.p,{children:"There are more topics that are used internally, these are:"}),"\n",(0,r.jsxs)(t.table,{children:[(0,r.jsx)(t.thead,{children:(0,r.jsxs)(t.tr,{children:[(0,r.jsx)(t.th,{children:"Topic"}),(0,r.jsx)(t.th,{children:"Payload"}),(0,r.jsx)(t.th,{children:"Description"})]})}),(0,r.jsxs)(t.tbody,{children:[(0,r.jsxs)(t.tr,{children:[(0,r.jsx)(t.td,{children:"nspanel/entities/<type>/<id>/state_<attribute>"}),(0,r.jsx)(t.td,{children:"The value of the attribute"}),(0,r.jsxs)(t.td,{children:["An update of entity state value sent out by MQTTManager. Example",":nspanel","/entities/light/42/state_kelvin"]})]}),(0,r.jsxs)(t.tr,{children:[(0,r.jsx)(t.td,{children:"nspanel/status/time"}),(0,r.jsx)(t.td,{children:"Time as a string"}),(0,r.jsx)(t.td,{children:"Current time sent by MQTTManager."})]}),(0,r.jsxs)(t.tr,{children:[(0,r.jsx)(t.td,{children:"nspanel/status/weather"}),(0,r.jsx)(t.td,{children:"JSON"}),(0,r.jsx)(t.td,{children:"A JSON representation of the current weather and weather forecast."})]}),(0,r.jsxs)(t.tr,{children:[(0,r.jsx)(t.td,{children:"nspanel/<panel_name>/status_report"}),(0,r.jsx)(t.td,{children:"JSON"}),(0,r.jsx)(t.td,{children:"JSON payload with current state of the panel."})]}),(0,r.jsxs)(t.tr,{children:[(0,r.jsx)(t.td,{children:"nspanel/<panel_name>/status"}),(0,r.jsx)(t.td,{children:"JSON"}),(0,r.jsx)(t.td,{children:"JSON payload with current online/offline state of the panel."})]}),(0,r.jsxs)(t.tr,{children:[(0,r.jsx)(t.td,{children:"nspanel/<panel_name>/command"}),(0,r.jsx)(t.td,{children:"JSON"}),(0,r.jsx)(t.td,{children:"JSON payload with a command for the panel to execute."})]}),(0,r.jsxs)(t.tr,{children:[(0,r.jsx)(t.td,{children:"nspanel/mqttmanager/command"}),(0,r.jsx)(t.td,{children:"JSON"}),(0,r.jsx)(t.td,{children:"JSON payload from panel with a command for MQTTManager to perform."})]})]})]})]})}function o(e={}){const{wrapper:t}={...(0,d.R)(),...e.components};return t?(0,r.jsx)(t,{...e,children:(0,r.jsx)(h,{...e})}):h(e)}},143:(e,t,n)=>{n.d(t,{A:()=>d});n(6540);const s="centeredContent_P47O";var r=n(4848);const d=e=>{let{children:t}=e;return(0,r.jsx)("div",{className:s,children:t})}}}]);