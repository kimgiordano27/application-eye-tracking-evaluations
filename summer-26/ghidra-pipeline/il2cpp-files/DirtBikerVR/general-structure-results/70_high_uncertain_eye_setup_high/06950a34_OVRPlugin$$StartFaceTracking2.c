/*
FUNCTION_NAME: OVRPlugin$$StartFaceTracking2
ENTRY_POINT: 06950a34
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin__StartFaceTracking2(void)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x21;
  
  *(undefined1 *)(unaff_x21 + 0x1d) = 1;
  uVar1 = FUN_0693651c();
  if ((uVar1 & 1) == 0) {
LAB_06950abc:
    return uVar1 & 1;
  }
  *(undefined1 *)(unaff_x19 + 0x21) = 0;
  if (((*(long *)(unaff_x19 + 0x10) != 0) &&
      (lVar3 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0xe8), lVar3 != 0)) &&
     (lVar3 = *(long *)(lVar3 + 0x40), lVar3 != 0)) {
    lVar3 = *(long *)(lVar3 + 0xd0);
    uVar2 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084b68c8);
    FUN_069445ec();
    if (lVar3 != 0) {
      FUN_04de9ad0(lVar3,uVar2,*(undefined8 *)PTR_DAT_084b68d0);
      goto LAB_06950abc;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


