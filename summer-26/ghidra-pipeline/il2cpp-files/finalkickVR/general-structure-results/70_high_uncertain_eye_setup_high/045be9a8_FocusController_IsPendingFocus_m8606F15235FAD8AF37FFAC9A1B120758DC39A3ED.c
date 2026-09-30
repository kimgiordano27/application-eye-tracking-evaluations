/*
FUNCTION_NAME: FocusController_IsPendingFocus_m8606F15235FAD8AF37FFAC9A1B120758DC39A3ED
ENTRY_POINT: 045be9a8
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 70
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;ui_or_gameplay_sink_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined1
FocusController_IsPendingFocus_m8606F15235FAD8AF37FFAC9A1B120758DC39A3ED
          (long param_1,VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *param_2,
          undefined8 param_3)

{
  VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *pVVar1;
  undefined8 local_40;
  undefined1 local_32;
  undefined1 local_31;
  VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *local_30;
  undefined8 local_28;
  VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *local_20;
  long local_18;
  
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  if ((FocusController_IsPendingFocus_m8606F15235FAD8AF37FFAC9A1B120758DC39A3ED::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__);
    FocusController_IsPendingFocus_m8606F15235FAD8AF37FFAC9A1B120758DC39A3ED::
    s_Il2CppMethodInitialized = 1;
  }
  local_30 = (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *)0x0;
  local_31 = 0;
  local_32 = 0;
  local_40 = 0;
  local_30 = (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *)
             IsInstClass(*(Il2CppObject **)(local_18 + 0x30),
                         *(Il2CppClass **)
                          Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__);
  while( true ) {
    pVVar1 = local_30;
    if (local_30 == (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *)0x0) {
      return 0;
    }
    local_31 = local_20 == local_30;
    if ((bool)local_31) break;
    NullCheck(local_30);
    local_40 = VisualElement_get_hierarchy_m2E897DE4CFD349E65CFA38EFF6BAAFECE2F4E3E4_inline
                         (pVVar1,(MethodInfo *)0x0);
    local_30 = (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *)
               Hierarchy_get_parent_m1CB3F7548632A5B5747041AF64B12BB0E0F402D4(&local_40,0);
  }
  return 1;
}


