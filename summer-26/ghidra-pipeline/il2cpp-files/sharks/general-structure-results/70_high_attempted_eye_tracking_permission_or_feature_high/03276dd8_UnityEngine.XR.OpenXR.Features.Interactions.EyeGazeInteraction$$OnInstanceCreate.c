/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction$$OnInstanceCreate
ENTRY_POINT: 03276dd8
PROGRAM: sharks-libil2cpp.so
SCORE: 89
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


undefined8 UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction__OnInstanceCreate(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x19;
  undefined8 uVar4;
  
  lVar1 = FUN_017fc3f4(*(undefined8 *)PTR_DAT_037f2cb0,5);
  if (lVar1 == 0) goto LAB_0327712c;
  if (*(int *)(lVar1 + 0x18) != 0) {
    *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)PTR_DAT_03830d80;
    thunk_FUN_0188fd20((undefined8 *)(lVar1 + 0x20));
    uVar2 = FUN_033ed158();
    if (1 < *(uint *)(lVar1 + 0x18)) {
      *(undefined8 *)(lVar1 + 0x28) = uVar2;
      thunk_FUN_0188fd20((undefined8 *)(lVar1 + 0x28),uVar2);
      if (2 < *(uint *)(lVar1 + 0x18)) {
        *(undefined8 *)(lVar1 + 0x30) = *(undefined8 *)PTR_DAT_03830d78;
        thunk_FUN_0188fd20();
        lVar3 = *(long *)(unaff_x19 + 0xd8);
        if (lVar3 == 0) {
LAB_0327712c:
                    /* WARNING: Subroutine does not return */
          FUN_017fc5a8();
        }
        if (*(uint *)(unaff_x19 + 0xe0) < *(uint *)(lVar3 + 0x18)) {
          lVar3 = *(long *)(lVar3 + (long)(int)*(uint *)(unaff_x19 + 0xe0) * 8 + 0x20);
          if (lVar3 == 0) goto LAB_0327712c;
          uVar2 = FUN_033ed158(lVar3,0);
          if (3 < *(uint *)(lVar1 + 0x18)) {
            *(undefined8 *)(lVar1 + 0x38) = uVar2;
            thunk_FUN_0188fd20((undefined8 *)(lVar1 + 0x38),uVar2);
            if (4 < *(uint *)(lVar1 + 0x18)) {
              *(undefined8 *)(lVar1 + 0x40) = *(undefined8 *)PTR_DAT_03830d70;
              thunk_FUN_0188fd20();
              uVar2 = FUN_02a507f8(lVar1,0);
              lVar1 = *(long *)(unaff_x19 + 0xd8);
              if (lVar1 == 0) goto LAB_0327712c;
              if (*(uint *)(unaff_x19 + 0xe0) < *(uint *)(lVar1 + 0x18)) {
                uVar4 = *(undefined8 *)(lVar1 + (long)(int)*(uint *)(unaff_x19 + 0xe0) * 8 + 0x20);
                if (*(int *)(*(long *)PTR_DAT_037f2d40 + 0xe0) == 0) {
                  thunk_FUN_01843fdc();
                }
                FUN_033bdbb8(uVar2,uVar4,0);
                return 0;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc5b0();
}


