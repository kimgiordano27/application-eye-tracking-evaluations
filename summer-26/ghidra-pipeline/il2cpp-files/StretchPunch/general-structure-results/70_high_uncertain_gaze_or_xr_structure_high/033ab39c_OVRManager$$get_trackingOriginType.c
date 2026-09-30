/*
FUNCTION_NAME: OVRManager$$get_trackingOriginType
ENTRY_POINT: 033ab39c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_10;validity_or_gating_hits_2;functionality_gaze_retrieval_or_extraction
*/


byte OVRManager__get_trackingOriginType(long *param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long *unaff_x19;
  bool bVar4;
  long *unaff_x20;
  uint uVar5;
  
  while (param_1 != (long *)0x0) {
    uVar2 = FUN_033ab490(unaff_x20);
    uVar1 = (**(code **)(*unaff_x20 + 0x4a8))(unaff_x20,*(undefined8 *)(*unaff_x20 + 0x4b0));
    if ((uVar2 & 1) == 0) {
      if ((uVar1 & 7) != 1) {
        return 0;
      }
      uVar2 = (**(code **)(*unaff_x19 + 0x3a8))();
      if (((uVar2 & 1) == 0) || (uVar2 = (**(code **)(*unaff_x19 + 0x3b8))(), (uVar2 & 1) != 0)) {
        return 1;
      }
      lVar3 = (**(code **)(*unaff_x19 + 0x458))();
                    /* try { // try from 033ab40c to 034ab433 has its CatchHandler @ 033abec4 */
      if (lVar3 != 0) {
        uVar1 = *(uint *)(lVar3 + 0x18);
        bVar4 = 0 < (int)uVar1;
        if ((int)uVar1 < 1) goto LAB_033ab45c;
        uVar5 = 0;
        goto OVRManager__set_trackingOriginType;
      }
      break;
    }
    if ((uVar1 & 7) != 2) {
      return 0;
    }
    param_1 = (long *)(**(code **)(*unaff_x20 + 0x1b8))
                                (unaff_x20,*(undefined8 *)(*unaff_x20 + 0x1c0));
    unaff_x20 = param_1;
  }
LAB_033ab3a0:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
  while( true ) {
    uVar1 = *(uint *)(lVar3 + 0x18);
    uVar5 = uVar5 + 1;
    bVar4 = (int)uVar5 < (int)uVar1;
    if ((int)uVar1 <= (int)uVar5) break;
OVRManager__set_trackingOriginType:
    if (uVar1 <= uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db78();
    }
    if (*(long *)(lVar3 + (long)(int)uVar5 * 8 + 0x20) == 0) goto LAB_033ab3a0;
    uVar2 = FUN_033ab2f8();
    if ((uVar2 & 1) == 0) break;
  }
LAB_033ab45c:
  return bVar4 ^ 1;
}


