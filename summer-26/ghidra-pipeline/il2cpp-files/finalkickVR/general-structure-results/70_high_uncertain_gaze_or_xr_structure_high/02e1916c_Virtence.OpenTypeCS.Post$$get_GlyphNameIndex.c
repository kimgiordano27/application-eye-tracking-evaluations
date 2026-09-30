/*
FUNCTION_NAME: Virtence.OpenTypeCS.Post$$get_GlyphNameIndex
ENTRY_POINT: 02e1916c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 77
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


byte Virtence_OpenTypeCS_Post__get_GlyphNameIndex(long param_1)

{
  byte bVar1;
  
  if ((*(byte *)(param_1 + 0x604) & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRTracker_get_isPositionTracked_mE9A6204989140E34AB187178E6A268C9A1F492C0::
    s_Il2CppMethodInitialized = 1;
  }
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  bVar1 = OVRPlugin_get_positionTracked_m2CDA85E3B5D4C1672B87AA635F1A659E9B2BDB71(0);
  return bVar1 & 1;
}


