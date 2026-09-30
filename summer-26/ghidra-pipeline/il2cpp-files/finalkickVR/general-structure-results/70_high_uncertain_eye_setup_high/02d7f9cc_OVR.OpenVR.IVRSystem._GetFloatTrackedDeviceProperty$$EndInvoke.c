/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._GetFloatTrackedDeviceProperty$$EndInvoke
ENTRY_POINT: 02d7f9cc
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined8 OVR_OpenVR_IVRSystem__GetFloatTrackedDeviceProperty__EndInvoke(void)

{
  undefined8 uVar1;
  
  if ((OVRManager_get_audioOutId_m651EBD87C90304B389EE161C3CF7C34B871A8C14::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRManager_get_audioOutId_m651EBD87C90304B389EE161C3CF7C34B871A8C14::s_Il2CppMethodInitialized =
         1;
  }
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  uVar1 = OVRPlugin_get_audioOutId_m5D5085CAAC63B5F1C4FB8E2160278EBC7BC7CCDA(0);
  return uVar1;
}


