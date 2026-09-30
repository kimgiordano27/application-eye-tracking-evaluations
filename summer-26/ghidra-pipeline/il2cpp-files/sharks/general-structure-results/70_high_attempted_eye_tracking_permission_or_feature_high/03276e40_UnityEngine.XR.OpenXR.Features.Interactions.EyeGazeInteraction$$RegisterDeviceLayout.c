/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction$$RegisterDeviceLayout
ENTRY_POINT: 03276e40
PROGRAM: sharks-libil2cpp.so
SCORE: 89
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


undefined8
UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction__RegisterDeviceLayout(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x19;
  undefined8 uVar3;
  long unaff_x20;
  long unaff_x21;
  
  thunk_FUN_0188fd20();
  if (2 < *(uint *)(unaff_x21 + -0x10)) {
    *(undefined8 *)(unaff_x20 + 0x30) = *(undefined8 *)PTR_DAT_03830d78;
    thunk_FUN_0188fd20();
    lVar2 = *(long *)(unaff_x19 + 0xd8);
    if (lVar2 == 0) {
LAB_0327712c:
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    if (*(uint *)(unaff_x19 + 0xe0) < *(uint *)(lVar2 + 0x18)) {
      lVar2 = *(long *)(lVar2 + (long)(int)*(uint *)(unaff_x19 + 0xe0) * 8 + 0x20);
      if (lVar2 == 0) goto LAB_0327712c;
      uVar1 = FUN_033ed158(lVar2,0);
      if (3 < *(uint *)(unaff_x20 + 0x18)) {
        *(undefined8 *)(unaff_x20 + 0x38) = uVar1;
        thunk_FUN_0188fd20((undefined8 *)(unaff_x20 + 0x38),uVar1);
        if (4 < *(uint *)(unaff_x20 + 0x18)) {
          *(undefined8 *)(unaff_x20 + 0x40) = *(undefined8 *)PTR_DAT_03830d70;
          thunk_FUN_0188fd20();
          uVar1 = FUN_02a507f8();
          lVar2 = *(long *)(unaff_x19 + 0xd8);
          if (lVar2 == 0) goto LAB_0327712c;
          if (*(uint *)(unaff_x19 + 0xe0) < *(uint *)(lVar2 + 0x18)) {
            uVar3 = *(undefined8 *)(lVar2 + (long)(int)*(uint *)(unaff_x19 + 0xe0) * 8 + 0x20);
            if (*(int *)(*(long *)PTR_DAT_037f2d40 + 0xe0) == 0) {
              thunk_FUN_01843fdc();
            }
            FUN_033bdbb8(uVar1,uVar3,0);
            return 0;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc5b0();
}


