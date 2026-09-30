/*
FUNCTION_NAME: OVRManager$$GetSpaceWarp
ENTRY_POINT: 033ab328
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_2;functionality_gaze_retrieval_or_extraction
*/


byte OVRManager__GetSpaceWarp(long param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  code *in_x9;
  long *unaff_x19;
  bool bVar5;
  uint uVar6;
  
  while (uVar2 = (*in_x9)(param_2,*(undefined8 *)(param_1 + 0x410)), plVar3 = unaff_x19,
        (uVar2 & 1) != 0) {
    param_2 = (long *)(**(code **)(*unaff_x19 + 0x418))
                                (unaff_x19,*(undefined8 *)(*unaff_x19 + 0x420));
    if (param_2 == (long *)0x0) goto LAB_033ab3a0;
    uVar2 = (**(code **)(*param_2 + 0x388))(param_2,*(undefined8 *)(*param_2 + 0x390));
    if ((uVar2 & 1) != 0) {
      return 1;
    }
    param_1 = *param_2;
    in_x9 = *(code **)(param_1 + 0x408);
    unaff_x19 = param_2;
  }
  do {
    uVar2 = FUN_033ab490(plVar3);
    uVar1 = (**(code **)(*plVar3 + 0x4a8))(plVar3,*(undefined8 *)(*plVar3 + 0x4b0));
    if ((uVar2 & 1) == 0) {
      if ((uVar1 & 7) != 1) {
        return 0;
      }
      uVar2 = (**(code **)(*unaff_x19 + 0x3a8))(unaff_x19,*(undefined8 *)(*unaff_x19 + 0x3b0));
      if (((uVar2 & 1) == 0) ||
         (uVar2 = (**(code **)(*unaff_x19 + 0x3b8))(unaff_x19,*(undefined8 *)(*unaff_x19 + 0x3c0)),
         (uVar2 & 1) != 0)) {
        return 1;
      }
      lVar4 = (**(code **)(*unaff_x19 + 0x458))(unaff_x19,*(undefined8 *)(*unaff_x19 + 0x460));
      if (lVar4 != 0) {
        uVar1 = *(uint *)(lVar4 + 0x18);
        bVar5 = 0 < (int)uVar1;
        if ((int)uVar1 < 1) goto LAB_033ab45c;
        uVar6 = 0;
        goto OVRManager__set_trackingOriginType;
      }
      break;
    }
    if ((uVar1 & 7) != 2) {
      return 0;
    }
    plVar3 = (long *)(**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
  } while (plVar3 != (long *)0x0);
LAB_033ab3a0:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
  while( true ) {
    uVar1 = *(uint *)(lVar4 + 0x18);
    uVar6 = uVar6 + 1;
    bVar5 = (int)uVar6 < (int)uVar1;
    if ((int)uVar1 <= (int)uVar6) break;
OVRManager__set_trackingOriginType:
    if (uVar1 <= uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db78();
    }
    if (*(long *)(lVar4 + (long)(int)uVar6 * 8 + 0x20) == 0) goto LAB_033ab3a0;
    uVar2 = FUN_033ab2f8();
    if ((uVar2 & 1) == 0) break;
  }
LAB_033ab45c:
  return bVar5 ^ 1;
}


