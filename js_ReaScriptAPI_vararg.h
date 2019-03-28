#pragma once

#ifdef _WIN32
#pragma warning(disable:4800) // disable "forcing value to bool..." warnings
#endif


static void* __vararg_JS_ReaScriptAPI_Version(void** arglist, int numparms)
{
	JS_ReaScriptAPI_Version((double*)arglist[0]);
	return NULL;
}

static void* __vararg_JS_Localize(void** arglist, int numparms)
{
	JS_Localize((const char*)arglist[0], (const char*)arglist[1], (char*)arglist[2], (int)(intptr_t)arglist[3]);
	return NULL;
}

//////////////////////////////////////////////////////////////////////////////////

static void* __vararg_JS_VKeys_GetState(void** arglist, int numparms)
{
	return (void*)(intptr_t)JS_VKeys_GetState((char*)arglist[0], (int)(intptr_t)arglist[1]);
}

static void* __vararg_JS_VKeys_GetHistory(void** arglist, int numparms)
{
	return (void*)(intptr_t)JS_VKeys_GetHistory((char*)arglist[0], (int)(intptr_t)arglist[1]);
}

static void* __vararg_JS_VKeys_ClearHistory(void** arglist, int numparms)
{
	JS_VKeys_ClearHistory();
	return nullptr;
}

static void* __vararg_JS_VKeys_Intercept(void** arglist, int numparms)
{
	return (void*)(intptr_t)JS_VKeys_Intercept((int)(intptr_t)arglist[0], (int)(intptr_t)arglist[1]);
}

////////////////////////////////////////////////////////////////////////////

static void* __vararg_JS_WindowMessage_Post(void** arglist, int numparms)
{
  return (void*)(intptr_t)JS_WindowMessage_Post((void*)arglist[0], (const char*)arglist[1], (int)(intptr_t)arglist[2], (int)(intptr_t)arglist[3], (int)(intptr_t)arglist[4], (int)(intptr_t)arglist[5]);
}

static void* __vararg_JS_Window_OnCommand(void** arglist, int numparms)
{
	return (void*)JS_Window_OnCommand((void*)arglist[0], (int)(intptr_t)arglist[1]);
}

static void* __vararg_JS_WindowMessage_Send(void** arglist, int numparms)
{
  return (void*)(intptr_t)JS_WindowMessage_Send((void*)arglist[0], (const char*)arglist[1], (int)(intptr_t)arglist[2], (int)(intptr_t)arglist[3], (int)(intptr_t)arglist[4], (int)(intptr_t)arglist[5]);
}

static void* __vararg_JS_WindowMessage_Peek(void** arglist, int numparms)
{
  return (void*)(intptr_t)JS_WindowMessage_Peek((void*)arglist[0], (const char*)arglist[1], (bool*)arglist[2], (double*)arglist[3], (int*)arglist[4], (int*)arglist[5], (int*)arglist[6], (int*)arglist[7]);
}

static void* __vararg_JS_WindowMessage_Intercept(void** arglist, int numparms)
{
  return (void*)(intptr_t)JS_WindowMessage_Intercept((void*)arglist[0], (const char*)arglist[1], (bool)arglist[2]);
}

static void* __vararg_JS_WindowMessage_InterceptList(void** arglist, int numparms)
{
	return (void*)(intptr_t)JS_WindowMessage_InterceptList((void*)arglist[0], (const char*)arglist[1]);
}

static void* __vararg_JS_WindowMessage_PassThrough(void** arglist, int numparms)
{
	return (void*)(intptr_t)JS_WindowMessage_PassThrough(arglist[0], (const char*)arglist[1], (bool)arglist[2]);
}

static void* __vararg_JS_WindowMessage_ListIntercepts(void** arglist, int numparms)
{
  return (void*)(intptr_t)JS_WindowMessage_ListIntercepts((void*)arglist[0], (char*)arglist[1], (int)(intptr_t)arglist[2]);
}

static void* __vararg_JS_WindowMessage_Release(void** arglist, int numparms)
{
  return (void*)(intptr_t)JS_WindowMessage_Release((void*)arglist[0], (const char*)arglist[1]);
}

static void* __vararg_JS_WindowMessage_ReleaseWindow(void** arglist, int numparms)
{
  JS_WindowMessage_ReleaseWindow((void*)arglist[0]);
  return NULL;
}

static void* __vararg_JS_WindowMessage_ReleaseAll(void** arglist, int numparms)
{
  JS_WindowMessage_ReleaseAll();
  return NULL;
}

//////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////

static void* __vararg_JS_Mem_Alloc(void** arglist, int numparms)
{
	return JS_Mem_Alloc((int)(intptr_t)arglist[0]);
}

static void* __vararg_JS_Mem_Free(void** arglist, int numparms)
{
	return (void*)(intptr_t)JS_Mem_Free(arglist[0]);
}

static void* __vararg_JS_Mem_FromString(void** arglist, int numparms)
{
	return (void*)(intptr_t)JS_Mem_FromString(arglist[0], (int)(intptr_t)arglist[1], (const char*)arglist[2], (int)(intptr_t)arglist[3]);
}

static void* __vararg_JS_String(void** arglist, int numparms)
{
	return (void*)(intptr_t)JS_String(arglist[0], (int)(intptr_t)arglist[1], (int)(intptr_t)arglist[2], (char*)arglist[3], (int)(intptr_t)arglist[4]);
}

static void* __vararg_JS_Int(void** arglist, int numparms)
{
	JS_Int(arglist[0], (int)(intptr_t)arglist[1], (int*)arglist[2]);
	return NULL;
}

static void* __vararg_JS_Byte(void** arglist, int numparms)
{
	JS_Byte(arglist[0], (int)(intptr_t)arglist[1], (int*)arglist[2]);
	return NULL;
}

static void* __vararg_JS_Double(void** arglist, int numparms)
{
	JS_Double(arglist[0], (int)(intptr_t)arglist[1], (double*)arglist[2]);
	return NULL;
}


///////////////////////////////////////////////////////////////////////////

static void* __vararg_JS_Dialog_BrowseForSaveFile(void** arglist, int numparms)
{
	return (void*)(intptr_t)JS_Dialog_BrowseForSaveFile((const char*)arglist[0], (const char*)arglist[1], (const char*)arglist[2], (const char*)arglist[3], (char*)arglist[4], (int)(intptr_t)arglist[5]);
}

static void* __vararg_JS_Dialog_BrowseForOpenFiles(void** arglist, int numparms)
{
	return (void*)(intptr_t)JS_Dialog_BrowseForOpenFiles((const char*)arglist[0], (const char*)arglist[1], (const char*)arglist[2], (const char*)arglist[3], (bool)arglist[4], (char*)arglist[5], (int)(intptr_t)arglist[6]);
}

static void* __vararg_JS_Dialog_BrowseForFolder(void** arglist, int numparms)
{
	return (void*)(intptr_t)JS_Dialog_BrowseForFolder((const char*)arglist[0], (const char*)arglist[1], (char*)arglist[2], (int)(intptr_t)arglist[3]);
}

////////////////////////////////////////////////////////////////////////////

static void* __vararg_JS_Window_GetRect(void** arglist, int numparms)
{
  return (void*)(intptr_t)JS_Window_GetRect((void*)arglist[0], (int*)arglist[1], (int*)arglist[2], (int*)arglist[3], (int*)arglist[4]);
}

static void* __vararg_JS_Window_ScreenToClient(void** arglist, int numparms)
{
  JS_Window_ScreenToClient((void*)arglist[0], (int)(intptr_t)arglist[1], (int)(intptr_t)arglist[2], (int*)arglist[3], (int*)arglist[4]);
  return NULL;
}

static void* __vararg_JS_Window_ClientToScreen(void** arglist, int numparms)
{
  JS_Window_ClientToScreen((void*)arglist[0], (int)(intptr_t)arglist[1], (int)(intptr_t)arglist[2], (int*)arglist[3], (int*)arglist[4]);
  return NULL;
}

static void* __vararg_JS_Window_GetClientRect(void** arglist, int numparms)
{
  return (void*)(intptr_t)JS_Window_GetClientRect((void*)arglist[0], (int*)arglist[1], (int*)arglist[2], (int*)arglist[3], (int*)arglist[4]);
}

static void* __vararg_JS_Window_GetClientSize(void** arglist, int numparms)
{
	return (void*)(intptr_t)JS_Window_GetClientSize((void*)arglist[0], (int*)arglist[1], (int*)arglist[2]);
}

static void* __vararg_JS_Window_MonitorFromRect(void** arglist, int numparms)
{
	JS_Window_MonitorFromRect((int)(intptr_t)arglist[0], (int)(intptr_t)arglist[1], (int)(intptr_t)arglist[2], (int)(intptr_t)arglist[3], (bool)arglist[4], (int*)arglist[5], (int*)arglist[6], (int*)arglist[7], (int*)arglist[8]);
	return nullptr;
}

static void* __vararg_JS_Window_GetViewportFromRect(void** arglist, int numparms)
{
	JS_Window_GetViewportFromRect((int)(intptr_t)arglist[0], (int)(intptr_t)arglist[1], (int)(intptr_t)arglist[2], (int)(intptr_t)arglist[3], (bool)arglist[4], (int*)arglist[5], (int*)arglist[6], (int*)arglist[7], (int*)arglist[8]);
	return nullptr;
}

static void* __vararg_JS_Window_Update(void** arglist, int numparms)
{
	JS_Window_Update((HWND)arglist[0]);
	return nullptr;
}

static void* __vararg_JS_Window_InvalidateRect(void** arglist, int numparms)
{
	return (void*)(intptr_t)JS_Window_InvalidateRect((HWND)arglist[0], (int)(intptr_t)arglist[1], (int)(intptr_t)arglist[2], (int)(intptr_t)arglist[3], (int)(intptr_t)arglist[4], (bool)arglist[5]);
}

static void* __vararg_JS_Window_FromPoint(void** arglist, int numparms)
{
  return (void*)(intptr_t)JS_Window_FromPoint((int)(intptr_t)arglist[0], (int)(intptr_t)arglist[1]);
}

static void* __vararg_JS_Window_GetParent(void** arglist, int numparms)
{
  return (void*)(intptr_t)JS_Window_GetParent((void*)arglist[0]);
}

static void* __vararg_JS_Window_IsChild(void** arglist, int numparms)
{
  return (void*)(intptr_t)JS_Window_IsChild((void*)arglist[0], (void*)arglist[1]);
}

static void* __vararg_JS_Window_GetRelated(void** arglist, int numparms)
{
  return (void*)(intptr_t)JS_Window_GetRelated((void*)arglist[0], (const char*)arglist[1]);
}

static void* __vararg_JS_Window_FindChildByID(void** arglist, int numparms)
{
	return (void*)JS_Window_FindChildByID((HWND)arglist[0], (int)(intptr_t)arglist[1]);
}


static void* __vararg_JS_Window_SetFocus(void** arglist, int numparms)
{
  JS_Window_SetFocus((void*)arglist[0]);
  return NULL;
}

static void* __vararg_JS_Window_GetFocus(void** arglist, int numparms)
{
  return (void*)(intptr_t)JS_Window_GetFocus();
}

static void* __vararg_JS_Window_SetForeground(void** arglist, int numparms)
{
  JS_Window_SetForeground((void*)arglist[0]);
  return NULL;
}

static void* __vararg_JS_Window_GetForeground(void** arglist, int numparms)
{
  return (void*)(intptr_t)JS_Window_GetForeground();
}

static void* __vararg_JS_Window_Enable(void** arglist, int numparms)
{
  JS_Window_Enable((void*)arglist[0], (bool)arglist[1]);
  return NULL;
}

static void* __vararg_JS_Window_Destroy(void** arglist, int numparms)
{
  JS_Window_Destroy((void*)arglist[0]);
  return NULL;
}

static void* __vararg_JS_Window_Show(void** arglist, int numparms)
{
  JS_Window_Show((void*)arglist[0], (const char*)arglist[1]);
  return NULL;
}

static void* __vararg_JS_Window_IsVisible(void** arglist, int numparms)
{
  return (void*)(intptr_t)JS_Window_IsVisible((void*)arglist[0]);
}

static void* __vararg_JS_Window_FindEx(void** arglist, int numparms)
{
	return (void*)JS_Window_FindEx((HWND)arglist[0], (HWND)arglist[1], (const char*)arglist[2], (const char*)arglist[3]);
}

static void* __vararg_JS_Window_Find(void** arglist, int numparms)
{
  return (void*)(intptr_t)JS_Window_Find((const char*)arglist[0], (bool)arglist[1]);
}

static void* __vararg_JS_Window_FindChild(void** arglist, int numparms)
{
  return (void*)(intptr_t)JS_Window_FindChild((void*)arglist[0], (const char*)arglist[1], (bool)arglist[2]);
}

////////////////////////////////////////////////

static void* __vararg_JS_Window_ArrayAllChild(void** arglist, int numparms)
{
	return (void*)(intptr_t)JS_Window_ArrayAllChild((void*)arglist[0], (double*)arglist[1]);
}

static void* __vararg_JS_Window_ArrayAllTop(void** arglist, int numparms)
{
	return (void*)(intptr_t)JS_Window_ArrayAllTop((double*)arglist[0]);
}

static void* __vararg_JS_Window_ArrayFind(void** arglist, int numparms)
{
	return (void*)(intptr_t)JS_Window_ArrayFind((const char*)arglist[0], (bool)arglist[1], (double*)arglist[2]);
}

static void* __vararg_JS_MIDIEditor_ArrayAll(void** arglist, int numparms)
{
	return (void*)(intptr_t)JS_MIDIEditor_ArrayAll((double*)arglist[0]);
}

///////////////////////////////////////////////

static void* __vararg_JS_Window_ListAllChild(void** arglist, int numparms)
{
	return (void*)(intptr_t)JS_Window_ListAllChild((void*)arglist[0], (char*)arglist[1], (int)(intptr_t)arglist[2]);
}

static void* __vararg_JS_Window_ListAllTop(void** arglist, int numparms)
{
	return (void*)(intptr_t)JS_Window_ListAllTop((char*)arglist[0], (int)(intptr_t)arglist[1]);
}

static void* __vararg_JS_Window_ListFind(void** arglist, int numparms)
{
	return (void*)(intptr_t)JS_Window_ListFind((const char*)arglist[0], (bool)arglist[1], (char*)arglist[2], (int)(intptr_t)arglist[3]);
}

static void* __vararg_JS_MIDIEditor_ListAll(void** arglist, int numparms)
{
	return (void*)(intptr_t)JS_MIDIEditor_ListAll((char*)arglist[0], (int)(intptr_t)arglist[1]);
}

////////////////////////////////////////////////


static void* __vararg_JS_Window_Resize(void** arglist, int numparms)
{
  JS_Window_Resize((void*)arglist[0], (int)(intptr_t)arglist[1], (int)(intptr_t)arglist[2]);
  return NULL;
}

static void* __vararg_JS_Window_Move(void** arglist, int numparms)
{
  JS_Window_Move((void*)arglist[0], (int)(intptr_t)arglist[1], (int)(intptr_t)arglist[2]);
  return NULL;
}

static void* __vararg_JS_Window_SetPosition(void** arglist, int numparms)
{
  JS_Window_SetPosition((void*)arglist[0], (int)(intptr_t)arglist[1], (int)(intptr_t)arglist[2], (int)(intptr_t)arglist[3], (int)(intptr_t)arglist[4]);
  return NULL;
}

static void* __vararg_JS_Window_SetZOrder(void** arglist, int numparms)
{
	JS_Window_SetZOrder((void*)arglist[0], (const char*)arglist[1], (void*)arglist[2]);
	return NULL;
}

static void* __vararg_JS_Window_GetLongPtr(void** arglist, int numparms)
{
	return JS_Window_GetLongPtr((void*)arglist[0], (const char*)arglist[1]);
}

static void* __vararg_JS_Window_GetLong(void** arglist, int numparms)
{
	JS_Window_GetLong((void*)arglist[0], (const char*)arglist[1], (double*)arglist[2]);
	return nullptr;
}

static void* __vararg_JS_Window_SetOpacity(void** arglist, int numparms)
{
	return (void*)(intptr_t)JS_Window_SetOpacity((HWND)arglist[0], (const char*)arglist[1], arglist[2] ? *(double*)arglist[2] : 0.0);
}

static void* __vararg_JS_Window_GetTitle(void** arglist, int numparms)
{
	JS_Window_GetTitle((void*)arglist[0], (char*)arglist[1], (int)(intptr_t)arglist[2]);
	return NULL;
}

static void* __vararg_JS_Window_SetTitle(void** arglist, int numparms)
{
	return (void*)(intptr_t)JS_Window_SetTitle((void*)arglist[0], (const char*)arglist[1]);
}

static void* __vararg_JS_Window_GetClassName(void** arglist, int numparms)
{
	JS_Window_GetClassName((HWND)arglist[0], (char*)arglist[1], (int)(intptr_t)arglist[2]);
	return nullptr;
}

static void* __vararg_JS_Window_IsWindow(void** arglist, int numparms)
{
  return (void*)(intptr_t)JS_Window_IsWindow((void*)arglist[0]);
}

static void* __vararg_JS_Window_HandleFromAddress(void** arglist, int numparms)
{
  return (void*)(intptr_t)JS_Window_HandleFromAddress(arglist[0] ? *(double*)arglist[0] : 0.0);
}

static void* __vararg_JS_Window_AddressFromHandle(void** arglist, int numparms)
{
	JS_Window_AddressFromHandle(arglist[0], (double*)arglist[1]);
	return NULL;
}
