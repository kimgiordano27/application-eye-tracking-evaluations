/*
FUNCTION_NAME: OVRManager$$set_colorGamut
ENTRY_POINT: 02fc651c
PROGRAM: vrfs-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRManager__set_colorGamut(void)

{
  long lVar1;
  long unaff_x19;
  long unaff_x21;
  
  FUN_015c2790();
  lVar1 = thunk_FUN_015d056c();
  if (lVar1 != 0) {
    (**(code **)(*(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x98) + 8))();
    *(long *)(unaff_x19 + 0x40) = lVar1;
    thunk_FUN_01656ef8();
    return *(undefined8 *)(unaff_x19 + 0x40);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


