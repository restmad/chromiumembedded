// Copyright (c) 2014 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//

#include "libcef_dll/cpptoc/browser_cpptoc.h"
#include "libcef_dll/cpptoc/domnode_cpptoc.h"
#include "libcef_dll/cpptoc/frame_cpptoc.h"
#include "libcef_dll/cpptoc/list_value_cpptoc.h"
#include "libcef_dll/cpptoc/process_message_cpptoc.h"
#include "libcef_dll/cpptoc/request_cpptoc.h"
#include "libcef_dll/cpptoc/v8context_cpptoc.h"
#include "libcef_dll/cpptoc/v8exception_cpptoc.h"
#include "libcef_dll/cpptoc/v8stack_trace_cpptoc.h"
#include "libcef_dll/ctocpp/load_handler_ctocpp.h"
#include "libcef_dll/ctocpp/render_process_handler_ctocpp.h"


// VIRTUAL METHODS - Body may be edited by hand.

void CefRenderProcessHandlerCToCpp::OnRenderThreadCreated(
    CefRefPtr<CefListValue> extra_info) {
  if (CEF_MEMBER_MISSING(struct_, on_render_thread_created))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: extra_info; type: refptr_diff
  DCHECK(extra_info.get());
  if (!extra_info.get())
    return;

  // Execute
  struct_->on_render_thread_created(struct_,
      CefListValueCppToC::Wrap(extra_info));
}

void CefRenderProcessHandlerCToCpp::OnWebKitInitialized() {
  if (CEF_MEMBER_MISSING(struct_, on_web_kit_initialized))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  struct_->on_web_kit_initialized(struct_);
}

void CefRenderProcessHandlerCToCpp::OnBrowserCreated(
    CefRefPtr<CefBrowser> browser) {
  if (CEF_MEMBER_MISSING(struct_, on_browser_created))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: browser; type: refptr_diff
  DCHECK(browser.get());
  if (!browser.get())
    return;

  // Execute
  struct_->on_browser_created(struct_,
      CefBrowserCppToC::Wrap(browser));
}

void CefRenderProcessHandlerCToCpp::OnBrowserDestroyed(
    CefRefPtr<CefBrowser> browser) {
  if (CEF_MEMBER_MISSING(struct_, on_browser_destroyed))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: browser; type: refptr_diff
  DCHECK(browser.get());
  if (!browser.get())
    return;

  // Execute
  struct_->on_browser_destroyed(struct_,
      CefBrowserCppToC::Wrap(browser));
}

CefRefPtr<CefLoadHandler> CefRenderProcessHandlerCToCpp::GetLoadHandler() {
  if (CEF_MEMBER_MISSING(struct_, get_load_handler))
    return NULL;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_load_handler_t* _retval = struct_->get_load_handler(struct_);

  // Return type: refptr_same
  return CefLoadHandlerCToCpp::Wrap(_retval);
}

bool CefRenderProcessHandlerCToCpp::OnBeforeNavigation(
    CefRefPtr<CefBrowser> browser, CefRefPtr<CefFrame> frame,
    CefRefPtr<CefRequest> request, NavigationType navigation_type,
    bool is_redirect) {
  if (CEF_MEMBER_MISSING(struct_, on_before_navigation))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: browser; type: refptr_diff
  DCHECK(browser.get());
  if (!browser.get())
    return false;
  // Verify param: frame; type: refptr_diff
  DCHECK(frame.get());
  if (!frame.get())
    return false;
  // Verify param: request; type: refptr_diff
  DCHECK(request.get());
  if (!request.get())
    return false;

  // Execute
  int _retval = struct_->on_before_navigation(struct_,
      CefBrowserCppToC::Wrap(browser),
      CefFrameCppToC::Wrap(frame),
      CefRequestCppToC::Wrap(request),
      navigation_type,
      is_redirect);

  // Return type: bool
  return _retval?true:false;
}

void CefRenderProcessHandlerCToCpp::OnContextCreated(
    CefRefPtr<CefBrowser> browser, CefRefPtr<CefFrame> frame,
    CefRefPtr<CefV8Context> context) {
  if (CEF_MEMBER_MISSING(struct_, on_context_created))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: browser; type: refptr_diff
  DCHECK(browser.get());
  if (!browser.get())
    return;
  // Verify param: frame; type: refptr_diff
  DCHECK(frame.get());
  if (!frame.get())
    return;
  // Verify param: context; type: refptr_diff
  DCHECK(context.get());
  if (!context.get())
    return;

  // Execute
  struct_->on_context_created(struct_,
      CefBrowserCppToC::Wrap(browser),
      CefFrameCppToC::Wrap(frame),
      CefV8ContextCppToC::Wrap(context));
}

void CefRenderProcessHandlerCToCpp::OnContextReleased(
    CefRefPtr<CefBrowser> browser, CefRefPtr<CefFrame> frame,
    CefRefPtr<CefV8Context> context) {
  if (CEF_MEMBER_MISSING(struct_, on_context_released))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: browser; type: refptr_diff
  DCHECK(browser.get());
  if (!browser.get())
    return;
  // Verify param: frame; type: refptr_diff
  DCHECK(frame.get());
  if (!frame.get())
    return;
  // Verify param: context; type: refptr_diff
  DCHECK(context.get());
  if (!context.get())
    return;

  // Execute
  struct_->on_context_released(struct_,
      CefBrowserCppToC::Wrap(browser),
      CefFrameCppToC::Wrap(frame),
      CefV8ContextCppToC::Wrap(context));
}

void CefRenderProcessHandlerCToCpp::OnUncaughtException(
    CefRefPtr<CefBrowser> browser, CefRefPtr<CefFrame> frame,
    CefRefPtr<CefV8Context> context, CefRefPtr<CefV8Exception> exception,
    CefRefPtr<CefV8StackTrace> stackTrace) {
  if (CEF_MEMBER_MISSING(struct_, on_uncaught_exception))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: browser; type: refptr_diff
  DCHECK(browser.get());
  if (!browser.get())
    return;
  // Verify param: frame; type: refptr_diff
  DCHECK(frame.get());
  if (!frame.get())
    return;
  // Verify param: context; type: refptr_diff
  DCHECK(context.get());
  if (!context.get())
    return;
  // Verify param: exception; type: refptr_diff
  DCHECK(exception.get());
  if (!exception.get())
    return;
  // Verify param: stackTrace; type: refptr_diff
  DCHECK(stackTrace.get());
  if (!stackTrace.get())
    return;

  // Execute
  struct_->on_uncaught_exception(struct_,
      CefBrowserCppToC::Wrap(browser),
      CefFrameCppToC::Wrap(frame),
      CefV8ContextCppToC::Wrap(context),
      CefV8ExceptionCppToC::Wrap(exception),
      CefV8StackTraceCppToC::Wrap(stackTrace));
}

void CefRenderProcessHandlerCToCpp::OnFocusedNodeChanged(
    CefRefPtr<CefBrowser> browser, CefRefPtr<CefFrame> frame,
    CefRefPtr<CefDOMNode> node) {
  if (CEF_MEMBER_MISSING(struct_, on_focused_node_changed))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: browser; type: refptr_diff
  DCHECK(browser.get());
  if (!browser.get())
    return;
  // Unverified params: frame, node

  // Execute
  struct_->on_focused_node_changed(struct_,
      CefBrowserCppToC::Wrap(browser),
      CefFrameCppToC::Wrap(frame),
      CefDOMNodeCppToC::Wrap(node));
}

bool CefRenderProcessHandlerCToCpp::OnProcessMessageReceived(
    CefRefPtr<CefBrowser> browser, CefProcessId source_process,
    CefRefPtr<CefProcessMessage> message) {
  if (CEF_MEMBER_MISSING(struct_, on_process_message_received))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: browser; type: refptr_diff
  DCHECK(browser.get());
  if (!browser.get())
    return false;
  // Verify param: message; type: refptr_diff
  DCHECK(message.get());
  if (!message.get())
    return false;

  // Execute
  int _retval = struct_->on_process_message_received(struct_,
      CefBrowserCppToC::Wrap(browser),
      source_process,
      CefProcessMessageCppToC::Wrap(message));

  // Return type: bool
  return _retval?true:false;
}


#ifndef NDEBUG
template<> base::AtomicRefCount CefCToCpp<CefRenderProcessHandlerCToCpp,
    CefRenderProcessHandler, cef_render_process_handler_t>::DebugObjCt = 0;
#endif

