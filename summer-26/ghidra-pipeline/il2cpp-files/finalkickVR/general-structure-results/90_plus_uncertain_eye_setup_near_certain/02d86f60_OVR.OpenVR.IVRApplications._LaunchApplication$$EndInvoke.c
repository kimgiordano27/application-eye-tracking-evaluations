/*
FUNCTION_NAME: OVR.OpenVR.IVRApplications._LaunchApplication$$EndInvoke
ENTRY_POINT: 02d86f60
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 94
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVR_OpenVR_IVRApplications__LaunchApplication__EndInvoke(ulong param_1)

{
  long unaff_x29;
  byte bStack000000000000000f;
  
  if ((param_1 & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRManager_Awake_mA05D8839D3601DAB90A8782566C092B01B462F9C::s_Il2CppMethodInitialized = 1;
  }
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  bStack000000000000000f = OVRPlugin_get_initialized_m7D7AAEEED41ED4B5798882B6038CF169E2BF0443(0);
  bStack000000000000000f = bStack000000000000000f & 1;
  if (bStack000000000000000f != 0) {
    OVRManager_InitOVRManager_m70F462CB3521560EDE92D4C54EF0FAD199386053
              (*(undefined8 *)(unaff_x29 + -8),0);
  }
  return;
}


