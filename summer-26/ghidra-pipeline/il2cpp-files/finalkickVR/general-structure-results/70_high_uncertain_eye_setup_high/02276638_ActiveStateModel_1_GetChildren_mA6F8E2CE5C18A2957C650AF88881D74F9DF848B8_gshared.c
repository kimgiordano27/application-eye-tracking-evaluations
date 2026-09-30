/*
FUNCTION_NAME: ActiveStateModel_1_GetChildren_mA6F8E2CE5C18A2957C650AF88881D74F9DF848B8_gshared
ENTRY_POINT: 02276638
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_9;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined8
ActiveStateModel_1_GetChildren_mA6F8E2CE5C18A2957C650AF88881D74F9DF848B8_gshared
          (Il2CppObject *param_1,Il2CppObject *param_2,long param_3)

{
  Il2CppClass *pIVar1;
  Il2CppObject *pIVar2;
  undefined8 local_18;
  
  if ((ActiveStateModel_1_GetChildren_mA6F8E2CE5C18A2957C650AF88881D74F9DF848B8_gshared::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_OVRManager_Observable<OVRManager_PassthroughInitializationState>_get_Value__);
    ActiveStateModel_1_GetChildren_mA6F8E2CE5C18A2957C650AF88881D74F9DF848B8_gshared::
    s_Il2CppMethodInitialized = 1;
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 022765d8 with catch @ 02276678
                        */
                    /* try { // try from 02276680 to 02376997 has its CatchHandler @ 02276680
                       catch() { ... } // from try @ 02276680 with catch @ 02276680
                       catch() { ... } // from try @ 02276d84 with catch @ 02276680
                       catch() { ... } // from try @ 02276dec with catch @ 02276680
                       catch() { ... } // from try @ 02276e9c with catch @ 02276680 */
  pIVar1 = (Il2CppClass *)
           il2cpp_rgctx_data(*(Il2CppRGCTXData **)(*(long *)(param_3 + 0x20) + 0xc0),0);
  pIVar2 = (Il2CppObject *)IsInst(param_2,pIVar1);
  pIVar1 = (Il2CppClass *)
           il2cpp_rgctx_data(*(Il2CppRGCTXData **)(*(long *)(param_3 + 0x20) + 0xc0),0);
  pIVar2 = (Il2CppObject *)Castclass(pIVar2,pIVar1);
  if (pIVar2 == (Il2CppObject *)0x0) {
    local_18 = Enumerable_Empty_TisIActiveState_tE0F401037570483F58CD8CD4ED2A862D494517EB_m4101554C42980F8811D5517B932B0F581A323A4A_inline
                         (*(MethodInfo **)
                           Method_OVRManager_Observable<OVRManager_PassthroughInitializationState>_get_Value__
                         );
  }
  else {
    local_18 = VirtualFuncInvoker1<Il2CppObject*,Il2CppObject*>::Invoke(5,param_1,pIVar2);
  }
  return local_18;
}


