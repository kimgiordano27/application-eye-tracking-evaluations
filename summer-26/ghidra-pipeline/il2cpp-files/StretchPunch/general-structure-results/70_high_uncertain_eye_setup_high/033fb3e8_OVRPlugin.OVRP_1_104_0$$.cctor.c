/*
FUNCTION_NAME: OVRPlugin.OVRP_1_104_0$$.cctor
ENTRY_POINT: 033fb3e8
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_104_0___cctor(void)

{
  long lVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x24;
  
  if ((unaff_x20 == 0) && (unaff_x21 == 0)) {
    lVar1 = *unaff_x24;
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
      lVar1 = *unaff_x24;
    }
    lVar1 = **(long **)(lVar1 + 0xb8);
  }
  else {
    lVar1 = thunk_FUN_01de27b8(*unaff_x24);
    FUN_033d8040(lVar1,0);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    *(undefined8 *)(lVar1 + 0x10) = unaff_x19;
    thunk_FUN_01e10808();
    *(undefined8 *)(lVar1 + 0x20) = 0;
    thunk_FUN_01e10808((undefined8 *)(lVar1 + 0x20),0);
    *(long *)(lVar1 + 0x38) = unaff_x21;
    thunk_FUN_01e10808();
    *(long *)(lVar1 + 0x40) = unaff_x20;
    thunk_FUN_01e10808();
    *(uint *)(lVar1 + 0x30) = *(uint *)(lVar1 + 0x30) | 1;
  }
  return lVar1;
}


