/*
FUNCTION_NAME: Focusable_GetFocusDelegate_m7BF3D03D334FD0BB0C00B07227118C94127BEB83
ENTRY_POINT: 045bc598
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_12;functionality_eye_api_context_without_clear_sink_hits_2
*/


Il2CppObject *
Focusable_GetFocusDelegate_m7BF3D03D334FD0BB0C00B07227118C94127BEB83(Il2CppObject *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 local_28;
  
  local_28 = param_1;
  if ((Focusable_GetFocusDelegate_m7BF3D03D334FD0BB0C00B07227118C94127BEB83::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__);
    Focusable_GetFocusDelegate_m7BF3D03D334FD0BB0C00B07227118C94127BEB83::s_Il2CppMethodInitialized
         = 1;
  }
  while( true ) {
    if (local_28 == (Il2CppObject *)0x0) {
      bVar1 = 0;
    }
    else {
      NullCheck(local_28);
      bVar1 = Focusable_get_delegatesFocus_m3EC6CEC9B7570A921855A9A91291FF4AA45D40AC(local_28,0);
      bVar1 = bVar1 & 1;
    }
    if (bVar1 == 0) break;
    uVar2 = IsInstClass(local_28,*(Il2CppClass **)
                                  Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__);
    local_28 = (Il2CppObject *)
               Focusable_GetFirstFocusableChild_mA5CDE2800BF048A5A00AF10160E550969C5D0420(uVar2,0);
  }
  return local_28;
}


