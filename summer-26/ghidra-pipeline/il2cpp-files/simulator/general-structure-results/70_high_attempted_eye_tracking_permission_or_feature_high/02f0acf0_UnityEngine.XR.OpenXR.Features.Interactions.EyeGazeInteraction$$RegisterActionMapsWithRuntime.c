/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction$$RegisterActionMapsWithRuntime
ENTRY_POINT: 02f0acf0
PROGRAM: simulator-libil2cpp.so
SCORE: 83
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


undefined8
UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction__RegisterActionMapsWithRuntime(void)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  int *piVar5;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  
  FUN_018c48dc();
  FUN_018c48dc(PTR_DAT_034c59d8);
  FUN_018c48dc(PTR_DAT_034c73c0);
  *(undefined1 *)(unaff_x22 + 0xd4) = 1;
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_018cd5b0();
  }
  uVar1 = FUN_02f0aaa8();
  if (((uVar1 & 1) == 0) ||
     (uVar1 = FUN_02f3eea8(*(undefined8 *)(unaff_x21 + 0x78)), (uVar1 & 1) == 0)) {
    return 0;
  }
  if (unaff_x19 != (long *)0x0) {
    lVar4 = *unaff_x19;
    uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar1 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_034c59d8) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar5 + 7) * 0x10 + 0x138);
          goto LAB_02f0ada8;
        }
        uVar1 = uVar1 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_018a8460();
LAB_02f0ada8:
    uVar1 = (*(code *)*puVar2)();
    if ((uVar1 & 1) == 0) {
      return 0;
    }
    if (unaff_x20 != (long *)0x0) {
      lVar4 = *unaff_x20;
      uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar1 != 0) {
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_034c5938) {
            puVar2 = (undefined8 *)(lVar4 + (long)(*piVar5 + 8) * 0x10 + 0x138);
            goto LAB_02f0ae2c;
          }
          uVar1 = uVar1 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar1 != 0);
      }
      puVar2 = (undefined8 *)FUN_018a8460();
LAB_02f0ae2c:
                    /* WARNING: Could not recover jumptable at 0x02f0ae44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*(code *)*puVar2)();
      return uVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_018c4afc();
}


