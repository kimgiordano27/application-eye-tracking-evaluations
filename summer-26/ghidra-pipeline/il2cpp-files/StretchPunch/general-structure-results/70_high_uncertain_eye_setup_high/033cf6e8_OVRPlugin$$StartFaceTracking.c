/*
FUNCTION_NAME: OVRPlugin$$StartFaceTracking
ENTRY_POINT: 033cf6e8
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__StartFaceTracking(void)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long lVar5;
  long *unaff_x24;
  ulong unaff_x25;
  long unaff_x26;
  
  do {
    if (unaff_x21 == (long *)0x0) {
LAB_033cf798:
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    lVar5 = *(long *)(unaff_x26 + unaff_x25 * 8);
    if ((lVar5 != 0) &&
       (lVar1 = thunk_FUN_01de26bc(lVar5,*(undefined8 *)(*unaff_x21 + 0x40)), lVar1 == 0)) {
      uVar3 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
      FUN_01d7da3c(uVar3,0);
    }
    if (*(uint *)(unaff_x21 + 3) <= unaff_x25) break;
    *unaff_x22 = lVar5;
    thunk_FUN_01e10808(unaff_x22,lVar5);
    unaff_x25 = unaff_x25 + 1;
    if ((long)(int)*(uint *)(unaff_x20 + 0x18) <= (long)unaff_x25) {
      uVar2 = FUN_032fcd14(0);
      if ((uVar2 & 1) == 0) {
        thunk_FUN_01dd295c(StringLiteral_2940);
        uVar4 = thunk_FUN_01de27b8();
        FUN_033a33d0(uVar4,0);
        uVar3 = thunk_FUN_01dd295c(StringLiteral_8945);
                    /* WARNING: Subroutine does not return */
        FUN_01d7da3c(uVar4,uVar3);
      }
      lVar5 = *unaff_x24;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
        lVar5 = *unaff_x24;
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x30);
      if (lVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x033cf790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40));
        return;
      }
      goto LAB_033cf798;
    }
    unaff_x22 = unaff_x22 + 1;
  } while (unaff_x25 < *(uint *)(unaff_x20 + 0x18));
                    /* WARNING: Subroutine does not return */
  FUN_01d7db78();
}


