/*
FUNCTION_NAME: OVRPlugin$$get_batteryStatus
ENTRY_POINT: 0693e5c8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin__get_batteryStatus(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  undefined8 *unaff_x23;
  
  FUN_07cb26a0();
  if (unaff_x21 != 0) {
    FUN_07cb2800();
    if (((*(long *)(unaff_x19 + 0x10) != 0) &&
        (lVar2 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0xe8), lVar2 != 0)) &&
       (lVar2 = *(long *)(lVar2 + 0x40), lVar2 != 0)) {
      lVar2 = *(long *)(lVar2 + 0xb8);
      uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
      FUN_07cb26a0();
      if (lVar2 != 0) {
        FUN_07cb2800(lVar2,uVar1,0);
        return unaff_w20 & 1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


