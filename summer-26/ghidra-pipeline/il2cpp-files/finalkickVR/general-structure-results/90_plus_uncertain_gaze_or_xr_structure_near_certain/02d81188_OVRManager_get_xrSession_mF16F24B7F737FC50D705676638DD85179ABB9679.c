/*
FUNCTION_NAME: OVRManager_get_xrSession_mF16F24B7F737FC50D705676638DD85179ABB9679
ENTRY_POINT: 02d81188
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 104
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_6;telemetry_or_network_hits_5;functionality_data_collection_or_telemetry_hits_5
*/


undefined8 OVRManager_get_xrSession_mF16F24B7F737FC50D705676638DD85179ABB9679(void)

{
  undefined8 uVar1;
  
  if ((OVRManager_get_xrSession_mF16F24B7F737FC50D705676638DD85179ABB9679::s_Il2CppMethodInitialized
      & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRManager_get_xrSession_mF16F24B7F737FC50D705676638DD85179ABB9679::s_Il2CppMethodInitialized =
         1;
  }
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  uVar1 = OVRPlugin_GetNativeOpenXRSession_m9310783676B3E115D4B3509CBE45D89BD61FC1BD(0);
  return uVar1;
}


