/*
FUNCTION_NAME: FUN_033ab2f8
ENTRY_POINT: 033ab2f8
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 71
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_gaze_retrieval_or_extraction
*/


byte FUN_033ab2f8(long *param_1)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  bool bVar5;
  uint uVar6;
  
  do {
                    /* try { // try from 033ab314 to 034ab40b has its CatchHandler @ 033ab314
                       catch() { ... } // from try @ 033ab314 with catch @ 033ab314
                       catch() { ... } // from try @ 033abb58 with catch @ 033ab314
                       catch() { ... } // from try @ 033abbd4 with catch @ 033ab314
                       catch() { ... } // from try @ 033abbfc with catch @ 033ab314
                       catch() { ... } // from try @ 033abe34 with catch @ 033ab314
                       catch() { ... } // from try @ 033abe3c with catch @ 033ab314
                       catch() { ... } // from try @ 033abf60 with catch @ 033ab314 */
    uVar2 = (**(code **)(*param_1 + 0x388))(param_1,*(undefined8 *)(*param_1 + 0x390));
    if ((uVar2 & 1) != 0) {
      return 1;
    }
    uVar2 = (**(code **)(*param_1 + 0x408))(param_1,*(undefined8 *)(*param_1 + 0x410));
    plVar3 = param_1;
    if ((uVar2 & 1) == 0) goto LAB_033ab358;
    param_1 = (long *)(**(code **)(*param_1 + 0x418))(param_1,*(undefined8 *)(*param_1 + 0x420));
  } while (param_1 != (long *)0x0);
  goto LAB_033ab3a0;
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
  while( true ) {
    if ((uVar1 & 7) != 2) {
      return 0;
    }
    plVar3 = (long *)(**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
    if (plVar3 == (long *)0x0) break;
LAB_033ab358:
    uVar2 = FUN_033ab490(plVar3);
    uVar1 = (**(code **)(*plVar3 + 0x4a8))(plVar3,*(undefined8 *)(*plVar3 + 0x4b0));
    if ((uVar2 & 1) == 0) {
      if ((uVar1 & 7) != 1) {
        return 0;
      }
      uVar2 = (**(code **)(*param_1 + 0x3a8))(param_1,*(undefined8 *)(*param_1 + 0x3b0));
      if (((uVar2 & 1) == 0) ||
         (uVar2 = (**(code **)(*param_1 + 0x3b8))(param_1,*(undefined8 *)(*param_1 + 0x3c0)),
         (uVar2 & 1) != 0)) {
        return 1;
      }
      lVar4 = (**(code **)(*param_1 + 0x458))(param_1,*(undefined8 *)(*param_1 + 0x460));
      if (lVar4 != 0) {
        uVar1 = *(uint *)(lVar4 + 0x18);
        bVar5 = 0 < (int)uVar1;
        if ((int)uVar1 < 1) goto LAB_033ab45c;
        uVar6 = 0;
        goto OVRManager__set_trackingOriginType;
      }
      break;
    }
  }
LAB_033ab3a0:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


