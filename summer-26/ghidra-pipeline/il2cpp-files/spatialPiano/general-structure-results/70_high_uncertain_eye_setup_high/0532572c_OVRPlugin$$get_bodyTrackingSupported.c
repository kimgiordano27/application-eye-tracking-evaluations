/*
FUNCTION_NAME: OVRPlugin$$get_bodyTrackingSupported
ENTRY_POINT: 0532572c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_bodyTrackingSupported(void)

{
  ulong uVar1;
  long lVar2;
  long unaff_x21;
  undefined8 uVar3;
  long *unaff_x23;
  undefined4 uStack0000000000000004;
  
  uVar3 = *(undefined8 *)(unaff_x21 + 0x20);
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar1 = FUN_060f078c(uVar3,0,0);
  if ((uVar1 & 1) != 0) {
    if ((*(long *)(unaff_x21 + 0x20) == 0) ||
       (lVar2 = *(long *)(*(long *)(unaff_x21 + 0x20) + 0x18), lVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uStack0000000000000004 = 0;
    (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40));
  }
  lVar2 = *(long *)(*(long *)(*(long *)PTR_DAT_067ca768 + 0xb8) + 8);
  if (lVar2 != 0) {
    uStack0000000000000004 = 0;
    (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40));
  }
  return;
}


