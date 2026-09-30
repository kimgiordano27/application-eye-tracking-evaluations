/*
FUNCTION_NAME: OVRPlugin$$get_eyeTrackingSupported
ENTRY_POINT: 033cf210
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined8 OVRPlugin__get_eyeTrackingSupported(void)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long *unaff_x22;
  
  uVar1 = FUN_01f26d0c();
  if ((int)uVar1 < 0) {
    uVar3 = 0;
  }
  else {
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    lVar2 = FUN_033c6380();
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    if (*(uint *)(lVar2 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db78();
    }
    uVar3 = *(undefined8 *)(lVar2 + (ulong)uVar1 * 8 + 0x20);
  }
  return uVar3;
}


