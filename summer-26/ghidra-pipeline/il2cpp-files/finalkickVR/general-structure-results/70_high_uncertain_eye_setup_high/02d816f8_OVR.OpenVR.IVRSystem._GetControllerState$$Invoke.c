/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._GetControllerState$$Invoke
ENTRY_POINT: 02d816f8
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 82
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVR_OpenVR_IVRSystem__GetControllerState__Invoke(long param_1)

{
  undefined4 uVar1;
  long unaff_x29;
  byte bStack000000000000000f;
  
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)**(undefined8 **)(param_1 + 0x6b8));
  bStack000000000000000f = OVRManager_get_isHmdPresent_m098F56E4E9C2ECAC87EAB61C7680F0FBD2A2C445(0);
  bStack000000000000000f = bStack000000000000000f & 1;
  if (bStack000000000000000f != 0) {
    uVar1 = *(undefined4 *)(unaff_x29 + -4);
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRPlugin_set_suggestedCpuPerfLevel_m0CA3B9722D6D34AD41A978A5A0B5D1C966D237A8(uVar1,0);
  }
  return;
}


