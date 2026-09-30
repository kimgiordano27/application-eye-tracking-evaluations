/*
FUNCTION_NAME: OVRPlugin$$get_hasVrFocus
ENTRY_POINT: 0693d9b0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_hasVrFocus(void)

{
  ulong uVar1;
  long *unaff_x19;
  float fVar2;
  
  fVar2 = (float)FUN_07c94120();
  (**(code **)(*unaff_x19 + 0x318))(fVar2 * *(float *)((long)unaff_x19 + 0x24));
  if (unaff_x19[6] != 0) {
    uVar1 = FUN_07c35ac4(unaff_x19[6],0);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*unaff_x19 + 0x2d8))();
    }
    *(undefined4 *)((long)unaff_x19 + 0x3c) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


