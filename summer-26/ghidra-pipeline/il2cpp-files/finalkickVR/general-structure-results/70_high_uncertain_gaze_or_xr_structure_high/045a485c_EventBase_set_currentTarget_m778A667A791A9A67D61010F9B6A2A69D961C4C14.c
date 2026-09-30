/*
FUNCTION_NAME: EventBase_set_currentTarget_m778A667A791A9A67D61010F9B6A2A69D961C4C14
ENTRY_POINT: 045a485c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_gaze_retrieval_or_extraction
*/


void EventBase_set_currentTarget_m778A667A791A9A67D61010F9B6A2A69D961C4C14
               (undefined1 param_1 [16],undefined4 param_2,Il2CppObject *param_3,void *param_4)

{
  long lVar1;
  Il2CppObject *pIVar2;
  void *pvVar3;
  undefined4 uVar4;
  
  if ((EventBase_set_currentTarget_m778A667A791A9A67D61010F9B6A2A69D961C4C14::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__);
    EventBase_set_currentTarget_m778A667A791A9A67D61010F9B6A2A69D961C4C14::s_Il2CppMethodInitialized
         = 1;
  }
  *(void **)(param_3 + 0x68) = param_4;
  Il2CppCodeGenWriteBarrier((void **)(param_3 + 0x68),param_4);
  lVar1 = EventBase_get_imguiEvent_m45ABCDC6423D27EF44F7E29661B249D238765DB0(param_3,0);
  if (lVar1 != 0) {
    pIVar2 = (Il2CppObject *)VirtualFuncInvoker0<Il2CppObject*>::Invoke(10,param_3);
    lVar1 = IsInstClass(pIVar2,*(Il2CppClass **)
                                Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__);
    if (lVar1 == 0) {
      pvVar3 = (void *)EventBase_get_imguiEvent_m45ABCDC6423D27EF44F7E29661B249D238765DB0(param_3);
      uVar4 = EventBase_get_originalMousePosition_mCFBF87CA4B5FAC3020630860CDEBB332A189C78A_inline
                        ((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C *)param_3,
                         (MethodInfo *)0x0);
      NullCheck(pvVar3);
      Event_set_mousePosition_m221CDC5C9556DE91E82242A693D9E14FAC371F38(uVar4,param_2,pvVar3,0);
    }
    else {
      pvVar3 = (void *)EventBase_get_imguiEvent_m45ABCDC6423D27EF44F7E29661B249D238765DB0(param_3);
      uVar4 = EventBase_get_originalMousePosition_mCFBF87CA4B5FAC3020630860CDEBB332A189C78A_inline
                        ((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C *)param_3,
                         (MethodInfo *)0x0);
      uVar4 = VisualElementExtensions_WorldToLocal_m9AB4674D3198B2C87E9D53DB56077BA769059EF9
                        (uVar4,lVar1,0);
      NullCheck(pvVar3);
      Event_set_mousePosition_m221CDC5C9556DE91E82242A693D9E14FAC371F38(uVar4,param_2,pvVar3,0);
    }
  }
  return;
}


