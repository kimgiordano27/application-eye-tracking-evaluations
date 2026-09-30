/*
FUNCTION_NAME: OVRPlugin$$StartFaceTracking
ENTRY_POINT: 0601c354
PROGRAM: vandalizer-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__StartFaceTracking(undefined8 param_1,undefined4 param_2)

{
  ulong uVar1;
  long lVar2;
  long in_x9;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  undefined8 uVar3;
  
  uVar3 = FUN_0601ca4c(param_1,param_2,*(undefined4 *)(in_x9 + 0x20));
  lVar2 = *(long *)(unaff_x19 + 0x30);
  if (lVar2 != 0) {
    if (*(uint *)(lVar2 + 0x18) <= unaff_w20) {
LAB_0601c430:
                    /* WARNING: Subroutine does not return */
      FUN_031f2398();
    }
    lVar2 = *(long *)(lVar2 + unaff_x21 * 8 + 0x20);
    if (lVar2 != 0) {
      uVar1 = FUN_0601cb94(*(undefined4 *)(lVar2 + 0x18),*(undefined4 *)(lVar2 + 0x1c),
                           *(undefined4 *)(lVar2 + 0x20));
      if ((uVar1 & 1) == 0) {
LAB_0601c3e4:
        uVar1 = (ulong)(*(char *)(unaff_x19 + 0x10) == '\0');
        FUN_0601c998(uVar3,*(undefined4 *)(&DAT_014bc998 + uVar1 * 4),
                     *(undefined4 *)(&DAT_014bc418 + uVar1 * 4),DAT_014ba83c);
        return;
      }
      lVar2 = *(long *)(unaff_x19 + 0x30);
      if (lVar2 != 0) {
        if (*(uint *)(lVar2 + 0x18) <= unaff_w20) goto LAB_0601c430;
        lVar2 = *(long *)(lVar2 + unaff_x21 * 8 + 0x20);
        if (lVar2 != 0) {
          uVar3 = FUN_0601ca4c(*(undefined4 *)(lVar2 + 0x18),*(undefined4 *)(lVar2 + 0x1c),
                               *(undefined4 *)(lVar2 + 0x20));
          goto LAB_0601c3e4;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


