/*
FUNCTION_NAME: OVR.OpenVR.IVRExtendedDisplay._GetDXGIOutputInfo$$BeginInvoke
ENTRY_POINT: 02d83bac
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 82
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVR_OpenVR_IVRExtendedDisplay__GetDXGIOutputInfo__BeginInvoke(long param_1)

{
  undefined4 uVar1;
  byte bVar2;
  long unaff_x29;
  byte bStack0000000000000017;
  
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)**(undefined8 **)(param_1 + 0x6b8));
  bStack0000000000000017 = OVRManager_get_isHmdPresent_m098F56E4E9C2ECAC87EAB61C7680F0FBD2A2C445(0);
  bStack0000000000000017 = bStack0000000000000017 & 1;
  if (bStack0000000000000017 != 0) {
    uVar1 = *(undefined4 *)(unaff_x29 + -0xc);
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    bVar2 = OVRPlugin_SetTrackingOriginType_mC03CEE60AF8A00DE01E5071C8CCBE8C366ED2105(uVar1,0);
    if ((bVar2 & 1) != 0) {
      *(undefined4 *)(*(long *)(unaff_x29 + -8) + 0x108) = *(undefined4 *)(unaff_x29 + -0xc);
    }
  }
  return;
}


