/*
FUNCTION_NAME: OVR.OpenVR.IVRChaperoneSetup._SetWorkingCollisionBoundsTagsInfo$$Invoke
ENTRY_POINT: 02d8e370
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ray_interaction;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


byte OVR_OpenVR_IVRChaperoneSetup__SetWorkingCollisionBoundsTagsInfo__Invoke(long param_1)

{
  byte bVar1;
  
  if ((*(byte *)(param_1 + 0x5e7) & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRManager_IsInsightPassthroughSupported_m7DF8A3280003DDF6DDEC9D69A23E89332751C72A::
    s_Il2CppMethodInitialized = 1;
  }
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  bVar1 = OVRPlugin_IsInsightPassthroughSupported_m7AE9F209201C3853A8DBF56F8AD3DAAA13ED8529(0);
  return bVar1 & 1;
}


