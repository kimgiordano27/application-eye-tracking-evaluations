/*
FUNCTION_NAME: OVRManager_get_hasInputFocus_m253B15D1BC6272BF1ECA54344D7EF3AEF3B9A0A0
ENTRY_POINT: 02d7fc48
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_10;ui_or_gameplay_sink_hits_5;functionality_eye_api_context_without_clear_sink_hits_5
*/


byte OVRManager_get_hasInputFocus_m253B15D1BC6272BF1ECA54344D7EF3AEF3B9A0A0(void)

{
  byte bVar1;
  
  if ((OVRManager_get_hasInputFocus_m253B15D1BC6272BF1ECA54344D7EF3AEF3B9A0A0::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRManager_get_hasInputFocus_m253B15D1BC6272BF1ECA54344D7EF3AEF3B9A0A0::
    s_Il2CppMethodInitialized = 1;
  }
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  bVar1 = OVRPlugin_get_hasInputFocus_m26E031618D6BF901538C11D3A4FF8F82208BEEDD(0);
  return bVar1 & 1;
}


