/*
FUNCTION_NAME: MouseEventBase_1_set_currentTarget_mD39FAFD35E984665C58ACA2EC0A3BEAE6AFC2AB6_gshared
ENTRY_POINT: 02397124
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void MouseEventBase_1_set_currentTarget_mD39FAFD35E984665C58ACA2EC0A3BEAE6AFC2AB6_gshared
               (undefined1 param_1 [16],undefined4 param_2,Il2CppObject *param_3,undefined8 param_4,
               long param_5)

{
  Il2CppObject *pIVar1;
  long lVar2;
  MethodInfo *pMVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  
  if ((MouseEventBase_1_set_currentTarget_mD39FAFD35E984665C58ACA2EC0A3BEAE6AFC2AB6_gshared::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__);
    MouseEventBase_1_set_currentTarget_mD39FAFD35E984665C58ACA2EC0A3BEAE6AFC2AB6_gshared::
    s_Il2CppMethodInitialized = 1;
  }
  NullCheck(param_3);
  EventBase_set_currentTarget_m778A667A791A9A67D61010F9B6A2A69D961C4C14(param_3,param_4,0);
  NullCheck(param_3);
  pIVar1 = (Il2CppObject *)VirtualFuncInvoker0<Il2CppObject*>::Invoke(10,param_3);
  lVar2 = IsInstClass(pIVar1,*(Il2CppClass **)
                              Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__);
  if (lVar2 == 0) {
    pMVar3 = (MethodInfo *)
             il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(param_5 + 0x20) + 0xc0),0xb);
    uVar5 = MouseEventBase_1_get_mousePosition_m9500F15E521DB6D033D36F8AF69F9BD9748BE02E_inline
                      ((MouseEventBase_1_t5B5081D29C8BECF72DF89EF50BB137E251C48228 *)param_3,pMVar3)
    ;
    uVar4 = il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(param_5 + 0x20) + 0xc0),6);
    MouseEventBase_1_set_localMousePosition_mAD296699BFDFA698EF9BD0F43E85D10797EE6E35_inline
              (uVar5,param_2,param_3,uVar4);
  }
  else {
    pMVar3 = (MethodInfo *)
             il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(param_5 + 0x20) + 0xc0),0xb);
    uVar5 = MouseEventBase_1_get_mousePosition_m9500F15E521DB6D033D36F8AF69F9BD9748BE02E_inline
                      ((MouseEventBase_1_t5B5081D29C8BECF72DF89EF50BB137E251C48228 *)param_3,pMVar3)
    ;
    uVar5 = VisualElementExtensions_WorldToLocal_m9AB4674D3198B2C87E9D53DB56077BA769059EF9
                      (uVar5,lVar2,0);
    uVar4 = il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(param_5 + 0x20) + 0xc0),6);
    MouseEventBase_1_set_localMousePosition_mAD296699BFDFA698EF9BD0F43E85D10797EE6E35_inline
              (uVar5,param_2,param_3,uVar4);
  }
  return;
}


