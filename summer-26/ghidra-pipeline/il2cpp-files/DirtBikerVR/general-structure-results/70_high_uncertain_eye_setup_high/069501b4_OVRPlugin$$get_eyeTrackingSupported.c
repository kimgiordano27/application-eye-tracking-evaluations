/*
FUNCTION_NAME: OVRPlugin$$get_eyeTrackingSupported
ENTRY_POINT: 069501b4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRPlugin__get_eyeTrackingSupported(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x21;
  
  uVar1 = FUN_067637c8(&stack0x0000000c,0);
  uVar1 = FUN_065c0764(*unaff_x21,uVar1,0);
  if (*(int *)(*unaff_x20 + 0xe4) == 0) {
    thunk_FUN_03ae8be4(*unaff_x20);
  }
  FUN_07c4f4f4(uVar1,0);
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    lVar2 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x58);
    if (lVar2 != 0) {
      FUN_0694f02c(lVar2,*(undefined8 *)(unaff_x19 + 0x28));
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


