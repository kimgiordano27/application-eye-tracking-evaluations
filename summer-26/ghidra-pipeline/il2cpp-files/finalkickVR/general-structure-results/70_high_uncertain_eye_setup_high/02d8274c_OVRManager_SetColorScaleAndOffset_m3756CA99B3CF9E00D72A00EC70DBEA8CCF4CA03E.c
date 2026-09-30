/*
FUNCTION_NAME: OVRManager_SetColorScaleAndOffset_m3756CA99B3CF9E00D72A00EC70DBEA8CCF4CA03E
ENTRY_POINT: 02d8274c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;ui_or_gameplay_sink_hits_5;functionality_eye_api_context_without_clear_sink_hits_5
*/


void OVRManager_SetColorScaleAndOffset_m3756CA99B3CF9E00D72A00EC70DBEA8CCF4CA03E
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
               byte param_9)

{
  if ((OVRManager_SetColorScaleAndOffset_m3756CA99B3CF9E00D72A00EC70DBEA8CCF4CA03E::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRManager_SetColorScaleAndOffset_m3756CA99B3CF9E00D72A00EC70DBEA8CCF4CA03E::
    s_Il2CppMethodInitialized = 1;
  }
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  OVRPlugin_SetColorScaleAndOffset_m23BE07937AE6D262C0264959EDA7050DC48B22F7
            (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9 & 1,0);
  return;
}


